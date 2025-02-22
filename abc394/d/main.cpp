#include <iostream>
#include <string>
#include <stack>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  stack<char>st;
  for(auto&i:s){
    if(i=='('||i=='['||i=='<'){
      st.push(i);
    }
    else{
      if(st.empty()){
        cout<<"No\n";
        return 0;
      }
      if(st.top()=='('&&i==')'){
        st.pop();
        continue;
      }
      if(st.top()=='['&&i==']'){
        st.pop();
        continue;
      }
      if(st.top()=='<'&&i=='>'){
        st.pop();
        continue;
      }
      cout<<"No\n";
      return 0;
    }
  }
  cout<<(st.empty()?"Yes":"No")<<'\n';
  return 0;
}
