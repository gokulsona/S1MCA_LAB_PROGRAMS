Aim : List comprehensiion
    (a)Generate Positive list of numbers from a list of integers
    (b)Square of N numbers
    (c)From a list of vowels selected from a given word
    (d)List ordinal value of each element of a word 

A)Generate positive list of numbers from a result
Algorithm:
step 1 : start
step 2 : create a list of integers
step 3 : for x in lis if x > 0 then its a positive number else not
step 4 : print proper result
step 5 : stop
 
l1=[1,2,-3,66,-45]
new_l=[x for x in l1 if x>0]
print(new_l)

####################
B)Square of N Numbers
Algorithm:
step 1 : start
step 2 : Ask the user to Enter the range and read it in variable num
step 3 : for x in range x**2 print the perfect squares upto range
step 4 : print proper result
step 5 : stop

num=int(input("Enter the Range : "))
square=[x**2 for x in range(0,num+1)]
print(square)

#output
Enter the Range : 5
[0, 1, 4, 9, 16, 25]

####################
Algorithm:
C)From a list of vowels selected from a given word
step 1 : start
step 2 : Ask the user to enter the word
step 3 : for x in range x**2 print the perfect squares upto range
step 4 : print proper result
step 5 : stop

word = input("Enter a Word : ")
vowels = [x for x in word if x in "aeiou"]
print("Vowels in", word ,":" ,vowels)

#output
Enter a Word : vowels
Vowels in vowels : ['o', 'e']

#####################
Algorithm:
D)From a list of ordinal values of each element of a word 
step 1 : start
step 2 : Ask the user to enter the word
step 3 : use ord() function, to get ordinal value
step 4 : print proper result
step 5 : stop

word = input("Enter a Word : ")
ordinal_values = [ord(x) for x in word]
print("Ordinal values of ",word,":", ordinal_values)

#output
Enter a Word : python
Ordinal values of  python : [112, 121, 116, 104, 111, 110]
