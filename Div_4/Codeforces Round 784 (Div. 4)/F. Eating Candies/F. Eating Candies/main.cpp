#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int p1=0,p2=n-1;

        int cntr=0;
         int alice=0,bob=0;
        while(p1<=p2)
        {
           if(alice<=bob)
           {
               alice+=arr[p1];
               p1++;

           }else {
                 bob+=arr[p2];
               p2--;
           }
           if(alice==bob)
           {
               cntr=max(cntr,p1+(n-p2-1));
           }
        }
        cout<<cntr<<endl;
    }
    return 0;
}
