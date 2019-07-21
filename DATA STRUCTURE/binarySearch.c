#include<stdio.h>
int main(){
	int a[50],m,n,i,e,u,l;
	printf("Enter range of the array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&e);
	l=0;
	u=n-1;
	while(l<=u){
		m=(l+u)/2;
		if(a[m]==e){
			printf("Element found at position:%d\n",m+1);
			break;
		}
		else if(e<a[m])
			u=m-1;
		else
			l=m+1;
	}
	if(l>u)
		printf("Element not found.\n");
	return 0;
}