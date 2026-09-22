#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int a , x,y,z , bir=0 , iki=0 , uc=0;
cin >> a;
for (int i = 0 ; i<a ; i++){
    cin >> x >> y >> z;
    bir+=x , iki+=y , uc+=z;
    }
if(bir==0 && iki==0 && uc==0){
cout << "YES";}
else{
cout << "NO";}
}
