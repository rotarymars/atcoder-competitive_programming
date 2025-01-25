#include <iostream>
#include <regex>
#include <vector>
#include <algorithm>
#include <set>
#include <utility>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,x,y,z;
  cin>>n>>x>>y>>z;
  vector<pair<int,int>>math(n),english(n),sum(n);
  for(int i=0;i<n;i++){
    math[i].first=i;
    cin>>math[i].second;
  }
  for(int i=0;i<n;++i){
    english[i].first=i;
    cin>>english[i].second;
  }
  for(int i=0;i<n;++i){
    sum[i].first=i;
    sum[i].second=math[i].second+english[i].second;
  }
  auto sortbysecond=[](const pair<int,int>&a,const pair<int,int>&b)->bool{
    if(a.second!=b.second)return a.second>b.second;
    else return a.first<b.first;
  };
  sort(math.begin(),math.end(),sortbysecond);
  sort(english.begin(),english.end(),sortbysecond);
  sort(sum.begin(),sum.end(),sortbysecond);
  set<int>passed;
  int index=0,insertcnt=0;
  while(insertcnt!=x){
    if(!passed.contains(math[index].first)){
      passed.insert(math[index].first);
      ++insertcnt;
    }
    ++index;
  }
  index=0,insertcnt=0;
  while(insertcnt!=y){
    if(!passed.contains(english[index].first)){
      passed.insert(english[index].first);
      ++insertcnt;
    }
    ++index;
  }
  index=0,insertcnt=0;
  while(insertcnt!=z){
    if(!passed.contains(sum[index].first)){
      passed.insert(sum[index].first);
      ++insertcnt;
    }
    ++index;
  }
  for(auto i=passed.begin();i!=passed.end();++i){
    cout<<*i+1<<'\n';
  }
  return 0;
}
