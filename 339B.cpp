#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin>>n>>m;
long long x,crnt=1,result=0;
for(int i = 0; i<m;i++){
    cin>> x;
    if (crnt<= x){
    result+=x-crnt;
    }
    else{
    result+=n-(crnt-x);
    }
    crnt=x;
}
cout << result;
}
