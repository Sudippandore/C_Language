// Write a program to find greatest of three numbers using nested if-else.

void greaterNum();
#include<stdio.h>
void main(){
    printf("start\n");
    greaterNum();
    printf("end");
}

void greaterNum() {
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b) {
        if (a > c) {
            printf("a is greater.");
        }
        else {
            printf(" c is greater");
        }
    }
    else {
        if(b > c) {
            printf("b is greater");
        }
        else {
            printf("c is greater");
        }
    }
}