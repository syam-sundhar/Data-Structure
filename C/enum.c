//enum 
/*--->it is user defined data type it is used to define named integer constants
    it is used when the variable have fixed values
    enum formally to reprasent states, monts,directions...etc.
--->syntax
    enum enum_name{
    constant 1,
    constant 2,
      .
      .
    constant n};
    
variable decleraction
    enum enum_name variable_name;
*/
#include<stdio.h>
enum days{mon=1,tus,wed,thur,fri,sat
};
main(){
	enum days d;
	d=tus;
	printf("%d",d);
}
