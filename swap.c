# include<stdio.h>

int main(){
    int a,b;
    printf("Enter a and b : \n");
    scanf("%d %d",&a,&b);
    printf("Before Swapping.\n");
    printf("a : %d  b : %d\n",a,b);

    //swapping
    a = a*b;
    b = a/b;
    a = a/b;

    printf("After Swapping.\n");
    printf("a : %d  b : %d\n",a,b);
    return 0;
}