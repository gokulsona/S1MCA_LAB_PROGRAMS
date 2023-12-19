#Algorithm
/*
step 1 : start
step 2 : initialize variables and functions
step 3 :
	 3.1 make set()
		make set of n size and make p[x] = x
 	3.2 find set()
		find parent of each element if p[x] != x,then find p[x]
	3.3 merge()
		merge two sets that the elements belongs to  
	3.4 issameset()
		to find if the elements are belongs to same set
step 4 : print proper result
step 5 : stop
*/

#Program
#include<stdio.h>
int parent[100],i,n;
void makeset(int n)
{
	for(i=0;i<n;i++)	
	 {
		parent[i] = i;
	 }
}
int find(int x)
{
	if(parent[x] == x) return x;
	return find(parent[x]);
}
void merge(int a,int b)
{
	parent[find(a)] = find(b);
}

int issameset(int a,int b)
{
	return find(a) == find(b);
}
int main()
{
	makeset(10);
	merge(1,2);
	merge(2,3);
	merge(7,8);
	merge(8,9);
	merge(0,2);
	printf("%d\n",issameset(1,3));
	printf("%d\n",issameset(2,8));
	printf("%d\n",issameset(5,8));
	printf("%d\n",issameset(0,8));
	merge(5,8);
	printf("%d\n",issameset(8,5));
	printf("%d\n",find(1));
	
}

#Output
/*
1
0
0
0
1
3
*/