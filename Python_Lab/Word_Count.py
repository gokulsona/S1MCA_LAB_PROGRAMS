numbers = [int(x) for x in input("Enter a list of integers separated by spaces: ").split(',')]
print("Orginal list is : ",numbers)
odd=[]
for i in numbers:
    if(i%2 !=0):
        odd.append(i)
print("List without even numbers : ", odd)








        
        
