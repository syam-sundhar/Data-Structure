// "command line arguments"

/*these  arguments are passen from command line so they are called command line arguments
these agruments are holded by main function
to suppour these arguments we need to change the structure of main function. */

#include <stdio.h>
#include <stdlib.h>
int main(int argc ,char *argv[]){
//argc counts the no.of arguments given by the user.first argument is always the name of the programme.
//argv contains the total no.of arguments.
	if(argc!=5){
		printf("\n usage %s <name> <marks1> <marks2> <marks3>",argv[0]);
		return 1;
	}
	char *name=argv[1];
	int m1=atoi(argv[2]);
	int m2=atoi(argv[3]);
	int m3=atoi(argv[4]);
	int total=m1+m2+m3;
	printf("\nthe name is %s",argv[0]);
	printf("\nstudent name is %s",name);
	printf("\nm1:%d ,m2:%d ,m3:%d",m1,m2,m3);
	return 0;
}
