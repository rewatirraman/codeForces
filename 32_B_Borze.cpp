#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string input_str;
    cin >> input_str;

    for (int i = 0; i < input_str.length(); i++)
    {
        if (input_str[i] == '.') {
            cout << 0;
        } else if (input_str[i] == '-') {
            if (input_str[i+1] == '.') {
                cout << 1;
            } else if (input_str[i+1] == '-'){
                cout << 2;
            }
            i++;
        }
    } cout << endl;
    
    return 0;
}