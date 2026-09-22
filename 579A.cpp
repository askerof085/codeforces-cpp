#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x, eded = 1;
int cnt = 0;
cin >> x;
while(true){
if(x-eded!=0){
cnt++;
x-=eded;}
else break;
while (eded*2<x){
eded*=2;
}
}
cout << cnt;
}
