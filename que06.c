//to check number is perfect or not
#include<stdio.h>
void main(){
    int num, i=1, sum=0;
    printf("enter a number:");
    scanf("%d", &num);

    while(i < num) {
        if(num%i==0) {
            sum = sum+i;
        }
        i++;
    }
    if(sum == num){
        printf("it is perfect no.");
    }
    else{
        printf("not perfect no");
    }
}