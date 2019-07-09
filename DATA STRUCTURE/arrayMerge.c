#include<stdio.h>
int main(){
    int a[50],b[50],c[100],n,m,i,j,s,t;
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
    for(i=0;i<m;i++){
        printf("[%d]:",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
        c[i]=a[i];
    s=m+n;
    for(i=0,j=n;i<n,j<s;i++,j++)
        c[j]=b[i];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(c[i]>c[j]){
                t=c[j];
                c[j]=c[i];
                c[i]=t;
            }
        }
    }
    printf("Merged Array:\n");
    for(i=0;i<s;i++)
        printf("%d ",c[i]);
    printf("\n");
    return 0;
}