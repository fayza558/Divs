#include <iostream>
#include<vector>
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
      vector<int>even;
      vector<int>odd;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          if(i%2==0)
          {
              even.push_back(arr[i]);
          }else{
              odd.push_back(arr[i]);
          }
      }
      int e1=0,e2=0;
      for(int i=0;i<even.size();i++)
      {
          if(even[i]%2==0)
          {
              e1++;
          }else e2++;
      }
      if(e1==0||e2==0)
      {
          int o1=0,o2=0;
          for(int i=0;i<odd.size();i++)
          {
              if(odd[i]%2==0)
              {
                  o1++;
              }else o2++;
          }
          if(o1==0||o2==0)
          {
              cout<<"YES"<<endl;
          }else cout<<"NO"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }

    }
    return 0;
}



