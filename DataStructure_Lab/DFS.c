/*
#Algorithm
step 1 : Start
step 2 : Ask the user to Enter Number of vertices,Edges
step 3 : Ask the user to Enter the Edges and mark the visited Edges as  1 in adjacency matrix 
step 4 : set Unvisited Edges as 0,call DFS()
step 5 : DFS()
	 5.1 Ask the user to Enter initial vertex and store it into stack[top]
	 5.2 If visited of initial vertex is false,set visited of initial vertex is 1

	#friends we have 1 more line to write we can fix it later so please leave a space to write 1 line of algorithm.then continue with step 6 	

step 6 : proper result
step 7 : stop
	 
	 
*/

//Code
#include<stdio.h>
int adjmat[10][10],stk[10],visited[10],top,v,i,j,k,e,n;
void DFS();
void main()
{
	printf("Enter Number of Vertices : ");
	scanf("%d",&n);
	printf("Enter Number of Edges : ");
	scanf("%d",&e);	

	printf("\nEDGES\n");
	for(k=1; k<=e; k++)
	 {
		scanf("%d%d",&i,&j);
		adjmat[i][j] = 1;
		adjmat[j][i] = 1;
	 }
	printf("\nAdjacency Matrix\n");
	for(i=1; i<=n; i++)	
	 {
		for(j=1; j<=n; j++)
		 {
			printf("%d ",adjmat[i][j]);
		 }
			printf("\n");
	 }
	for(i=1; i<=n; i++)	
		visited[i] = 0;
		top = -1;
		DFS();
		
}

//DFS
void DFS()
{
	printf("Enter Initial Vertex : ");	
	scanf("%d",&v);
	top++;
	stk[top] = v;
	printf("\nDFS Traversal : ");
	while(top >= 0)
	 {
		v = stk[top];
		top--;
	
		if( visited[v] == 0)	
		 {
			printf("%d\t",v);
			visited[v] = 1;
		 }	
		for(i=n; i>=1; i--)	
		 {
			if( adjmat[v][i] == 1 && visited[i] == 0 )
			 {
				top++;
				stk[top] = i;
			 }
		 }
	 }
}



/*

#Output
Enter Number of Vertices : 3
Enter Number of Edges : 2

EDGES
1 2
2 3

Adjacency Matrix
0 1 0 
1 0 1 
0 1 0 
Enter Initial Vertex : 1

DFS Traversal : 1	2	3	

*/






















