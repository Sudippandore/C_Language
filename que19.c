//find factorial of number

void factorial();
#include<stdio.h>
void main(){
    printf("start\n");
    factorial();
    printf("\nend");
}

void factorial() {
    int num,fact=1,i;
    printf("enter a number:");
    scanf("%d", &num);

    i = num;
    while(i > 1) {
        fact = fact * i;
        i--;
    }
    printf("factorial of %d = %d", num, fact);
}