#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>odd,even;
  for(int i=0;i<n;i++){
    int tmp;
    cin>>tmp;
    if(tmp%2==0)even.push_back(tmp);
    else odd.push_back(tmp);
  }
  sort(even.begin(),even.end());
  sort(odd.begin(),odd.end());
  int evensum=(even.size()>=2?even.back()+even[even.size()-2]:-1),oddsum=(odd.size()>=2?odd.back()+odd[odd.size()-2]:-1);
  cout<<max(evensum,oddsum)<<endl;
	return 0;
}

