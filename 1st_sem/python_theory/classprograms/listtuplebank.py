#write a py oprogram to demonstarte bank operations using list n tuples --- list inside tuple 
#tuples: acc name, accno-1000, dob, pan
#list: emailid, phone, address-place, current balance
accname=input("enter account name:")
while(True):
    accno=int(input("enter account number"))
    if (accno!=1000):
        print("invalid account number, please try again")
    else:
        break
dob=input("enter date of birth:")
pan=int(input("enter pan card number:"))
email=input("enter your email id:")
phone=int(input("enter ur phone number:"))
add=input("enter your address:")
curbal=0
accdetails=[email,phone,add,curbal]
acc=(accno,accname,dob,pan,accdetails)
print(acc)
deposit=int(input("enter deposit"))
curbal=curbal+deposit
curbal=acc[4][3]
print(acc)