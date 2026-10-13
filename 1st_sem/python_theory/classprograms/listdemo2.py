# process a single string student data of only 1 student roll no, name , mobile no, email id , 5 subject marks n get the sub total
# implemented using nested list, use functions and methods n u have to identify the sub tassk
list1 = ["rahul",22,2584639710,[23,22,11,88,55],"rahul23@email.com"]
name=list1[0]
rollno=list1[1]
marks=list1[3]
m1=list1[3][0]
m2=list1[3][1]
m3=list1[3][2]
m4=list1[3][3]
m5=list1[3][4]
phone=list1[2]
email=list1[4]
def total(mark1,mark2,mark3,mark4,mark5):
    total=mark1+mark2+mark3+mark4+mark5
    return total

tot=total(m1,m2,m3,m4,m5)
print("name is ",name)
print("roll no is ",rollno)
print("phone no is ",phone)
print("email is ",email)
print("marks are ",marks)
print("total is ",tot)    






