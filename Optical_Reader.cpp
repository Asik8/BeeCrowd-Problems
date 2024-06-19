#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    while (1)
    {
        cin >> t;
        if (t > 0)
        {
            while (t--)
            {
                ll ar[5];
                for (int i = 0; i < 5; i++) cin >> ar[i];
                int c = 0;
                for (int i = 0; i < 5; i++) if (ar[i] <= 127) c++;
                if (c == 1)
                {
                    for (int i = 0; i < 5; i++) if (ar[i] <= 127) c = i;
                    if (c == 0) cout << "A\n";
                    if (c == 1) cout << "B\n";
                    if (c == 2) cout << "C\n";
                    if (c == 3) cout << "D\n";
                    if (c == 4) cout << "E\n";
                }
                else cout << "*\n";
            }
        }
        else return 0;
    }
}