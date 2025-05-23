#include <iostream>
#include <map>
#include <vector>
using namespace std;
// #define _DEBUG
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double r;
  cin>>r;
  map<long double,int>mp;
  for(long double i=.5;true;i+=1.0){
    int minleft=-1,maxright=(int)r;
    while(minleft<maxright){
      #ifdef _DEBUG
      cout<<minleft<<' '<<maxright<<endl;
      #endif
      int mid=(minleft+maxright)/2;
      long double middouble=mid+0.5;
      if(r*r>=i*i+middouble*middouble){
        minleft=mid+1;
      }
      else{
        maxright=mid;
      }
      if(maxright==0){
        break;
      }
    }
    if(minleft==-1){
      break;
    }
    mp[i]=minleft;
  }
  #ifdef _DEBUG
  cout<<"reached"<<endl;
  for(long double i=.5;true;i+=1.0){
    if(!mp.contains(i)){
      break;
    }
    cout<<i<<' '<<mp[i]<<endl;
    cout<<endl;
  }
  #endif
  long long ans = 0;
  for(long double i=.5;true;i+=1.0){
    if(!mp.contains(i)){
      break;
    }
    ans+=2*(2*mp[i]-1);
  }
  ans-=(2*mp[.5]-1);
  cout<<ans<<endl;
  return 0;
}
