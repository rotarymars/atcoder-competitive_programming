#include <bits/stdc++.h>
using namespace std;
const int N = 6;

int B, E[N], a[N];
int main() {
  for (int i = 0; i < 6; i++) scanf("%d", &E[i]);
  scanf("%d", &B);
  for (int i = 0; i < 6; i++) scanf("%d", &a[i]);
  int cnt = 0, b = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++)
      if (a[i] == E[j]) cnt++;
    if (a[i] == B) b++;
  }
  if (cnt == 6)
    puts("1");
  else if (cnt == 5 && b == 1)
    puts("2");
  else if (cnt == 5)
    puts("3");
  else if (cnt == 4)
    puts("4");
  else if (cnt == 3)
    puts("5");
  else
    puts("0");
  return 0;
}
