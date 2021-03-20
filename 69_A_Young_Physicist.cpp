#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n=1;
    cin>>n;
    int a=0, b=0, c=0;
    for (int i = 0; i < n; i++)
    {
        int temp1, temp2, temp3;
        cin >> temp1 >> temp2 >> temp3;
        a+=temp1;
        b+=temp2;
        c+=temp3;
    }

    if (a==0 && b==0 && c==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;    
    return 0;
}