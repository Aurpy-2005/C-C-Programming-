#include<stdio.h>
int main(){

    int i,num;
    int count=0;

    printf("Enter Any Positive Number:");
    scanf("%d",&num);

    for(i=2;i<num;i++){


        if(num%i==0){

            count++;
            break;
        }
    }
    if(count==0){



        printf("Prime Number");
    }

    else{

        printf("Not a Prime Number");
    }


return 0;
}
