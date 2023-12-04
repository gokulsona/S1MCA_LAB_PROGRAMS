Aim : Accept a file name and print its extension

#Algorithm
step 1 : start 
step 2 : Ask the user to enter a Filename
step 3 : Split the Filename from dot(.).
step 4 : if the file has extension print extension else not
step 5 : print proper result
step 6 : stop

#Program
filename = input("Enter a filename: ")
ext = filename.split(".")[-1]
if ext:
    print("The extension of the file is:",ext)
else:
    print("The file has no extension.")


#Output
Enter a filename : python.py
The extension of the file is : py