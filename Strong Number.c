#include<stdio.h>
int main (){
    int num,temp,r,sum=0,i,fact;

    printf("Enter Any Number:");

    scanf("%d",&num);

    temp=num;

    while(temp!=0){

        r=temp%10;

        fact=1;
        for(i=1;i<=r;i++){

            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
   if(num==sum){

    printf("%d is a Strong Number",num);
   }

   else{

    printf("%d is Not a Strong Number",num);

   }
    return 0;
}











