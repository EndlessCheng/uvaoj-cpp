#include <iostream>

using namespace std;

int main() {
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
