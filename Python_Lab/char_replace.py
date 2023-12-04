Aim : Get a String from input string where all occurance of first character replaced with '$',except first character

#Algorithm
step 1 : start 
step 2 : Ask the user to enter a string as str1
step 3 : set first_char = str[0]
step 4 : if str[0] occur again replace it with '$'
step 5 : print proper result
step 6 : stop

#Program
def replace_first_char(str1):
  first_char = str1[0]
  remaining_chars = str1[1:].replace(first_char, '$')
  return first_char + remaining_chars

str1 = input("Enter a String : ")
print(replace_first_char(str1)) 

#Output
Enter a String : onion
oni$n