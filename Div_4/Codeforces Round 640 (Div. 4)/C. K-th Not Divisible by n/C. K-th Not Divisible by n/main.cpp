#include <iostream>

using namespace std;
int oo=1e9+1;
int notDivisible(int n)
{
    for(int i=2;i<oo;i++)
    {
        if(n%i!=0)
        {
            return i;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int l=0,r=oo;
        int mid;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(notDivisible(mid)<k)
            {
                l=mid-1;
            }
            else if(notDivisible(mid)>k)
            {
                r=mid+1;
            }
            else
            {
                l=mid;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
