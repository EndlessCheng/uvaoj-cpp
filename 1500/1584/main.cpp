#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    for (cin >> t; t--;) {
        string s;
        cin >> s;
        string ans = s;
        int n = s.size();
        s += s;
        for (int i = 1; i < n; i++) {
            string ss = s.substr(i, n);
            if (ss < ans) {
                ans = ss;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
