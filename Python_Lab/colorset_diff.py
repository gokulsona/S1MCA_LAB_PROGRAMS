Aim : print out all color set from color-list1 not contained in color-list2

#Algorithm
step 1 : start 
step 2 : set two colorlist
step 3 : compute set difference using set()
step 4 : print proper result
step 6 : stop

#Program
clist1 = ["red", "green", "blue", "purple"]
print("Color List1 : ",clist1)
clist2 = ["yellow", "green", "orange"]
print("Color List2 : ",clist2)
unique_colors = set(clist1) - set(clist2)
print("Colors in list1 not in list2:", unique_colors)

#Output
Color List1 :  ['red', 'green', 'blue', 'purple']
Color List2 :  ['yellow', 'green', 'orange']
Colors in list1 not in list2: {'red', 'blue', 'purple'}