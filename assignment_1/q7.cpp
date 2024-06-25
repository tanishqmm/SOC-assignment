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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int i=31;
        int ans=1;
        for (; i >= 0; i--) {
            if (x&(1<<i)) {break;}
        }

        for (; i >= 0; i--) {
            if (!(x&(1<<i))){
                ans*=2;
            } 
        }

        cout<<ans;

    }
return 0;
}