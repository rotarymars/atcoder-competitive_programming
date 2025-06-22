#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct message{
  int who; // -2: server, index: client -1: none
  int index; // which client, or index of server_history
  string s;
};
string compute(const vector<message>&server_history,const vector<vector<message>>&client_current, message m){
  string ret="";
  if(m.who==-2){
    ret=compute(server_history,client_current,server_history[m.index]) + m.s;
  }
  else if(m.who==-1){
    ret=m.s;
  }
  else{
    ret=compute(server_history,client_current,client_current[m.who][m.index]) + m.s;
  }
  return ret;
}

signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  vector<message>server_history;
  server_history.push_back({-1,-1,""});
  vector<vector<message>>client_current(n);
  for(int i=0;i<n;++i){
    client_current[i].push_back({-1,-1,""});
  }
  while(q--){
    int t;
    cin>>t;
    if(t==1){
      int p;
      cin>>p;
      --p;
      client_current[p].push_back({-2,(int)server_history.size()-1,""});
    }
    else if(t==2){
      int p;
      string s;
      cin>>p>>s;
      --p;
      client_current[p].push_back({p,(int)client_current[p].size()-1,s});
    }
    else if(t==3){
      int p;
      cin>>p;
      --p;
      server_history.push_back({p,(int)client_current[p].size()-1,""});
    }
  }
  cout<<compute(server_history,client_current,server_history.back())<<'\n';
  return 0;
}
