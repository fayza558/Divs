#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int g[n + 1][n + 1];
        map<int, int> p;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> g[i][j];
                int index = i + j;
                if(p.count(index) == 0) {
                    p[index] = g[i][j];
                }
            }
        }

        set<int> sett;
        for(auto val : p) {
            sett.insert(val.second);
        }

        for(int num = 1; num <= 2 * n; num++) {
            if(sett.find(num) == sett.end()) {
                for(int i = 1; i <= 2 * n; i++) {
                    if(p.count(i) == 0) {
                        p[i] = num;
                        break;
                    }
                }
                break;
            }
        }

        for(int i = 1; i <= 2 * n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}