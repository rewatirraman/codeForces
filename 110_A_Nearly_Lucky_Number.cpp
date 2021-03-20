#include <bits/stdc++.h>
#define print(x) cout << x;
#define println(x) cout << x << endl;
using namespace std;
typedef long long ll;

int main()
{
    string number;
    cin>>number;
    map<char, int> number_map;
    number_map['4'] = 0;
    number_map['7'] = 0;
    for (int i = 0; i < number.length(); i++)
    {
        number_map[number[i]]++;
    }
    int totalLuckyDigits = 0;
    totalLuckyDigits += number_map['4'];
    totalLuckyDigits += number_map['7'];

    if ((totalLuckyDigits ==  4) || (totalLuckyDigits == 7)) {
        println("YES");
    } else {
        println("NO");
    }
    return 0;
}