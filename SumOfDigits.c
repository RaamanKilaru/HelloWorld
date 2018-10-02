#include<stdio.h>

int main(){
    int a,rem,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&a);

    int n = a;

    while(n>0){
        rem = n%10;
        n = n/10;
        sum = sum + rem;
    }

    printf("The sum of Digits of %d : %d\n",a,sum);

    return 0;
}