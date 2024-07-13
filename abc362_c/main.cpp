#include <iostream>
#include <template/debugprint.hpp>
#include <vector>
#define int long long
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int small=0,big=0;
	vector<int>left,right;
	left.reserve(n),right.reserve(n);
	for(;n;n--){
		int l,r;
		cin>>l>>r;
		small+=l,big+=r;
		left.push_back(l),right.push_back(r);
	}
	if(small<=0&&0<=big)cout<<"Yes"<<endl;
	else{
		cout<<"No"<<endl;
		return 0;
	}
	for(int i=0;i<left.size();i++){
		DP(i);
		if(small<0){
			if(small+right[i]-left[i]<0){
				if(i)cout<<' '<<right[i];
				else cout<<right[i];
				small+=right[i]-left[i];
			}
			else{
				if(i)cout<<' '<<left[i]-small;
				else cout<<left[i]-small;
				small=0;
			}
		}
		else{
			if(i)cout<<' '<<left[i];
			else cout<<left[i];
		}
	}
	cout<<endl;
	return 0;
}
