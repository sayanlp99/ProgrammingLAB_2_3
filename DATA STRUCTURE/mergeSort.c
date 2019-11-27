#include<stdio.h>
#define MAX 20
int main(){
    int arr1[MAX], arr2[MAX], arr3[2*MAX], n1, n2, i, j=0, k=0;
    printf("Enter range for First Array:");
    scanf("%d",&n1);
    printf("Enter elements for First Array:\n");
    for(i=0;i<n1;i++){
        printf("[%d]:",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter range for Second Array:");
    scanf("%d",&n2);
    printf("Enter elements for Second Array:\n");
    for(i=0;i<n2;i++){
        printf("[%d]:",i+1);
        scanf("%d",&arr2[i]);
    }
    i=0;
    while((i<=n1-1)&&(j<=n2-1)){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while(i<=n1-1)
        arr3[k++]=arr1[i++];
    while(j<=n2-1)
        arr3[k++]=arr2[j++];
    printf("Merged Array:\n");
    for(i=0;i<n1+n2;i++){
        printf("[%d]:",i+1);
        scanf("%d",&arr3[i]);
    }
    return 0;
}