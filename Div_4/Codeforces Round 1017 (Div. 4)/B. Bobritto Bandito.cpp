#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,m,l,r;
      cin>>n>>m>>l>>r;
      int a=-l;
      int b=r;
      int x=min(m,a);
      int lprime=-x;
      int rprime=m-x;
      cout<<lprime<<" "<<rprime<<endl;
    }

    return 0;
}