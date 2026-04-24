#include<stdio.h>
enum floor{ladies=1,men,children
};
int main(){
	enum floor choice;
	//printf("enter choice: ");
	//scanf("%s",&choice);
	choice=children;
	switch (choice){
		case ladies:
			printf("goto floor no. %d",choice);
			break;
		case men:
			printf("goto floor no. %d",choice);
			break;
		case children:
			printf("goto floor no. %d",choice);
			break;
		default:
		    printf("invalide input");
	}
	return 0;
}
