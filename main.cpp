#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
ll s, m, l, xl, xxl, xxxl;
ll t, p;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  cin >> s >> m >> l >> xl >> xxl >> xxxl;
  cin >> t >> p;

  auto x = 0LL;
  x += (s + t - 1) / t;
  x += (m + t - 1) / t;
  x += (l + t - 1) / t;
  x += (xl + t - 1) / t;
  x += (xxl + t - 1) / t;
  x += (xxxl + t - 1) / t;

  auto y = 0LL;
  auto z = 0LL;
  y = n / p;
  z = n % p;

  cout << x << '\n' << y << ' ' << z;

  return 0;
}