#include <iostream>
// #include <cassert>
#include <vector>
#include <string>
using namespace std;
#define int long long
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  string s;
  cin>>n>>s;
  vector<int>supposed_to_be_a;//but b
  vector<int>supposed_to_be_b;//but a
  for(int i=0;i<2*n;++i){
    if(i%2==0&&s[i]!='A'){
      supposed_to_be_a.push_back(i);
    }
    else if(i%2==1&&s[i]!='B'){
      supposed_to_be_b.push_back(i);
    }
  }
  // cout<<"supposed_to_be_a: ";
  // for(auto i:supposed_to_be_a){
  //   cout<<i<<" ";
  // }
  // cout<<endl;
  // cout<<"supposed_to_be_b: ";
  // for(auto i:supposed_to_be_b){
  //   cout<<i<<" ";
  // }
  // cout<<endl;
  // assert(supposed_to_be_a.size()==supposed_to_be_b.size());
  long long tempans1=0,tempans2=0;
  for(int i=0;i<(int)(supposed_to_be_a.size());++i){
    tempans1+=abs(supposed_to_be_a[i]-supposed_to_be_b[i]);
  }
  supposed_to_be_a.clear();
  supposed_to_be_b.clear();
  for(int i=0;i<2*n;++i){
    if(i%2==0&&s[i]!='B'){
      supposed_to_be_a.push_back(i);
    }
    else if(i%2==1&&s[i]!='A'){
      supposed_to_be_b.push_back(i);
    }
  }
  // assert(supposed_to_be_a.size()==supposed_to_be_b.size());
  for(int i=0;i<(int)(supposed_to_be_a.size());++i){
    tempans2+=abs(supposed_to_be_a[i]-supposed_to_be_b[i]);
  }
  cout<<min(tempans1,tempans2)<<endl;
  return 0;
}
