#include <iostream>
#include <stack>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int q;
  cin>>q;
  stack<int>st;
  for(int i=0;i<100;++i){
    st.push(0);
  }
  while(q--){
    int t;
    cin>>t;
    if(t==1){
      int a;
      cin>>a;
      st.push(a);
    }
    else{
      cout<<st.top()<<'\n';
      st.pop();
    }
  }
  return 0;
}
