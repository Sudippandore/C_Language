// Accept two numbers from user and an operator (+,-,/,*,%) based on that 
// perform the desired operations. 

void operation();
#include<stdio.h>

void main() {
    printf("start\n");
    operation();
    printf("end");
}

void operation() {
    int num1,num2, result;
    char operator;
    printf("Enter two numbers:");
    scanf("%d%d", &num1,&num2);
    printf("Enter the operation (+,-,/,*, %%):\n");
    scanf(" %c", &operator);

    if(operator == '+'){
        result = num1 + num2;
    }
    else if(operator == '-'){
        result = num1 - num2;
    }
    else if(operator == '*') {
        result = num1 * num2;
    }
    else if(operator == '/') {
        result = num1 / num2;
    }
    else if(operator == '%') {
        result = num1 % num2;
    }
    else {
        printf("invalid operator");
        return 1;
        
    }

    printf("result = %d\n", result);
}