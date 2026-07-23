//calculate the sum of numbers in the given range
#include<stdio.h>
void main(){
    int start=0, end, sum=0;
    printf("Enter the staring range and ending range:");
    scanf("%d%d",&start,&end);
    
    while(start<=end)
    {
        sum = sum + start ;
        start++;
        
    }
    printf("%d", sum);

}
