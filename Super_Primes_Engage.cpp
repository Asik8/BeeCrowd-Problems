#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while (cin>>n)
    {
        if(n<=1) 
        {
            cout<<"Nada\n";
            continue;
        }
        int l = sqrt(n);
        bool prime = true;
        for(int i=2;i<=l;i++)
        {
            if(n%i == 0) 
            {
                prime = false;
                break;
            }
        }
            
        if(!prime) cout<<"Nada\n";
        else 
        {
            int m=n;
            bool super = true;
            while(m>0)
            {
                int d = m%10;
                m/=10;
                if(d != 2 && d!=3 && d!=5 && d!=7) 
                {
                    super = false;
                    break;
                }
                if(!super) break;
            }
            if(super) cout<<"Super\n";
            else cout<<"Primo\n";
        }
    }

    return 0;
}