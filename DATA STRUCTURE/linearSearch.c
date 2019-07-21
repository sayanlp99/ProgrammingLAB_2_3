#include<stdio.h>
int main(){
	int a[50],n,i,e,c=0;
	printf("Enter the range of the array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(a[i]==e){
			c++;
			printf("Element is found at position:%d\n",i+1);
		}
	}
	if(c==0)
		printf("Element not found.\n");
	return 0;
}