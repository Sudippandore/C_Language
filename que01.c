//program to print the numbers from 1 to 10
#include<stdio.h>
void main(){
    int range;
    printf("enter the range upto which you want to print the numbers:");
    scanf("%d", &range);
    int n=1;
    while(n<=range){
        printf("%d\t",n);
        n++;
    }
}