#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t,n;
cin>> t;
for(int i = 0 ; i<t ; i++){
    int say = 0 ;
    cin >> n ;
    vector<int>v(n);
    for(int j = 0 ; j<n ; j++){
        cin >> v[i];}
        for(int k=0 ;k<v.size(); k++){
            if (v[k]!=count(v.begin(), v.end(), v[k])){
                v.erase(v.begin()+k);
                say++;
                }
            }


    cout<< say;
    }

}
