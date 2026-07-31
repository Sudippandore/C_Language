//program to print a table for the given number

void table();
#include<stdio.h>
void main(){
    printf("start\n");
    table();
    printf("\nend");
}

void table() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int i=1;
    while(i<=10){
        int x;
        x =  num * i;
        i++;
        printf("%d\t", x);
    }
}