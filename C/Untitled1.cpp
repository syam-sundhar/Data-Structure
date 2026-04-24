//typedef syntax for user defined data types 
#include<stdio.h>

typedef struct student{
	int num;
}stu;
int main(){
	stu a1;
	for(int i=1;i<=10;i++){
		a1.num=i
		printf("%d\n",a1);
	}
}
