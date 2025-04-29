#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int freq[10]={0};
        for(char c:s){
            freq[c-'0']++;
        }
        string res="";
        for(int i=1;i<=10;i++){
            int req=10-i;
            for(int d=req;d<=9;d++){
                if(freq[d]>0){
                    res+=(char)(d+'0');
                    freq[d]--;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
