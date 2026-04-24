//typedef syntax for user defined data types 
#include<stdio.h>

typedef struct student{
	int roll;
	int marks;
}stu;
int main(){
	stu a1,a2;
	a1.roll=10;
	a1.marks=99;
	printf("a1 roll:%d\na1 marks: %d",a1.roll,a1.marks);
	a2.roll=30;
	a2.marks=100;
	printf("a2 roll:%d\na2 marks: %d",a2.roll,a2.marks);
	return 0;
}
