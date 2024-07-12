#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans=0;
        vector<int>currf(26,0),currs(26,0);
        map<string ,int>curr;
        while(n--)
        {
             string s;
             cin>>s;
             ans+=currf[s[0]-'a']+currs[s[1]-'a']-curr[s];
             ++currf[s[0]-'a'],++currs[s[1]-'a'],curr[s]+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
