#include <stdio.h>
#include <stdlib.h>
struct queue
{
	int front;
	int rear;
	char a[10];
}q;

void insert(struct queue*,char);
char remove(struct queue *);
void display(struct queue *);
void main()
{
	char x;
	int y;
	q.front=-1;
    q.rear=-1;
    while(1)
    {
	
	printf("1.insert\n2.remove\n3.display\n4.exit\n");
    scanf("%d",&y);
    switch(y)
    {
    	case 1:printf("enter element to be inserted");
    	       scanf("%c",x);
    	       insert(&q,x);
    	       break;
        case 2:
               break;
        case 3:display(&q);
               break;
        case 4:break;
	}

}


}




void insert(struct queue *q,char ele)
{
	int i;
	if(q->rear==9)
	printf("queue overflow\n");
	else if(q->front==-1 && q->rear==-1)
{
		q->front++;
	q->rear++;
	q->a[q->front]=ele;
}
	else
	{
	
	for(i=q->rear;i>=0;i--)
	{
		q->a[i+1]=q->a[i];
		
	}
	q->a[q->front]=ele;
}
}

void remove(struct queue *q)
{

	char t;
	if(q->rear==-1 && q->front==-1)
	printf("queue is empty");
	else
{
		t=q->a[q->rear];
	q->rear--;
	printf("removed element is %c\n",t);
}
}

void display(struct queue *q)
{
	int i;
	for(i=q->rear;i>=0;i--)
	{
		printf("%c\n",q->a[i]);
	}
}

