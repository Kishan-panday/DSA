#include<stdio.h>
int main(){
    int a , b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    if (a>b)
    {
       printf("%d is greater than %d ",a,b);

    }else if (a<b)
    {
        printf("%d is smaller than %d",a,b);
    }else if (a==b){
        printf("%d and %d are equal ",a,b);
    }
    return 0;
    
}