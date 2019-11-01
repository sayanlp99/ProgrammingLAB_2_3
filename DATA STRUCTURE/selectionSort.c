#include<stdio.h>
void main(){
	int i,j,a[20],n,t;
	printf("Enter range of the array:");
	scanf("%d",&n);
	printf("Enter elements in the array:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}