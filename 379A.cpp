#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int a,b,c;
cin >> a >> b;
int sum = a;
while (a>=b){
    c=a%b;
    a=a/b;
    sum+=a;
    a+=c;
    }
cout << sum;
}
