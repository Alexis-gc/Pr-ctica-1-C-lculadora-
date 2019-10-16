#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(void){
    printf("1.-suma\n");
    printf("2.-resta\n");
    printf("Introduce 1 para sumar\n");
    printf("Introduce 2 para restar\n");
    int opt;
        scanf("%d",&opt);
        int a;
        int b;
        printf("Introduce la primera cantidad ");
        scanf("%d",&a);
        printf("Introduce la segunda cantidad ");
        scanf("%d",&b);
        int c;
        if (opt==1){
                c=a+b;}
                else{
                    if (opt==2){
                            c=a-b;

                    }
                }
        printf("El resultado es %d",c);

        }
