#include <stdio.h>
#define max 5

int queue[max];
int rear=-1,front=-1;

void enqueue(){
	int a;
	if(rear==max-1) printf("\noverflow");
	else {
		printf("enter element: ");
		scanf("%d",&a);
		if(rear==-1&&front==-1){
			rear=front=0;
			queue[rear]=a;
		}
		else {
			rear++;
			queue[rear]=a;
		}
	}
}

void dequeue(){
	int temp;
	if(front==-1) printf("\nunderflow");
	else if(rear==front){
		temp=queue[front];
		printf("\nthe dequeued element %d",temp);
		rear=front=-1;
	}
	else {
		temp=queue[front];
		printf("\ndepueued element is %d",temp);
		front++;
	}
}

void peek(){
	if (front==-1) printf("underflow");
	else {
		printf("the front element id %d",queue[front]);
    } 
}

void display(){
	if (front!=-1){
	    for(int i=front;i<max-1;i++){
		printf("\n%d",queue[i]);
		}
    }
    else printf("underflow");
}

int main(){
   int choice=1,ch=1;
   printf("\n\n1. enqueue\n2. dequeue\n3. Peek\n4. Display\n5. Exit");
    do   
    {
        
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("\nInvalid option");
        }
        printf("\ndo you want another operation: ");
        scanf("%d",&ch);
    } while(ch!=0);
return 0;
}
