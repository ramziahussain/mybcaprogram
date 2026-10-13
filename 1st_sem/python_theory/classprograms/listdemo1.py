size=int(input("enter the size of the list:"))
sum=0
list=[]
for i in range(size):
    ele=int(input("enter element:"))
    list.append(ele)
    sum=sum+ele
print(list)
print("sum is:",sum)
