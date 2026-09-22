#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(0);
cin.tie(0);
string a;
bool d=true;
cin >> a;
int n=stoi(a);
if (n%4==0 || n%7==0 || n%47==0 || n%74==0){
cout << "YES";
return 0 ;}
for(int i = 0; i<a.length();i++ ){
    if (a[i]!='4'&& a[i]!='7'){
    d=false;
    break;}
    }

if(d){
cout << "YES";
}
else{
cout << "NO";}
}
