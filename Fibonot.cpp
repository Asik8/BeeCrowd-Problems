#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
#define s 1000006

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v;
    int x=2,y=3;
    int sum = x+y;
    for(int i=4;i<=s;i++)
    {
        if(i<sum)
        {
            v.pb(i);
        }
        else if(i == sum)
        {
            x = y;
            y = sum;
            sum = x+y;
        }
    }

    int a;
    cin>>a;
    cout<<v[a-1]<<endl;

    return 0;
}