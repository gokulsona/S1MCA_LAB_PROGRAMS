#Algorithm
/*
step 1 : Start
step 2 : initialize the varibales and circular queue as globally
step 3 : Initialze the functions for each operations
step 4 : Ask user to select an queue operation and call the proper function
step 5 : 
	5.1 : enqueue()
		if queue is full no elements can be inserted,else ask user to enter element and insert it into queue
	5.1 : dequeue()
		if there is no element then nothing to display, else delete the element in queue[front]
	5.2 : display()
		if queue is empty nothing to display else display all the elements in queue as inserted order  from queue[rear]
step 6 : Print proper result
step 7 : Stop
 
*/

//Program

#include<stdio.h>
#include<stdlib.h>
#define size 5
int front =-1 ,rear = -1, queue[size],item,i;

int enqueue();
int dequeue();
int display();

int main()
{
	int option;
	printf("\n\n\tCircular Queue\t\n");
	while(1)
	{
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n3.Exit");
	printf("\nSelect Operation : ");
	scanf("%d",&option);
	switch(option)
	 {
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid Option");
			break;
	 }
	}	

}

int enqueue()
{
	
	if( front == -1  && rear == -1 )
	 {
		front = 0;
		rear = 0;
		printf("Enter Element to Insert : ");
		scanf("%d",&item);
		queue[front] = item;
	 }
	
	else if( ( (rear + 1) % size ) == front )	
	  {
		printf("\nQueue is Full");
	  }	
	else
	 {
		printf("Enter Element to Insert : ");
		scanf("%d",&item);
		rear = (rear + 1) % size;
		queue[rear] = item;
	 }
}	

//dequeue()
int dequeue()
{
	if( front == -1 && rear == -1 )
	{
		printf("\nQueue Underflow");
	}
	else if( front == rear )	
	 {
		printf("Deleted Element is %d",queue[front]);
		front = rear = -1;
	 }
	else
	 {
		printf("Deleted Element %d",queue[front]);
		front = (front + 1) % size;
	 }	
}

//display()
int display()
{
	if ( front == -1 && rear == -1)
	 {
		printf("\n Nothing to Display");
	 }
	else
	 {
		printf("\nElements are : ");
		for(i=front; i!=rear; i = (i+1) % size)
		 {
			printf("%d\t",queue[i]);
		}
			printf("%d\t",queue[i]);
			
		 
	 }
}

/*

        Circular Queue

1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 1
Enter Element to Insert : 15

1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 1
Enter Element to Insert : 25

1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 1
Enter Element to Insert : 35

1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 3

Elements are : 15       25      35
1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 2
Deleted Element 15
1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 3

Elements are : 25       35
1.Enqueue
2.Dequeue
3.Display
3.Exit
Select Operation : 4
Exiting
*/
