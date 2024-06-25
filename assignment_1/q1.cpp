#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>
#include<unordered_map>

using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin>>t;
    while(t--){
        ll int n,k;
        cin>>n>>k;
        vector<ll int> a(n+1);
        a[0]=0;
        ll int temp;
        for(ll int i=0;i<n;i++){
            cin>>temp;
            a[i+1]=a[i]+temp;
        }
        ll int length=1;
        for(;length<=n;length++){
            int j=0;
            for(int i=0;i<=n-length;i++){
                if(a[i+length]-a[i]>=k){
                    j=1;
                    break;
                }
            }
            if(j==1){
                break;
            }
        }
        if(length>n){
            cout<<-1<<"\n";
        }
        else{
            cout<<length<<"\n";
        }  
    }
return 0;
}