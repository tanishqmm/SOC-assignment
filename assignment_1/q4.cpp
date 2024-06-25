//I am beginner dont hack me plzzz :-)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string> 
#include<cmath>
#include<map>
#include<unordered_map>

using namespace std;
#define ll long long
#define rp(i,n) for(ll int i=0;i<n;i++)
#define ina(arr,n) rp(i,n){cin>>arr[i];}
#define outa(arr,n) rp(i,n){cout<<arr[i]<<' ';}
#define sorta(vec) sort(vec.begin(),vec.end())
#define sortd(vec) sort(vec.rbegin(),vec.rend())

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int z;
    cin>>z;
    while(z--){
        ll int t;
        cin>>t;
        vector<ll int>a(t),ans(t);
        vector<vector<ll int>>values(t);
        rp(i,t){
            cin>>a[i];
        }
        ans[0]=a[0];
        values[0].push_back(a[0]);
        for(ll int i=1;i<t;i++){
            if(a[i]>ans[i-1]+a[i]){
                
            values[i].push_back(a[i]);
            }
            else{
                for (int j=0; j<values[i-1].size(); j++)  {
                    values[i].push_back(values[i-1][j]); 
                }
                values[i].push_back(a[i]);
                
            }
            ans[i]=max(a[i],ans[i-1]+a[i]);
        }
        
        int index=0;
        rp(i,t){
            if(ans[index]<ans[i]){
                index=i;
            }
        }
        cout<<ans[index]<<"\n";
        for(auto x:values[index]){
            cout<<x<<" "; 
        }

        cout<<endl;
    }



return 0;
}