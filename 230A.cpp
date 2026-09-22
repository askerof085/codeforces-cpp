#include <bits/stdc++.h>
using namespace std;
struct dragon{
int health;
int reward;};
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int s,n;
cin >> s >> n;
vector<dragon>dragons(n);
for (int i = 0 ; i<n ; i++){
    cin >> dragons[i].health >> dragons[i].reward;
    }
sort(dragons.begin(),dragons.end(),[](dragon a , dragon b){
return  a.health<b.health;
});
for (int i = 0 ; i<n ; i++){
    if (s>dragons[i].health ) s+=dragons[i].reward;
    else{
    cout << "NO";
    return 0 ;}}
cout << "YES";
}

