#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n,s;
        cin >> n >>s;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        bool f = false;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(ar[i] == s) 
            {
                ans = i;
                f = true;
                break;
            }
        }
        if(!f)
        {
            int dis = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if(abs(ar[i]-s)<dis)
                {
                    ans = i;
                    dis = abs(ar[i]-s);
                }
            }
        }
        cout<<ans+1<<endl;        
    }

    return 0;
}