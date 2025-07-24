#include <iostream>
#include <set>
using namespace std;
struct cookies {
  int a,b,c;
  cookies(int _a,int _b,int _c):a(_a),b(_b),c(_c){}
  bool operator<(const cookies& other)const{
    if(a!=other.a)return a<other.a;
    if(b!=other.b)return b<other.b;
    return c<other.c;
  }
  bool operator==(const cookies& other)const=default;
};
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b,c;
  cin>>a>>b>>c;
  set<cookies>se;
  cookies now(a,b,c);
  se.insert(now);
  bool loopflag=false;
  while(now.a%2==0&&now.b%2==0&&now.c%2==0){
    cookies nowcp=now;
    nowcp.a/=2;
    nowcp.b/=2;
    nowcp.c/=2;
    now.a=nowcp.a+nowcp.b;
    now.b=nowcp.b+nowcp.c;
    now.c=nowcp.c+nowcp.a;
    if(se.contains(now)){
      loopflag=true;
      break;
    }
    se.insert(now);
  }
  if(loopflag)cout<<-1<<'\n';
  else cout<<se.size()-1<<'\n';
  return 0;
}
