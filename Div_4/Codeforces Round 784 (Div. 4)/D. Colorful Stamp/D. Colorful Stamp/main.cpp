

#include <iostream>
#include <string>

using namespace std;

void burn() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int p = 0;
    while (p < s.size()) {
        bool R = false, B = false;
        while (p < s.size() && s[p] != 'W') {
            if (s[p] == 'R') R = true;
            else if (s[p] == 'B') B = true;
            p++;
        }
        if (B^R) {
            cout << "NO" << endl;
            return;
        }
        p++;
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        burn();
    }
    return 0;
}


