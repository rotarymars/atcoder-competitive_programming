template<class T>
bool ISPRIME(const T a) {
  if (a <= 1)
  {
    return false;
  }
  for (T i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}
