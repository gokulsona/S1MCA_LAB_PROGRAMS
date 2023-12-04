Aim : Create a Single String seperated with space from two string by swapping the character at position 1

#Algorithm
step 1 : start 
step 2 : Ask the user to enter two string as str1 and str2
step 3 : if len(str1) >= 2 and len(str2) >= 2:
	  new_str1 = str2[0] + str1[1:]
 	  new_str2 = str1[0] + str2[1:]
 	  result = new_str1 + ' ' + new_str2
step 4 : print proper result
step 6 : stop

#Program
str1 = input("Enter the first string : ")
str2 = input("Enter the second string : ")
if len(str1) >= 2 and len(str2) >= 2:
 new_str1 = str2[0] + str1[1:]
 new_str2 = str1[0] + str2[1:]
 result = new_str1 + ' ' + new_str2
 print("Resulting string after swapping characters at position 1 : ", result)


#Output
Enter the first string : python
Enter the second string : java
Resulting string after swapping characters at position 1 :  jython pava