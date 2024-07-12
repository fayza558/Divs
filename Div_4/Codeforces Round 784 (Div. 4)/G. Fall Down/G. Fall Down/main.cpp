

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n][m];


        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }


        for (int j = 0; j < m; j++)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i][j] == '*')
                {
                    int k = i;
                    while (k + 1 < n && arr[k + 1][j] == '.')
                    {
                        swap(arr[k][j], arr[k + 1][j]);
                        k++;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

