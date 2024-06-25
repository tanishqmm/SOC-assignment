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
#define outa(arr,n) rp(i,n){cin>>arr[i]<<' ';}
#define sorta(vec) sort(vec.begin(),vec.end())
#define sortd(vec) sort(vec.rbegin(),vec.rend())

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n),xora(n+1);
        unordered_map<int,int>p;
        p[0]=1;
        ina(a,n);
        xora[0]=0;
        int ans=0;
        for(int i=1;i<=n;i++){
            
            ans+=p[(xora[i-1]^m^a[i-1])];
            xora[i]=xora[i-1]^a[i-1];
            p[xora[i]]+=1;
            
        }

        cout<<ans;


    }
return 0;
}