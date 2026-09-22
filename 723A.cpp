#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x1,x2,x3;
cin >> x1 >> x2 >> x3;
cout << max({x1,x2,x3}) - min({x1,x2,x3});
}
