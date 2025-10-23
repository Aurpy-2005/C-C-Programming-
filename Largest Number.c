#include<stdio.h>
int main(){


    int a,b,c,d;

    printf("Enter Four Numbers:");

    scanf("%d%d%d%d",&a,&b,&c,&d);


    if(a>b && a>c && a>d){

        printf("%d is the Largest Number",a);
    }

     else if(b>a && b>c && b>d){

        printf("%d is the Largest Number",b);

     }
     else if(c>a && c>b && c>d){

        printf("%d is the Largest Number",c);
     }
        else
        {
             printf("%d is the Largest Number",d);
        }


        return 0;
}


