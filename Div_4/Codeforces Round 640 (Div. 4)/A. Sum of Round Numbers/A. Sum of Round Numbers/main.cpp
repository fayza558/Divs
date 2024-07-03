
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> v;
        int factor=1;
        int n;
        cin >> n;
        int cntr = 0;
        while(n > 0)
        {
            int k = n % 10;

            if(k!=0)
            {
                v.push_back(k*factor);
            }
            n /= 10;
            factor*=10;


        }
        cout << v.size()<< endl;


      reverse(v.begin(),v.end());
      for(int i=0;i<v.size();i++)
      {
          cout<<v[i]<<" ";
      }
        cout << endl;
    }
    return 0;
}


