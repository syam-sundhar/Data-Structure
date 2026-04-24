#include <stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
	char grade;
};
int main(){
	struct student s[3];
	for(int i=0;i<3;i++){
	printf("\nenter the student %d roll: ",i+1);
	scanf("%d",&s[i].roll);
	printf("enter the student %d name: ",i+1);
	scanf("%s",&s[i].name);
	printf("enter the student %d marks: ",i+1);
	scanf("%f",&s[i].marks);
	printf("enter the student %d grade: ",i+1);
	scanf(" %c",&s[i].grade);
    }
    for(int i=0;i<3;i++){
    	printf("\nroll.no: %d\nname: %s\nMARKS: %f\nGRADE- %c",s[i].roll,s[i].name,s[i].marks,s[i].grade);
    	printf("\n________________________");
	}
	int total=0;
	for(int i=0;i<3;i++){
		total=total+s[i].marks;
	}
	float avg=total/3.0;
	printf("\nthe average marks are: %f",avg);
}
