#include<stdio.h>
int main(){

    int l,u,i,j;


    printf("Enter The Lower Number:");

    scanf("%d",&l);

    printf("Enter The Upper Number:");

    scanf("%d",&u);



    for(i=l;i<=u;i++){

        for(j=1;j<=10;j++){


            printf("%d * %d= %d\n",i,j,i*j);
        }
        printf("\n");

    }
    return 0;

}

