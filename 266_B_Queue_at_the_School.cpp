#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, t;
    cin>>n>>t;
    string str;
    cin>>str;
    while (t--)
    {
        vector<int> vctr;
        for (int i = 0; i < n-1; i++)
        {
            if (str[i] < str[i+1])
            {
                vctr.push_back(i);
            }
        }
        
        for (int i = 0; i < vctr.size(); i++)
        {
            char temp = str[vctr[i]];
            str[vctr[i]] = str[vctr[i]+1];
            str[vctr[i]+1] = temp;
        }
    }
    cout << str << endl;
    return 0;
}