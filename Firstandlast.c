//add the (first and last) digit of a given number
#include<stdio.h>
void main() {
    int num, firstNo, lastNo, sum;
    printf("enter a number:");
    scanf("%d", &num);

    firstNo = num;

    lastNo = num % 10;

    while(firstNo >= 10) {
        firstNo = firstNo/10;
    }

    sum = firstNo + lastNo;
    printf("sum = %d", sum);
}