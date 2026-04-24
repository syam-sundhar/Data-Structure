// "typedef"

/*
1.type def is keyword which is used to created a new names for the existing data types
2.typedef improves code readability by allowing programmer to give meaningfull names for the datatypes
3.it allows the programmers to rename the userdefined data types ex:- structure, union, enum
4.it does ot create new data type it only provides alternative name for the existing datatype

--->syntax: typedef  existed_datatype  new_name;

--->example: typedef int in;
*/

#include <stdio.h>
main(){
	typedef int i;
	i a=9;
	printf("a is: %d",a);
}
