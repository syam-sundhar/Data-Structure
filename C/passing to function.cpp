//passing structure to the function
#include <stdio.h>
struct student{
	int roll;
	float marks;
};
void display(struct student s2);
int main(){
	struct student s;
	printf("\nenter roll number:");
	scanf("%d",&s.roll);
	printf("enter marks: ");
	scanf("%f",&s.marks);
	display(s);
	return 0;
}
void display(struct student s2){
    printf("\nstudent roll number=%d\nstudent marks=%f",s2.roll,s2.marks);
}
