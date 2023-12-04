Aim : Stores a list of First Names,count the occurance of 'a' within the list  
#Algorithm
step 1 : start
step 2 : Store a list of names in fname
step 3  Using count(),count the occurance of 'a' or 'A'
step 4 : print proper result
step 5 : stop 

fname = ["Alice", "Bob", "Charlie", "Diana", "Eva"]
count= 0
for x in fname:
  count += x.count("a")
  count += x.count("A")
print("Number of 'a' in first names:")
print(count)

#Output
Number of 'a' in first names:
5
