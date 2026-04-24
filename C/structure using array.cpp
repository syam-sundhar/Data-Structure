#include <stdio.h>
struct student{
	int roll;
	float marks;
};
void display(int a,float b);
int main(){
	struct student s;
	printf("\nenter roll number:");
	scanf("%d",&s.roll);
	printf("enter marks: ");
	scanf("%f",&s.marks);
	display(s.roll,s.marks);
	return 0;
}
void display(int a,float b){
    printf("\nstudent roll number=%d\nstudent marks=%d",a,b);
}
