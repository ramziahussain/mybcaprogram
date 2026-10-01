name=""
rollno=0
m1,m2,m3=0,0,0
tot=0.00
avg,per=0.00,0.00
gr=""
def data():
    global name,rollno,m1,m2,m3         #global variable
    name=input("enter name:")
    rollno=int(input("enter rollno:"))
    m1=int(input("enter marks 1:"))
    m2=int(input("enter marks 2:"))
    m3=int(input("enter marks 3:"))
  # return m1, m2, m3, name, rollno
def total():
    global tot
    tot=m1+m2+m3
  # return tot 
def average():
    global avg
    avg=tot/300
def percentage():
    global per
    per=avg*100
def grade():
    global gr
    if(per>85):
        grade='distinction'
    elif(per>60):
        grade='first class'
    else:
        pass
def result():
    print("roll no is:",rollno)
    print("name is:",name)
    print("total is:",tot)
    print("average is:",avg)
    print("percentage is:",per)
    print("grade is:",gr)

for i in range(3):
    data()  #a, b, c, d, e = data()
    total()  #tot = total() --- stores returned value in 'tot'
    average()
    percentage()
    grade()
    result()