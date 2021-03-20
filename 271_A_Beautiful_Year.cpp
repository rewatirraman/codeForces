#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int year;
    cin>>year;
    while (year++) {
        string temp = to_string(year);

        // Method 1
        set<char> st(temp.begin(), temp.end());

        // Method 2
        // set<char> st;
        // for (int i = 0; i < temp.length(); i++)
        // {
        //     st.insert(temp[i]);
        // }


        
        if (temp.length() == st.size()) {
            cout<< temp << endl;
            return 0;
        }
    }
    return 0;
}