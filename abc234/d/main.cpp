#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n,k;
  cin >> n >> k;
	vector<int> P(n);
	for(int i=0; i<n; i++) cin >> P[i];
	priority_queue<int,vector<int>,greater<int>> que;
	for(int i=0; i<k; i++) que.push(P[i]);
	cout << que.top() << endl;
	for(int i=k; i<n; i++){
		if(que.top() < P[i]){
			que.pop();
			que.push(P[i]);
		}
		cout << que.top() << endl;
	}
}
