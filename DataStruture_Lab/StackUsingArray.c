/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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


