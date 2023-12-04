Aim : Find GCD of two Numbers

#Algorithm
step 1 : start 
step 2 : ask user to enter two numbers, num1 and num2
step 3 : i=1
	while (i<num1 and i<num2):
    	  if(num1%i==0 and num2%i==0):
           if(num1%i==0 and num2%i==0):
             gcd=i
step 4 : print proper result
step 6 : stop

#Program
num1 = int(input("Enter the first number  : "))
num2 = int(input("Enter the second number : "))
i=1
while (i<num1 and i<num2):
    if(num1%i==0 and num2%i==0):
        if(num1%i==0 and num2%i==0):
            gcd=i
    i=i+1
print("gcd : ",gcd)

#Output
Enter the first number  : 12
Enter the second number : 24
gcd :  6


