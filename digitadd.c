#include<stdio.h>
int main()
{
	int num=12345;
	int a=num/10000;
	int q1=num%10000;
	int b=q1/1000;
	int q2=q1%1000;
	int c=q2/100;
	int q3=q2%100;
	int d=q3/10;
	int e=q3%10;
	int sum=a+b+c+d+e;
	printf("%d",sum);
	
}
