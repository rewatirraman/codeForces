#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int x=-1, y=-1;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j] == 1)
            {   
                x=i;
                y=j;
            }
            
        }
    }

    int noOfSwaps = abs(x-2) + abs(y-2);
    cout << noOfSwaps << endl;
    
    return 0;
}