#include <iostream>
using namespace std;
bool yes(int a,int b,int c,int d,int e,int f){
	int first=(d-b)*(d-b)+(c-a)*(c-a),second=(e-a)*(e-a)+(f-b)*(f-b),third=(e-c)*(e-c)+(f-d)*(f-d);
	if(first+second==third)return true;
	return false;
}
int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(yes(a,b,c,d,e,f)||yes(a,b,e,f,c,d)||yes(c,d,a,b,e,f)||yes(c,d,e,f,a,b)||yes(e,f,a,b,c,d)||yes(e,f,c,d,a,b))cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
