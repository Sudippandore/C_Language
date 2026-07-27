//program to check number is strong or not

#include<stdio.h>
void main() {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    int temp = num;
    int rem, fact, i, sum=0;
    while(num>0){
        rem = num%10;
        fact = 1;
        i = 1;

        while(i<=rem){
            fact = i*fact;
            i++;
        }
        sum = sum + fact;
        num = num/10;
    }
    printf("\nsum of factorials of the number = %d", sum);
    if(sum==temp){
        printf("\nnumber is a strong number.");
    }
    else {
        printf("\nnumber is not strong number.");
    }
}