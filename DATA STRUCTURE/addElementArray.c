#include<stdio.h>
int main(){
	int i,n,a[50],e,p;
	printf("Enter range of the array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the element:");
	scanf("%d",&e);
	printf("Enter the position:");
	scanf("%d",&p);
	p=p-1;
	for(i=n-1;i>=p;i--){
		a[i+1]=a[i];
	}
	a[p]=e;
	printf("Final Array after inserting:\n");
	for(i=0;i<n+1;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
