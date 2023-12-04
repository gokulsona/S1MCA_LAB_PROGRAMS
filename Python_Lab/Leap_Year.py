Aim : Display Future Leap Year from current year to Final year 

#Algorithm

step 1 : start
step 2 : Read current and future year from user and store it in variables
step 3 : from current year to future year,if (year % 4 == 0 && year%100 !=0 or year%400 == 0 ) then Y is a leap year else not
step 4 : print proper result
step 5 : stop  

current_year=int(input("Enter the current year : "))
future_year=int(input("Enter the future year   : "))
if(current_year<future_year):
    for y in range(current_year, future_year+1):
        if(y%4==0 and y%100!=0 or y%400==0):
            print(y)
       

#Output
Enter the Current year : 2023
enter the future year  : 2030
2024
2028