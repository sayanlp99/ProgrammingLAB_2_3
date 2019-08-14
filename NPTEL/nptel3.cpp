#include<iostream>
using namespace std;
int main(){
	int n,r,c,s=0;
	cin>>n;
	while(n>0){
		r=n%10;
		c=r*r*r;
		s=s+c;
		n=n/10;
	}
	cout<<s<<endl;
	return 0;
}