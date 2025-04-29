#include <iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        long long  arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        set<long long >set1;

        for(long long i=0;i<n;i++){
            set1.insert(arr[i]);
        }
        cout<<set1.size()<<endl;

    }
    return 0;
}
