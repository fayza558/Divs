
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Check for the odd partition possibility
        if ((n - (k - 1)) > 0 && (n - (k - 1)) % 2 == 1) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << 1 << ' ';
            }
            cout << (n - (k - 1)) << endl;
        }
        // Check for the even partition possibility
        else if ((n - 2 * (k - 1)) > 0 && (n - 2 * (k - 1)) % 2 == 0) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << 2 << ' ';
            }
            cout << (n - 2 * (k - 1)) << endl;
        }
        // If neither condition is satisfied, output NO
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

