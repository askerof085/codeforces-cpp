#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
    cin >> n;
    unordered_map<string, int> database;
    while (n--) {
        string name;
        cin >> name;
        if (database.find(name) == database.end()) {
            database[name] = 1;
            cout << "OK\n";
        }
        else {
            cout << name << database[name] << "\n";
            database[name]++;
        }
    }

    return 0;
}
