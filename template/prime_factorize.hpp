#include <vector>
using namespace std;
template <class T>
vector<pair<T, T>> PRIME_FACTORIZE(T n) {
  vector<pair<T, T>> result;
  for (T i = 2; i * i <= n; i++)
  {
    if (n % i != 0)
    {
      continue;
    }
    T ex = 0;
    while (n % i == 0)
    {
      ++ex;
      n /= i;
    }
    result.push_back({ i, ex });
  }
  if (n != 1)
  {
    result.push_back({ n, 1 });
  }
  SORT(result);
  return result;
}