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
        int n;cin>>n;
        string b[2];
        cin>>b[0]>>b[1];
        string s="";
        int row=0;
        int ans=1;
        for(int i=0;i<n;i++){
            // cout<<i<<" "<<s<<"\n";
            if(i==n-1){
                if(row==0){
                    s+=(b[0][i]);
                    s+=b[1][i];
                }
                else{
                    s+=b[1][i];
                }
                continue;
            }

            if(row==1){
                s+=(b[row][i]);
            }
            else{s+=(b[row][i]);
                if(b[row][i+1]==b[row+1][i]){
                    
                    ans+=1;
                }else{
                    if(b[row][i+1]=='0'){
                        ans=1;
                    }
                    else{

                        row=1;
                        i--;
                    }
                }
                
                
            }
        }
        cout<<s<<"\n";
        cout<<ans<<"\n";

    }
return 0;
}