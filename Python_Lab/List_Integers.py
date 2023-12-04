Aim : Enter Two list of Integers.Check (a)Whether lists are of Same length (b)whether list sums to same value (c) whether any value occur in both

Algorithm : 
step 1 : start
step 2 : Declare the Fuction check_list & Ask the user to Enter Elements into List1 and List2
step 3 : using len(),if length of list1 == list2,then they are same length else not
step 4 : Using sum(),if sum of list1 == lsit2 ,then their sums are equal else not
step 5 : Using set() ,find the common value
step 6 : print proper result
step 7 : stop  

Program:

list1 = [int(x) for x in input("Enter Elements of the first list separated by spaces: ").split()]
list2 = [int(x) for x in input("Enter Elements of the second list separated by spaces: ").split()]

def check_lists(list1, list2):
    if len(list1) == len(list2):
        print("Both lists are of the same length.")
    else:
        print("Lists are not of the same length.")

    if sum(list1) == sum(list2):
        print("Both lists have the same sum.")
    else:
        print("Lists do not have the same sum.")

    common_values = set(list1) & set(list2)
    if common_values:
        print("Common values found in both lists:", common_values)
    else:
        print("No common values found in both lists.")

check_lists(list1, list2)

Output :
Enter Elements of the first list separated by spaces: 10 25 35 45 75
Enter Elements of the second list separated by spaces: 10 33 35 22 75
Both lists are of the same length.
Lists do not have the same sum.
Common values found in both lists: {75, 10, 35}
