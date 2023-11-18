#Algorithm
Step1 : Start
Step2 : Declare the variables and Functions for enqueue,dequeue, and display and initially front & rear = -1
Step3 : enqueue() : check if rear >= size then queue is full else increment the rear by 1 and assign element to rear 
   3.1 : dequeue() : check if rear == -1 then queue is empty nothing to delete ,else increment front by 1 and delete queue[front] element
   3.2 : display() : check if rear == -1 then queue is empty nothing to show,else print queue upto queue[rear]
Step4 : Using Switch Case read user's choice and  loop the Program until exit(0) function calls
Step5 : print the proper result
Step6 : Stop


#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,queue[5],size=5,i,element;
int enqueue();
int dequeue();
int display();
int main()
{  
    int choice;
    while(1)
    {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("Select Operation : ");
    scanf("%d",&choice);
    switch(choice)
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
        printf("Invalid option\n");
        exit(0);
        break;
    }
    }
}

int enqueue()
{
	if(rear>=size)
	  {
		printf("Queue is Full");
	  }
	else
	  {
	        printf("Enter Element to Queue : ");
                scanf("%d",&element);
		rear++;
		queue[rear] = element;
	    }
	}


int dequeue()
{
	if(rear==-1)
	  {	
		printf("Empty Queue");

	  }
	else
	 {
		front++;
		printf("Deleted Element is %d",queue[front]);
		
	 }
}

int display()
{
	if(rear==-1)
	  {
		printf("Empty Queue");
	  }
	 else
	  {	
		printf("Queue Elements :");
		for(i=front+1;i<=rear;i++)
		   {
			printf("%d\t",queue[i]);
		   }
	  }

}

#Output
/*
1.Enqueue
2.Dequeue
3.Display
4.Exit
Select Operation : 1
Enter Element to Queue : 25
1.Enqueue
2.Dequeue
3.Display
4.Exit
Select Operation : 1
Enter Element to Queue : 36
1.Enqueue
2.Dequeue
3.Display
4.Exit
Select Operation : 3
Queue Elements :25	36	
1.Enqueue
2.Dequeue
3.Display
4.Exit
Select Operation : 2
Deleted Element is 25
1.Enqueue
2.Dequeue
3.Display
4.Exit
Select Operation : 3
Queue Elements :36	
1.Enqueue
2.Dequeue
3.Display
4.Exit
*/
