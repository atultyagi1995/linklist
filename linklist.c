#include<stdio.h>
#include<conio.h>
typedef struct student{
	int item;
	struct student *next;

}node;
void main()
{
	int temp1,i;
	node *ptr,*temp,*head=NULL;
	do{
	
	printf("enter valuse");
	scanf("%d",&temp1);
	ptr=(node *)malloc(sizeof(node));
	ptr->item=temp1;
	ptr->next=NULL;
	if(head==NULL)
	{
	head=ptr;
	}
	else{
		temp=head;
		while(temp->next=NULL)
		{
			temp=temp->next;
		}
		temp->next=ptr;
		
	}
	printf("enter 1 for continue");
	scanf("%d",&i);
}
while(i==1);
temp=head;
while(temp!=NULL)
{
	printf("%d\n",temp->item);
	temp=temp->next;
}
getch();
}
