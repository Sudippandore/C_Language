//check strong number in the given range 1 to n? 

void isStrong();
#include<stdio.h>
void main() {
    printf("start\n");
    isStrong();
    printf("\nend");
}
void isStrong() {
    int range,temp, rem, fact, j, sum;
    printf("enter the range:");
    scanf("%d", &range);

    int i;
    for(i=1; i<=range; i++) {
        temp = i;
        sum = 0;
        while(temp>0){
            rem = temp%10;
            fact = 1;
            j = 1;
            while(j<=rem) {
                fact = j*fact;
                j++;
            }
            sum = sum + fact;
            temp = temp/10;
        }
        if(sum == i)
        printf("\n%d", i);
    }
   
}