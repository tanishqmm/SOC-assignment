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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll int>a(n);
        rp(i,n){
            cin>>a[i];
        }
        int i=0;
        for(;i<n-1;i++){
            if(a[i]>a[i+1]){
                break;
            }
        }
        if(i==n-1){cout<<a[0]<<endl;}
        else
        cout<<a[i+1]<<endl;

    }
return 0;
}