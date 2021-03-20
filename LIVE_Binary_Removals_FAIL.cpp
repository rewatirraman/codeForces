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

void cases() {
    string temp;
    cin >> temp;

    bool oneSeen = false;
    int strLen = temp.length();
    int arrOne[strLen], arrZero[strLen];
    int j=0, k=0;
    for (int i = 0; i < strLen; i++)
    {
        if ((temp[i] == '0') && !oneSeen) {continue;}

        oneSeen = true;
        
        if (temp[i] == '0') {arrZero[j] = i+1; j++; }
        else {arrOne[k] = i+1; k++;}
    }   
    
    // for (int i = 0; i < j; i++)
    // {
    //     cout<<arrZero[i] << " ";
    // } cout << endl;
    
    // for (int i = 0; i < k; i++)
    // {
    //     cout<<arrOne[i] << " ";
    // } cout << endl;    

    if ((j == 0) || (k == 0) ) {cout << "YES" << endl; return;}

    for (int i = 1; i < j; i++)
    {  
        if (arrZero[i-1]+1 >= arrZero[i]) {cout << "NO" << endl; return;}
    }

    cout <<"YES" << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cases();
    }
    
    return 0;
}