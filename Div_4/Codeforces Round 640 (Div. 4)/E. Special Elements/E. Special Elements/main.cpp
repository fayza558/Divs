#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<long long> v;
    vector<long long> pref;
    unordered_set<long long> sett;
    unordered_set<long long> ans;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long cntr = 0;
        v.resize(n);
        pref.clear();
        sett.clear();
        ans.clear();
        pref.resize(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sett.insert(v[i]);
        }

        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + v[i];
        }

        for (int i = 0; i < n + 1; i++)
        {
            for (int j = i + 1; j < n + 1; j++)
            {
                long long target = pref[j] - pref[i];
                if (j - i > 1 && sett.find(target) != sett.end())
                {
                    ans.insert(target);
                }
            }
        }

        for (long long  &x : v)
        {
            if (ans.find(x) != ans.end())
            {
                cntr++;
            }
        }
        cout << cntr << endl;
    }
    return 0;
}
