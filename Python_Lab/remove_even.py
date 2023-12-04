Aim : From a list of Integers,create a list removing even numbers

step 1 : start 
step 2 : Ask the user to enter list of numbers
step 3 : if number%i !=0 it's a odd number,append numbers into odd[]
step 4 : print proper result
step 6 : stop

#Program
numbers = [int(x) for x in input("Enter a list of integers separated by spaces: ").split(',')]
print("Orginal list is : ",numbers)
odd=[]
for i in numbers:
    if(i%2 !=0):
        odd.append(i)
print("List without even numbers : ", odd)

#Output
Enter a list of integers separated by spaces: 25,40,28,99,15,13,2
Orginal list is :  [25, 40, 28, 99, 15, 13, 2]
List without even numbers :  [25, 99, 15, 13]