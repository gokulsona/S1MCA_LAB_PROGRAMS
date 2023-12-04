Aim : Prompt the user for a list of integers.For all values greater than 100,store 'over' instead.

#Algorithm
step 1 : start 
step 2 : Ask the user to enter number of elements in list
step 3 : Ask the user to enter the integers
step 4 : if intger > 100 then replace the value as 'over'
step 5 : print proper result
step 6 : stop

d=[]
num=int(input("Enter number of elements in the list : "))
print("Enter the Elements : ")
for i in range(0,num):
    element=int(input())
    d.append(element)
for i in range(len(d)):
    if d[i]>100:
        d[i]="over"
print(d)

#Output
Enter number of elements in the list : 5
Enter the Elements : 
100
250
78
96
150
[100, 'over', 78, 96, 'over']
