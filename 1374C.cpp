#include <bits/stdc++.h>
using namespace std;
int main(){
cin.tie(nullptr);
ios::sync_with_stdio(false);
int t;
cin >> t;
while(t--){
    int n,open_brackets=0;
    string s;
    cin >> n >> s;
    for(int i = 0 ; i<n ; i++){
            if(s[i]=='('){
                open_brackets++;
                }
            else if(open_brackets>0) open_brackets--;

            }
    cout << open_brackets << "\n";
    }
}

