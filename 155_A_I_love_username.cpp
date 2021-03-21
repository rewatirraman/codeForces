#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, maxTillNow=-1, minTillNow=-1, count=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (i==0) {maxTillNow=arr[0], minTillNow=arr[0]; continue;}
 
        if (arr[i] > maxTillNow) {
            count++;
            maxTillNow = arr[i];
            continue;
        }

        if (arr[i] < minTillNow) {
            count++;
            minTillNow = arr[i];
        }
    }
    
    cout << count << endl;
    return 0;
}