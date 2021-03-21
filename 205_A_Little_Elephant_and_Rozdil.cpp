#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, smallestIndex=-1, smallestDistance=-1;
    cin>>n;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if (i==0) {smallestDistance=temp; smallestIndex=0; continue;}
        if (temp < smallestDistance) {flag=false; smallestDistance = temp; smallestIndex=i;}
        else if (temp==smallestDistance) {flag=true;}
    }

    if (flag==0)
        cout << smallestIndex+1 << endl;
    else
        cout << "Still Rozdil" << endl;
    return 0;
}