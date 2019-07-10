#include<stdio.h>
int main(){
    int a[50],b[50],c[100],n,m,i,j,k;
    printf("Enter range for First Array:");
    scanf("%d",&n);
    printf("Enter elements for First Array:\n");
    for(i=0;i<n;i++){
        printf("[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter range for Second Array:");
    scanf("%d",&m);
    printf("Enter elements for Second Array:\n");
    for(j=0;j<m;j++){
        printf("[%d]:",j+1);
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(j>=m){
        while(i<m){
            c[k]=a[i];
            k++;
            i++;
        }
    }
    else{
        while(j<n){
            c[k]=b[j];
            k++;
            j++;
        }
    }
    printf("Array after merging:\n");
    for(i=0;i<n+m;i++)
        printf("%d  ",c[i]);
    printf("\n");
    return 0;
}
