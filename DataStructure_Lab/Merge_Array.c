#Algorithm
step 1 : start
step 2 : Initialize the varoiables
step 3 : Ask the user to enter the size of first and second array
step 4 : Ask the user to enter elements into first and second array in Sorted order
step 5 : Merge the size of both array and create a Merged Array of new size
step 6 : Insert both array elements into Merged Array
step 7 : print proper result
step 8 : stop
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[100],arr2[100],arr3[100],s1,s2,s3,i,k=0;
	//First Array Size
	printf("Enter Size of First Array : ");		
	scanf("%d",&s1);

	// First Array Elements
	printf("Enter %d Elements :\n",s1);
	for(i=0;i<s1;i++)
	  {
		scanf("%d",&arr1[i]);
	  }

	
	//Second Array Size
	printf("Enter Size of Second Array : ");		
	scanf("%d",&s2);

	// second Array Elements
	printf("Enter %d Elements :\n",s2);
	for(i=0;i<s2;i++)
	  {
		scanf("%d",&arr2[i]);
	  }

	s3 = s1 + s2;

	//to merge array
	for(i=0;i<s3;i++)
	{
	   if(i<s1)
	    {
		arr3[i] = arr1[i];
	    }else{
		   arr3[i] = arr2[k];
			k++;
		 }
	}
	printf("Merged Array : ");
	for(i=0;i<s3;i++)	
	 {
		printf("%d\t",arr3[i]);
        }
}

//#Output
/*
Enter Size of First Array : 3
Enter 3 Elements :
1
2
3
Enter Size of Second Array : 3
Enter 3 Elements :
4
5
6
Merged Array : 1        2       3       4       5       6
*/