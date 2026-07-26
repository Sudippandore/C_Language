//check number is armstrong or not
#include<stdio.h>
void main(){
    int num, temp, rem, result=0;
    printf("enter a number:");
    scanf("%d", &num);

    temp = num;

    while(num!=0) { 
        rem = num%10;
        result = result + rem * rem * rem;
        num = num/10;
    }

    if(result == temp) {
        printf("%d is armstrong",temp);
    }
    else {
        printf("%d is not armstrong",temp);
    }
}