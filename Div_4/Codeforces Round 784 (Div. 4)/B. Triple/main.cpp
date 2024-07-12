#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int res = -1;
        for (auto &m : mp)
        {
            if (m.second >= 3)
            {
                res = m.first;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
