#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i=0;i<n;i++){
        for(j=0;j<3*n;j++)
		    cout<<"*";
        cout<<endl;
	}
	for(int x=0;x<2;x++){
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<" ";
        }
        for(j=0;j<n;j++){
			cout<<"*";
		}
        cout<<endl;
	}
}
    return 0;
}