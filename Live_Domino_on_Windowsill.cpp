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
    int n, k1, k2;
    int w, b;

    cin >> n >> k1 >> k2;
    cin >> w >> b;
    // cout << n << " " << k1 << " " << k2 << endl;
    // cout << w << " " << b << endl;
    int w_r, b_r;
    if (k1 < k2) {
        w_r = w-k1;
        b_r = b-(n-k2);
        if ( (2*w_r  <= (k2-k1)) && (2*b_r <= (k2-k1))) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    } else if (k2 < k2) {    
        w_r = w-k2;
        b_r = b-(n-k1);
        if ( (2*w_r <= (k1-k2)) && (2*w_r <= (k1-k2)) ) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}        
    } else {
        w_r = w-k1;
        b_r = b-k1;
        if ((w_r <= 0) || (b_r <= 0)) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }

}

int main()
{
    int tc;
    cin >> tc;
    while (tc--) { cases(); }
    return 0;
}