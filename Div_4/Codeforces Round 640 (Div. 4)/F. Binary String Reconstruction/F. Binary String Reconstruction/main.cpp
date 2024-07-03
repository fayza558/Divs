#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n0,n1,n2;
        cin>>n0>>n1>>n2;
        string one = "";
        string zero = "";
        string toggle = "";

        if(n2>0)
        {
            int i =0;
            if(n1>0)i=1;
            for(; i <= n2 ; i++)
            {
                one+="1";
            }
        }
        if(n0>0)
        {

            int i =0;
            if(n1>0)i=1;
            for(; i <= n0 ; i++)
            {
                zero+="0";
            }
        }
        if(n1>0)
        {
            bool temp = true;
            if(n1%2==0)
            {
                if(n0>0 || n1>0)
                {
                    n1--;
                    if(n0>0)
                    {
                        zero = zero + "1";
                    }
                    else
                    {
                        one = "0"+one;
                    }
                }
            }
            for(int i = 0 ; i <= n1 ; i++)
            {
                if(temp)
                {
                    toggle+='1';
                    temp = false;
                }
                else
                {
                    toggle+='0';
                    temp = true;
                }
            }
        }
        cout<<one<<toggle<<zero;

        cout<<endl;
    }



    return 0;
}

