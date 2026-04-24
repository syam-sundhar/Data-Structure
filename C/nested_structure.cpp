//

#include<stdio.h>
struct details{
	char name[20];
	struct dob{
		int date,month,year;
	}f;
}d;

int main(){
	printf("enter student name: ");
	scanf(" %s",d.name);
	printf("enter student date of birth: ");
	scanf("%d %d %d",&d.f.date,&d.f.month,&d.f.year);
	printf("\nyear:%d\nmonth:%d\nday:%d",d.f.year,d.f.month,d.f.date);
	printf("\n%s",d.name);
}
