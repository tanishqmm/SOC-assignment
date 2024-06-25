//I am beginner dont hack me plzzz :-)
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>
#include<unordered_map>
#include<set>
#include<utility>
#include<queue>

using namespace std;
#define ll long long
#define rp(i,n) for(ll int i=0;i<n;i++)
#define ina(arr,n) rp(i,n){cin>>arr[i];}
#define outa(arr,n) rp(i,n){cout<<arr[i]<<' ';}
#define sorta(vec) sort(vec.begin(),vec.end())
#define sortd(vec) sort(vec.rbegin(),vec.rend())
#define all(arr) arr.begin(),arr.end()
#define vi vector<int>
#define vll vector<long long int>
#define vvll vector<vector<ll int>>
#define YES cout<<"YES"<<"\n"
#define NO cout<<"NO"<<"\n"

void solve(){
    int n;cin>>n;
        vll c(n);
        ina(c,n);
        sorta(c);
        if(c[0]==1){
        ll int sum=1;
        rp(i,n-1){
            if(sum<c[i+1]){
                cout<<"NO"<<"\n";
                return;
            }
            sum+=c[i+1];
        }
        cout<<"YES"<<"\n";
        return ;
        }
        else{
            cout<<"NO"<<"\n";
                return;
        }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin>>t;
    while(t--){
        solve();
    }
    

return 0;
}