#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin>>n>>k;

    if (n&1) {
        // n is odd.
        ll mid = (n/2) + 1;
        if (k <= mid) {
            cout << (2*k)-1 << endl;
            return 0;
        } else {
            cout << (2*k)-n-1  << endl;
            return 0;
        }
    } else {
        // n is Even.
        ll mid = (n/2);
        if (k<=mid)
        {
            cout << (2*k)-1 << endl;
            return 0;
        } else {
            cout << (2*k)-n << endl;
            return 0;
        }
        
    }
    return 0;
}