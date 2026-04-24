#include <stdio.h>
typedef struct students{
	int roll;
	int marks;
}s;
int main(){
	int n,count=0;
	printf("enter the no.of students:");
	scanf("%d",&n);
	s student[n];
	for(int i=0;i<n;i++){
		printf("enter roll number of student %d:",i+1);
		scanf("%d",&student[i].roll);
		printf("the marke of student of roll.no %d: ",student[i].roll);
		scanf("%d",&student[i].marks);
		if (student[i].marks>=50){
			count+=1;
		}
	}
	printf("%d got above fifty marks",count);
	return 0;
}
