#Algorithm
/*
Step1 : Start
Step2 : Declare Variables,array[size],set flag=0
Step3 : Ask the User to Enter the size of the array and read it in variable size
Step4 : Ask the user to Enter Elements into Array using loop
Step5 : Ask the USer to Enter the Element to Search and read it in variable searchkey
  5.1 : if the searchkey == array element then flag=1 then break ,print element found
  5.2 : if the searchkey != array element then flag=0, print element not found
Step6 : print proper result
Step7 : Stop
*/

#include <stdio.h>

int main()
{
    int limit,i,a[100],searchkey,flag=0;
    printf("Enter Size of an Array : ");
    scanf("%d",&limit);
    
/* To Enter elements in Array */
    
    printf("Enter Elements into Array : \n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    
 /* To Print elements in Array */
    
   printf("Elements are : ");
   for(i=0;i<limit;i++){
       printf("\t%d",a[i]);
   }
   /* To Search index of  elements in an Array */
   printf("\nEnter a Element to Search: ");
   scanf("%d",&searchkey);
   for(i=0;i<limit;i++){
       if(searchkey==a[i]){
           flag=1;
          break;
       }
   }
   if(flag==1)
	{
       printf("\nEntered Element is found at position %d",i+1);
   	}else{
       printf("Not Found");
   	    }

    return 0;
}


#Output
/*
Enter Size of an Array : 4
Enter Elements into Array :
12
26
36
45
Elements are :  12      26      36      45
Enter a Element to Search: 45

Entered Element is found at position 4
*/
