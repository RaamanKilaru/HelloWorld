#include<stdio.h>

int main(){

    int a,b,n,sum = 0;

    printf("Enter the Values of a b and n : \n");
    scanf("%d %d %d",&a,&b,&n);

    int count =2;
    printf("The fibonacci series upto %d terms is : \n",n);
    printf("%d %d ",a,b);
    do{
        sum = a+b;
        a = b;
        b = sum;
        printf("%d ",sum);
        count++;
    }while(count<=n);
    printf("\n");

    return 0;
}