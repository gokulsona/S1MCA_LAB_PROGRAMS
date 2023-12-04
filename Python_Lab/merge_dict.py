Aim : Merge Two Dictionaries

#Algorithm

step 1 : start 
step 2 : set dictionary1 and dictionary2
step 3 : Merge Dictionary using update()
step 4 : print proper result
step 6 : stop

#Program
dict1 = {'apple': 10, 'banana': 20,'grapes':50}
dict2 = {'carrot': 30, 'tomato': 40,'cabbage':60}
print("First Dictonary    : ",dict1)
print("Second Dictionary  : ",dict2)
dict1.update(dict2)
print(f"Merged dictionary : ",dict1)

#Output
First Dictonary    :  {'apple': 10, 'banana': 20, 'grapes': 50}
Second Dictionary  :  {'carrot': 30, 'tomato': 40, 'cabbage': 60}
Merged dictionary  :  {'apple': 10, 'banana': 20, 'grapes': 50, 'carrot': 30, 'tomato': 40, 'cabbage': 60}
