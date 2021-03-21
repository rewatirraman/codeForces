#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b, c, d;
    cin>>a>>b>>c>>d;

    set<int>mySet;
    mySet.insert(a);
    mySet.insert(b);
    mySet.insert(c);
    mySet.insert(d);

    cout << 4-mySet.size() << endl;
    return 0;
}