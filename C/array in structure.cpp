//take 5 subject marks for each student and  include total and average (use array in struct)
#include <stdio.h>
struct student{
	int roll;
	char name[20];
	float sub[5];
	char grade;
	float total;
	float avg;
};
int main(){
	struct student s[2];
	for(int i=0;i<2;i++){
	printf("\nenter the student %d roll: ",i+1);
	scanf("%d",&s[i].roll);
	printf("enter the student %d name: ",i+1);
	scanf("%s",&s[i].name);
	int total=0;
	for(int j=0;j<5;j++){
	    printf("enter the student %d marks in sub %d: ",i+1,j+1);
	    scanf("%f",&s[i].sub[j]);
	    total=total+s[i].sub[j];
    }
	printf("enter the student %d grade: ",i+1);
	scanf(" %c",&s[i].grade);
	s[i].total=total;
	s[i].avg=total/3.0;
    }
    printf("%f",s[0].total);
}

