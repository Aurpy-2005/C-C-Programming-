#include<stdio.h>
int main(){


    int a,b,c,d;

    printf("Enter Four Numbers:");

    scanf("%d%d%d%d",&a,&b,&c,&d);


    if(a<b && a<c && a<d){

        printf("%d is the  Lowest Number",a);
    }

     else if(b<a && b<c && b<d){

        printf("%d is the  Lowest Number",b);

     }
     else if(c<a && c<b && c<d){

        printf("%d is the Lowest Number",c);
     }

        else
        {
             printf("%d is the Lowest Number",d);
        }


        return 0;
}



