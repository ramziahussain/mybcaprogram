marks=['sachin',22,23,5,11,77]
#declares a list 'marks' to store marks of sachins
mymark=[]
#dynamic initialisation
for num in range(5):
    newmark=int(input("enter the marks:"))
    mymark.append(newmark)
print(mymark)    
for i in range(len(mymark)):
    print("the",i+1,"element is",mymark[i])
    
