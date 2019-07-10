#include<stdio.h>
int main(){
	int i,n,a[50],p;
	printf("Enter range of the array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter position to delete element:");
	scanf("%d",&p);
	for(i=p;i<=n-1;i++)
		a[i-1]=a[i];
	printf("Array after deletion:\n");
	for(i=0;i<n-1;i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
