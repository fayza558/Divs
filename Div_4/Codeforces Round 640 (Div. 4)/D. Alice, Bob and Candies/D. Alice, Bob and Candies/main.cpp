#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, alice = 0, bob = 0, cntr = 1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int p1 = 0, p2 = n - 1;
        alice = arr[0];
        p1++;
        bool isBob = true;
        long long new_alice = alice, new_bob = bob;

        while (p1 <= p2)
        {
            cntr++;
            if (isBob)
            {
                new_bob = 0;
                while (p1 <= p2 && new_alice >= new_bob)
                {
                    new_bob += arr[p2];
                    p2--;
                }
                bob += new_bob;
                isBob = false;
            }
            else
            {
                new_alice = 0;
                while (p1 <= p2 && new_alice <= new_bob)
                {
                    new_alice += arr[p1];
                    p1++;
                }
                alice += new_alice;
                isBob = true;
            }
        }
        cout << cntr << " " << alice << " " << bob << endl;
    }
    return 0;
}
