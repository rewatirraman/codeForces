#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus > 201703L
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
#include <coroutine>
#endif
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <syncstream>
#include <version>
#endif
using namespace std;
typedef long long ll;

 
// Returns LCM of array elements
ll findlcm(ll n1, ll n2, ll n3)
{
    ll pro=n1*n2*n3;
    ll lcm;
    //Evaluate the LCM
    for(ll i=1;i<=pro;i++)
    {
        if(i%n1==0 && i%n2==0 && i%n3==0)
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}

int main()
{
    ll n;
    int m, flag=0;
    ll temp[3];
    ll a=0, b=0, c=0;
    ll tc;
    cin >> tc;
    while (1)
    {
        cin >> n >> m;
        flag = 0;
        for (ll i = 1; i < n; i++)
        {
            for (ll j = 1; j < n; j++)
            {
                for (ll k = 1; k <n; k++)
                {
                    if ((i+j+k == n) && (findlcm(i, j, k) <= n/2)) {
                        a=i;
                        b=j;
                        c=k;
                        //cout << i << " " << j << " " << k <<endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag) {break;}
            }
            if (flag) {break;}
        }
        cout << a << " " << b << " " << c <<endl;
    }
    return 0;
}