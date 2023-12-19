#Algorithm
/*
step 1 : start
step 2 : initialize sets and make Bit representation of Universal set as 1 and Bit represenatation of Set A  & B as 0
step 3 : if Set A elements  and Universal Elements are same the mark as 1 same process to Set B
step 4 : from that Bit string find union,intersection ,difference
step 5 : print proper result
step 6 : stop 
*/
#Program
#include<stdio.h>
int main()
{
	printf("\n\n\tBit String Operation\n\n");
	int U[10] = {1,2,3,4,5,6,7,8,9,10};
	int A[5] = {1,3,5,7,9};
	int B[6] = {2,4,6,8,10};
/*
//SA = Bit rep of Set A
//BA = Bit rep of Set B
//US = bit rep of Universal Set
//CS = bitwise Union of A and B
//DS = bitwise rep intersection of A and B
//D = bitwise rep of diff of A and B
*/
	int SA[10],SB[10],US[10],CS[10],DS[10],D[10];
	int i,j,t;
	
	for(i=0;i<10;i++)
	{
		US[i] = 1;
		SA[i] = 0;
		SB[i] = 0;
	}
	
	printf("\nThe Bit String Representation of U : ");
	for(i=0;i<10;i++)
	 {
		printf(" %d",US[i]);
		
	 }

	//for set A Representation
	for(i=0; i<5; i++)
	 {
		for(j=0; j<10; j++)
		 {
			if(A[i] == U[j])
			 {	
				SA[j] = 1;
				break;
			 }
		 }
	 }
	
	printf("\nBit String Representation of set A : ");
	for(i=0;i<10;i++)
	 {
		printf(" %d",SA[i]);
		
	 }
	//for set A Representation
	for(i=0; i<6; i++)
	 {
		for(j=0; j<10; j++)
		 {
			if(B[i] == U[j])
			 {	
				SB[j] = 1;
				break;
			 }
		 }
	 }
	
	printf("\nBit String Representation of set B : ");
	for(i=0;i<10;i++)
	 {
		printf(" %d",SB[i]);
		
	 }
	for( i=0;i<10;i++)
	 {
		CS[i] = SA[i] | SB[i];
		DS[i] = SA[i] & SB[i];
		D[i] = SA[i]  & (~SB[i]);
	 }

	printf("\nUnion Set Representation           : ");
	for(i=0;i<10;i++)
	 {
		printf(" %d",CS[i]);
	 }
	printf("\nIntersection Set Representation    : ");
	for(i=0;i<10;i++)
	 {
		printf(" %d",DS[i]);
	 }
	printf("\nDifference Set Representation      : ");
	for(i=0;i<10;i++)  
	 {
		printf(" %d",D[i]);
	 }
}

#Output
/*
        Bit String Operation


The Bit String Representation of U :  1 1 1 1 1 1 1 1 1 1
Bit String Representation of set A :  1 0 1 0 1 0 1 0 1 0
Bit String Representation of set B :  0 1 0 1 0 1 0 1 0 1
Union Set Representation           :  1 1 1 1 1 1 1 1 1 1
Intersection Set Representation    :  0 0 0 0 0 0 0 0 0 0
Difference Set Representation      :  1 0 1 0 1 0 1 0 1 0
*/