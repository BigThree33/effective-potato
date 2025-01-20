#include<iostream>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << ((a > b) ? b : a + b) << endl;
    //holyshit！！
}

int main() {
    int T = 1;
    cin >> T;
    while(T --) {
        solve();
    }
    return 0;
}