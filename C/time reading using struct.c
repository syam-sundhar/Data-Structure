#include <stdio.h>
typedef struct Time{
	int hours:5;
	int mins:6;
	int sec:6;
}time;
int main(){
	time t;
	char temp1,temp2;
	printf("enter the time in (HH:MM:SS) formate: ");
	scanf("%d %d %d",t.hours,t.mins,t.sec);
	printf("hours: %d\nminits:%d\nseconds: %d",t.hours,t.mins,t.sec);
}
