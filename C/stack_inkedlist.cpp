#include <stdio.h>
#include <stdlib.h>

struct stack{
	int data;
	struct stack *next;
};

struct stack *top=NULL,*temp;

void push(){
	struct stack *newnode=(struct stack *)malloc(sizeof(struct stack));
	printf("\nenter the data to push: ");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}

void display(){
	temp=top;
	int i=0;
	while(temp!=NULL){
		printf("\n%d->| %d |",i,temp->data);
		temp=temp->next;
		i++;
	}
}

void pop(){
	if (top==NULL) printf("\nunderflow");
	else{
		temp=top;
		top=top->next;
		free(temp);
	}	
}

void peek(){
	if (top==NULL)
	    printf("\nunderflow");
	else printf("\nthe top element is :%d",top->data);
}

int main(){
	int choice,ch;
	
	do{
	    printf("\npush - 1\npop - 2\npeek - 3\ndisplay - 4");
	    printf("\nenter your choice: ");
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
				printf("\ninvalide input");
		}
		printf("\ndo you want another operation: ( YES- 1 || NO- 0 )");
		scanf("%d",&ch);
	}while(ch!=0);
	
}
