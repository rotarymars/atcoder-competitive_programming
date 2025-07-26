#include <template/all.hpp>
using namespace std;
signed main() {
  int N,ans = 0;
	scanf("%d",&N);
	int A[N+2];
	A[0]=A[N+1]=0;
	for(int i=1;i<=N;++i)scanf("%d",A+i);
	for(int i=0;i<=N;++i)ans += abs(A[i]-A[i+1]);
	for(int i=1;i<=N;++i)printf("%d\n",ans-abs(A[i]-A[i+1])-abs(A[i]-A[i-1])+abs(A[i-1]-A[i+1]));
  return 0;
}
