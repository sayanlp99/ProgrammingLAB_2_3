#include<stdio.h>
void main(){
    int i,a[20],n,item,start,end,mid;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++){
        printf("[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the item:");
    scanf("%d",&item);
    start=0;
    end=n-1;
    mid=(start+end)/2;
    while(item!=a[mid] && start<=end){
        if(item<a[mid])
            end=mid-1;
        else
            start=mid+1;
        mid=(start+end)/2;
    }
    if(item==a[mid])
        printf("Search was Successful at %d.\n",mid+1);
    if(start>end)
        printf("Search was Unsuccessful.\n");
}