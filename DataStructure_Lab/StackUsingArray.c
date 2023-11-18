#Algorithm
Step1 : Start
Step2 : Declare the variables and Functions for push,pop, and display and initially top = -1
Step3 : push() : check if top == size-1 then stack is full else increment the top by 1 and assign element to top 
   3.1 : pop() : check if top == -1 then stack is empty nothing to delete ,else pop top element then decrement top by 1
   3.2 : display() : check if top == -1 then stack is empty nothing to show,else print stack upto top[stack]
Step4 : Using Switch Case read user's choice and  loop the Program until exit(0) function calls
Step5 : print the proper result
Step6 : Stop


#include<stdio.h>
#include<stdlib.h>
int top=-1,size=5,arr[5];
int push();
int pop();
int display();
int main()
{  
    int choice;
    printf("\n\nStack operation...");
    while(1)
    {
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    printf("Select Operation : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
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
int push()
{
    int element;
    if(top == size-1)
    {
        printf("\nOverflow!\n");
    }
    else
    {
        printf("Enter Element into Array : ");
        scanf("%d",&element);
        top=top+1;
        arr[top]=element;
    }

}
int pop()
{   
    
    if(top == -1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("\nPoped Element is %d\n",arr[top]);
        top=top-1;
    }

}
int display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is Empty..\n");
    }
    else
    {
	printf("Stack Elements : \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",arr[i]);
        }
    }
}


#Output
/*
Stack operation...
1.Push
2.Pop
3.Display
4.Exit
Select Operation : 1
Enter Element into Array : 25

1.Push
2.Pop
3.Display
4.Exit
Select Operation : 1
Enter Element into Array : 36

1.Push
2.Pop
3.Display
4.Exit
Select Operation : 1
Enter Element into Array : 28

1.Push
2.Pop
3.Display
4.Exit
Select Operation : 3
Stack Elements :
28
36
25

1.Push
2.Pop
3.Display
4.Exit
Select Operation : 2

Poped Element is 28

1.Push
2.Pop
3.Display
4.Exit
Select Operation : 3
Stack Elements :
36
25

1.Push
2.Pop
3.Display
4.Exit
Select Operation : 4
*/
