#include<stdio.h>
int main(){

    float volume,r,h;

    printf("Enter The Value Of r:");

    scanf("%f",&r);

     printf("Enter The Value Of h:");

    scanf("%f",&h);

     volume=(3.1416*r*r*h)/3;

    printf("Volume Of Cone =%f",volume);

    return 0;
}
