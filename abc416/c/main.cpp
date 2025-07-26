#include <template/fastio.hpp>
#include <iostream>
#include <cassert>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n,k,x;
  io.read(n); io.read(k); io.read(x);
  vector<string>v(n);
  for(int i=0;i<n;++i){
    io.read(v[i]);
  }
  multiset<string>st;
  if(k==1){
    for(int i=0;i<n;++i){
      st.insert(v[i]);
    }
  }else if(k==2){
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        string strcp=v[i]+v[j];
        st.insert(strcp);
      }
    }
  }else if(k==3){
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        for(int k=0;k<n;++k){
          string strcp=v[i]+v[j]+v[k];
          st.insert(strcp);
        }
      }
    }
  }
  else if(k==4){
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        for(int k=0;k<n;++k){
          for(int l=0;l<n;++l){
            string strcp=v[i]+v[j]+v[k]+v[l];
            st.insert(strcp);
          }
        }
      }
    }
  }else if(k==5){
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        for(int k=0;k<n;++k){
          for(int l=0;l<n;++l){
            for(int m=0;m<n;++m){
              string strcp=v[i]+v[j]+v[k]+v[l]+v[m];
              st.insert(strcp);
            }
          }
        }
      }
    }
  }
  io.writeString(*next(st.begin(),x-1),'\n');
  return 0;
}
