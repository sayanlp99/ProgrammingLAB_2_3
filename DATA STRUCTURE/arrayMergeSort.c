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
    return 0;
}