Aim : Sort Dictionary in ascending and descending order

#Algorithm
step 1 : start 
step 2 : sort dictionary in ascending as sorted.items() and descending as sorted.items(),reverse = True
step 4 : print proper result
step 6 : stop

#Program
d={18:'python',24:'c++',2:'html',3:'java'}
print("orginal dictionary=", d)
print("dictionary in ascending order by key:",sorted(d.items()))
print("dictionary in decending order by key:",sorted(d.items(),reverse=True))

#Output
orginal dictionary= {19: 'python', 23: 'c++', 3: 'html', 4: 'java'}
dictionary in ascending order by key: [(3, 'html'), (4, 'java'), (19, 'python'), (23, 'c++')]
dictionary in decending order by key: [(23, 'c++'), (19, 'python'), (4, 'java'), (3, 'html')]
