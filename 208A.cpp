#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
string s;
bool ilkBosluq = true , bosluq = false;
cin >> s;
for (int i = 0 ; i<s.length() ; i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        i=i+2;
        bosluq=true;
                }
    else{
        if(bosluq && !ilkBosluq){
            cout << ' ';
            }
        cout<<s[i];
        bosluq = false;
        ilkBosluq = false;
        }
    }
}

