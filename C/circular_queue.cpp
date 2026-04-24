#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0, *temp=0, *tail=0;
void create()
{
    struct node *newnode=0;
    int i,n;
    printf("\nenter n size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nenter node %d data: ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=tail=newnode;
            tail->next=head;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
    }
}

void display()
{
    temp=head;
    do
    {
        printf("  %d",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

void dequeue()
{
	struct node *temp;
    if(head == 0)
    {
        printf("List is empty\n");
        return;
    }
    if(head == tail)
    {
        free(head);
        head = tail = 0;
    }
    else
    {
        temp = head;
        head = head->next;
        tail->next = head;
        free(temp);
    }
    printf("\nAFTER DELETING: ");
    display();
	printf("\n%d",tail->next->data);
}

void enqueue()
{
	struct node *enode=NULL;
    enode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter newely created node data: ");
    scanf("%d",&enode->data);
    enode->next=NULL;
    if(head==NULL)
    {
        head=tail=enode;
        tail->next=head;
    }
    else
    {
        tail->next=enode;
        tail=enode;
        tail->next=head;
    }
    display();
    printf("\n%d",tail->next->data);
}

int main()
{
    create();
	printf("\nBEFORE OPERATING ANY OPERATION:");
	display();
    int choice,ch;
	printf("\n1. enqueue");
	printf("\n2. dequeue");
	while(ch)
	{
	printf("\nenter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			printf("\nINVALID OPTION");
	}
	printf("\nDO YOU WANT ANOTHER OPTION (YES:1||NO:0): ");
	scanf("%d",&ch);
}
    return 0;
}
