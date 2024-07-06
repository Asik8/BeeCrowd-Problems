#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, ca = 1;
    while (cin >> n)
    {
        vector<ll> v;
        if (n == 0)
        {
            cout << "Caso " << ca << ": " << "1 numero\n";
            cout << 0 << endl << endl;
        }
        else
        {
            ll c = 1;
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    v.pb(i);
                    c++;
                }
            }

            if (c == 2)
            {
                cout << "Caso " << ca << ": " << c << " numeros\n" << "0 1";
                cout << endl << endl;
            }
            else
            {
                cout << "Caso " << ca << ": " << c << " numeros\n"<<"0 ";
                for (int i = 0; i < c-2; i++)
                    cout << v[i] << " ";
                cout<<v[v.size()-1] << endl<<endl;
            }
        }
        ca++;
    }

    return 0;
}