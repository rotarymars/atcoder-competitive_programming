#include <iostream>
using namespace std;
long long tenpow(int n){
  long long ret=1;
  while(n --> 0)
    ret*=10;
  return ret;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  long long n,k;
  cin>>n>>k;
  for(int i=1;i<=k;i++){
    long long tmp=n%tenpow(i);
    long long tmp2=n/tenpow(i);
    if(tmp%tenpow(i)>=5*tenpow(i-1)) {
      tmp2++;
    }
    tmp2*=tenpow(i);
    n=tmp2;
#ifdef _DEBUG
    cout<<tmp<<" "<<tmp2<<endl;
#endif
  }
  cout<<n<<endl;
	return 0;
}

