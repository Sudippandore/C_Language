#include<stdio.h>
#include<string.h>

typedef struct student
{
	
	int rollNo;
	char name[20];
	int marks;
}student;

  student storestudent(student);
  void display(student);
void main()
{
	student s1,s2,s3;
	s1=storestudent(s1);
	s2=storestudent(s2);
	s3=storestudent(s3);
	display(s1);
	display(s2);
	display(s3);
}

  student storestudent(student s1)
  {
     student s;
     
     printf("ENTER THE  ROLLNO:");
     scanf("%d",&s.rollNo);
     
     printf("ENTER THE NAME:");
     scanf("%s",s.name);
     
     printf("ENTER THE MARKS:");
     scanf("%d",&s.marks);
     
     return s;
  }
  
  void  display(student s)
   {
   	printf("ROLLNO=%d ",s.rollNo);
   	printf("NAME=%s ",s.name);
   	printf("MARKS=%d",s.marks);
   }
