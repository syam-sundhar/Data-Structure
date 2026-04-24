/*union:union is a user difined data type it contains different types of data members and these data members are identifies (or) reffres with
union key word it is simillar to structures but the difference is that the size of the union is equal to the larger size data member
2. in union all data members shares the comman memory
3. these unions are refferes with union key word
--->syntax:
        union union_name{
        datatype element1;
        datatype element2;
        datatype element3;
        .
        .
        datatype elementn;
    };
    */
#include <stdio.h>
union student{
	int roll;
	float marks;
};
union name{
	int roll;
	int marks;
};
int main(){
	union student s;
	union name n;
	s.roll=101;
	printf("roll first: %d",s.roll);
	s.marks=96.2;
	printf("\nmarks: %f",s.marks);
	printf("\nroll second: %d",s.roll);
	printf("\n_____________________________");
	//2nd test
	n.roll=101;
	printf("\nroll first: %d",n.roll);
	n.marks=99;
	printf("\nmarks: %d",n.marks);
	printf("\nroll second: %d",n.roll);
	return 0;
}
