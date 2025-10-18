#include<stdio.h>
int main(){

    float Area,a,b,h;
    printf("Enter The Value Of a:");

    scanf("%f",&a);

     printf("Enter The Value Of b:");

    scanf("%f",&b);


     printf("Enter The Value Of h:");

    scanf("%f",&h);


    Area=0.5*(a+b)*h;

    printf("Area Of Trapezium=%f",Area);

    return 0;
}
