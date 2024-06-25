
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
        ll int n,target;
        cin>>n>>target;
        vector<ll int>a(n);
        for(ll int i=0;i<n;i++){
            cin>>a[i];
        }
        int index1=0,index2=n-1;
        while(index1<index2){
            if(a[index1]+a[index2]>target){
                index2--;
            }
            else if (a[index1]+a[index2]<target)
            {
                index1++;
            }
            else{
                break;
            }
        }
        if(index1==index2){
            cout<<-1;
        }
        else{
            cout<<index1+1<<" "<<index2+1<<"\n";
        }
    
    }
return 0;
}