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
int n;
string u,d;
bool can(int i,int j,vector<vector<int>>&b){
    if(i<0 || j<0)return 0;
    if(b[i][j]!=-1){
        return b[i][j];
    }
    else{
        bool ans;
        if(i==0){
            ans= ((u[j-1]=='>')&&(can(i,j-2,b)|| can((i+1)%2,j-1,b)));
            
        }else{
        ans= ((d[j-1]=='>')&&(can(i,j-2,b)|| can((i+1)%2,j-1,b)));
        }
        b[i][j]=ans;
        return ans;

    }

}
void solve(){
    
        cin>>n;
        cin>>u>>d;
        vector<vector<int>>b(2,vector<int>(n,-1));
        b[0][0]=1;
        
        if(can(1,n-1,b)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
        return;
        
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