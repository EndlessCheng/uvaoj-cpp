#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool is_left = true;
    for (string line; getline(cin, line);) {
        for (char c : line) {
            if (c == '"') {
                cout << (is_left ? "``" : "''");
                is_left = !is_left;
            } else {
                cout << c;
            }
        }
        cout << '\n';
    }
    return 0;
}
