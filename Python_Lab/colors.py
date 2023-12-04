Aim : Create a list of colors from comma-seperated color names entered by user.Display First and Last Colors

#Algorithm
step 1 : start 
step 2 : Ask the user to enter a list of color
step 3 : print first color as color[1] and last as color[-1]
step 4 : print proper result
step 6 : stop

#Program
color = input("Enter color names: ")
cname = color.split(',')
print("First color: ", cname[0])
print("Last color: ", cname[-1])

#Output
Enter color names : red,orange,blue,yellow
First color :  red
Last color  :  yellow


