#include<stdio.h>
int main(){

    int x;

    printf("Enter Your Mobile Number:");

    scanf("%d",&x);

    if(x>=1500000000 && x<1599999999){

        printf("Operator:Teletalk");
    }



   else if(x>=1600000000 && x<1699999999){

        printf("Operator:Airtel");
    }



   else if(x>=1700000000 && x<1799999999){

        printf("Operator:Grameenphone");
    }



    else if(x>=1800000000 && x<1899999999){

        printf("Operator:Robi");
    }


   else if(x>=1900000000 && x<1999999999){

        printf("Operator:Banglalink");
    }
    else{

        printf("Nothing");
    }

    return 0;

}
