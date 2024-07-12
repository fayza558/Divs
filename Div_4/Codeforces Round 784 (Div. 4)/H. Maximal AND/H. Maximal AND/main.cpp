#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max_and = 0;
        for (int bit = 30; bit >= 0; bit--) {
            int cntr = 0;
            for (int i = 0; i < n; i++) {

                if ((arr[i] & (1 << bit)) == 0) {
                    cntr++;
                }
            }
            if (cntr <= k) {
                k -= cntr;
                max_and |= (1 << bit);
                for (int i = 0; i < n; i++) {
                    if ((arr[i] & (1 << bit)) == 0) {
                        arr[i] |= (1 << bit);
                    }
                }
            }
        }
        cout << max_and << endl;
    }
    return 0;
}

