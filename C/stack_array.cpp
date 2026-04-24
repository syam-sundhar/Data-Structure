#include <stdio.h>

#define max 5

int stack[max],top=-1;
void push(){
	if(top==max-1) printf("\noverflow");
	else{
		int n;
		printf("enter the data to push: ");
		scanf("%d",&n);
		top++;
		stack[top]=n;
	}
}

void pop(){
	if (top==-1){
		printf("\n underflow");
	}
	else{
		int temp;
		temp=stack[top];
		printf("the poped element is %d: ",temp);
		top--;
	}
}

void peek(){
	if (top==-1){
		printf("\n underflow");
	}
	else{
		printf("the top element is: %d",stack[top]);
	}
}

void display(){
	if(top==-1) printf("underflow");
	else {
		for(int i=top;i>=0;i--){
			printf("\n%d",stack[i]);
		}
	}
}

int main() {
    int choice;
    int ch;
    do{
    	printf("\n 1.push()\n 2.pop() \n 3.peek()\n 4.display()");
    	printf("\n enter choice:");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			push();
    			break;
    		case 2:
				pop();
				break;
			case 3:
			    peek();
				break;
			case 4:
			    display();
				break;
			default:
			printf("\n invalid option");			
		}
		printf("\n do you want another option (YES-1 || NO-0 ): ");
		scanf("%d",&ch);
	}while (ch);
	return 0;
}
