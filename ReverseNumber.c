#include<stdio.h>

int main(){
    int a,n,rev=0,rem;

    printf("Enter the Value of A : ");
    scanf("%d",&a);

    n = a;

    while(n > 0){
    rem = n%10;
    n = n/10;
    rev = rev*10 +rem;
    }

    printf("The Reverse Number of %d : %d.\n",a,rev);

    return 0;
}