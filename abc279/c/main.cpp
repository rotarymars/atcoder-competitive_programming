#include<bits/stdc++.h>

using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h),t(h);
  for(auto &nx : s){cin >> nx;}
  for(auto &nx : t){cin >> nx;}

  // A.
  vector<string> Ts(w),Tt(w);
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      Ts[j].push_back(s[i][j]);
      Tt[j].push_back(t[i][j]);
    }
  }

  // B.
  sort(Ts.begin(),Ts.end());
  sort(Tt.begin(),Tt.end());

  if(Ts==Tt){cout << "Yes\n";}
  else{cout << "No\n";}
  return 0;
}
