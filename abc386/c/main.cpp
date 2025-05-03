#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int k;
  string s,t;
  cin>>k>>s>>t;
  if(s==t){
    cout<<"Yes"<<endl;
    return 0;
  }
  else{
    if(s.size()==t.size()){
      int diff=0;
      for(int i=0;i<(int)s.size();++i){
        if(s[i]!=t[i]){
          ++diff;
        }
      }
      if(diff==1){
        cout<<"Yes"<<endl;
        return 0;
      }
      else{
        cout<<"No"<<endl;
        return 0;
      }
    }
    else{
      if(s.size()>t.size()){
        swap(s,t);
      }
      if(t.size()-s.size()!=1){
        cout<<"No"<<endl;
        return 0;
      }
      int tind=0;
      int diffcnt=0;
      for(int i=0;i<(int)s.size();++i){
        if(s[i]==t[tind]){
          ++tind;
        }
        else{
          ++diffcnt;
          ++tind;
          --i;
        }
        if(tind>=(int)t.size()){
          break;
        }
      }
      if(diffcnt<=1){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
  }
  cout<<"No"<<endl;
  return 0;
}
