#include <stdio.h>
int main()
{
    int data[100],i,n,step,temp;
    printf("Enter the number of elements to be sorted:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;++i){
        printf("[%d]:",i+1);
        scanf("%d",&data[i]);
    }
    for(step=0;step<n-1;++step){
        for(i=0;i<n-step-1;++i){
            if(data[i]>data[i+1]){
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
        }
    }
    printf("In ascending order:\n");
    for(i=0;i<n;++i)
        printf("%d  ",data[i]);
    printf("\n");
    return 0;
}