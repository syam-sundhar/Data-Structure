//"BIT FEILD"
/* 
1.it is used to specify the no.of bits allocated to the structure member,the aim is to save memory
2. bit feilds are allowed in structures only
3.bit feild does'n support arrays pointers.
4. each bit feild member must be in integer type it dose'n support float and double. 

--->syntax
    sturct structure_name{
        data_type member_name: number_of_bits;
	};
number bits defines how many bits the member should occupy
*/
#include <stdio.h>
typedef struct demo{
	int a:2;
	int b:3;
}dem;
int main(){
	dem v;
	v.a=3;
	v.b=7;
	printf("%d",v.a);
}
