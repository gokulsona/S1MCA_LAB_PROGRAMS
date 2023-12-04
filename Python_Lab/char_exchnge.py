Aim : Create a string from a given string where first and last characters are exchanged

#Algorithm
step 1 : start 
step 2 : Ask the user to enter a string as str1
step 3 : set first_char = str1[0]
step 4 : set last_char = str1[-1]
step 5 : print modified character as last_char + str1[1:-1] + first_char
step 6 : stop

#Program
str1 = input("Enter a String : ")
first_char = str1[0]
last_char = str1[-1]
modified_string = last_char + str1[1:-1] + first_char
print(modified_string)

#Output
Enter a String : python
nythop