#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string question;
    cin>>question;

    int i=0;
    while (i<question.length())
    {
        if (question[i] == '1') {
            if (question[i+1] == '4') {
                if (question[i+2] == '4') {
                    i+=1;
                }
                i+=1;
            }
            i++;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (i>=question.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}