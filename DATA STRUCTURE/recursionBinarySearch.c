#include<stdio.h>
int a[50];
void binary_search(int[] ,int, int, int);
int main(){
	int m,n,i,e;
	printf("Enter the range of the array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&e);
	binary_search(a, 0, n, e);
	return 0;
}
void binary_search(int list[],int lo, int hi, int key){
	int mid;
	if(lo>hi){
		printf("Element not found\n");
		return;
	}
	mid=(lo+hi)/2;
	if(list[mid]==key)
		printf("Element found at position:%d\n.",mid+1);
	else if(list[mid]>key)
		binary_search(list, lo, mid-1, key);
	else if(list[mid]<key)
		binary_search(list, mid+1, hi, key);
}
