
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
        string s;
        cin>>s;
        vector<char> closing;
        int j=0;
        for(char x:s){
            if(x=='('){
                closing.push_back(')');
            }
            else if (x=='[')
            {
                closing.push_back(']');
            }
            else if (x=='{')
            {
                closing.push_back('}');
            }
            else{
                if(closing.back()==x){
                    closing.pop_back();
                }
                else{
                    j=1;
                    break;
                }

            }   
        }
        if(j==0){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
return 0;
}