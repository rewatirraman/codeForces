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

int main()
{
    // x    --> Source 
    // y    --> Destination
    // z    --> Elevator current position
    // t1   --> time it takes to pass between two floors by stairs
    // t2   --> time it takes to pass between two floors by Elevator
    // t3   --> time it takes for the elevator to close or open the doors

    int x, y, z, t1, t2, t3;
    cin>>x>>y>>z>>t1>>t2>>t3;

    ll estimatedTimeByStairs=0, estimatedTimeByElevator=0, noOfFloorsToCover=0;

    noOfFloorsToCover = abs(x-y);

    estimatedTimeByStairs = noOfFloorsToCover * t1;

    // (abs(y-z) * t2) --> Time to reach Elevator at the Source floor.
    // t3   --> Open the Elevator door.
    // t3   --> Close the Elevator door.
    // (noOfFloorsToCover * t2) --> time take by Elevator to go from Source to Destination.
    // t3   --> Open the door of the Elevator.

    estimatedTimeByElevator = (abs(x-z) * t2) + t3 + t3 + (noOfFloorsToCover * t2) + t3;

    if (estimatedTimeByStairs < estimatedTimeByElevator) {cout << "NO";}
    else {cout << "YES";}

    return 0;
}