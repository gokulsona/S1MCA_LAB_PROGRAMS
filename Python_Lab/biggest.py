Aim : Find Biggest of 3

#Algorithm
step 1 : start 
step 2 : Ask the user to enter 3 numbers as num1,num2,num3
step 3 : Compare num1,num2 and numb3 each other
step 4 : print proper result
step 6 : stop

#Program
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))
if (num1>num2 and num1>num3):
    print(num1 ,"is largest")
elif( num2>num1 and num2>num3):
    print(num2 ,"is largest")
else:
    print( num3," is largest")



#Output
Enter the first number: 25
Enter the second number: 12
Enter the third number: 8
25 is largest
