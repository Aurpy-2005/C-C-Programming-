#include<stdio.h>
int main(){

    int n,sum;

    printf("Enter The Number:");
    scanf("%d",&n);

    sum=0;
    sum=n*(n+1)/2;

    printf("Sum=%d",sum);

    return 0;
}
