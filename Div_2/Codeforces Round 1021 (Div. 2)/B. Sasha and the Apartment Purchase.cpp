#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        multiset<int> s;
        for (int i = 0; i < n; i++) {
            if (abs(i - (n - i - 1)) <= k + 1) {
                s.insert(a[i]);
            }
        }

        cout << *s.rbegin() - *s.begin() + 1 << endl;
    }

    return 0;
}


