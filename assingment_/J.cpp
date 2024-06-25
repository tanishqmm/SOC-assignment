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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        ina(a,n);
        map<double,ll int>m;
        rp(i,n){
            m[a[i]-log2l(a[i])]+=1;
        }
        ll int ans=0;
        for(auto x:m){
            if(x.second>1){
                ans+=(x.second*(x.second-1))/2;
            }
        }
        cout<<ans<<"\n";
    }
    
return 0;
}