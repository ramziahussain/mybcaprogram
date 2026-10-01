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
    return m1, m2, m3, name, rollno
def total():
    global tot
    tot=m1+m2+m3
    return tot 
def average():
    global avg
    avg=tot/300
    return avg
def percentage():
    global per
    per=avg*100
    return per
def grade():
    global gr
    if(per>85):
        gr="distinction"
    elif(per>60):
        gr="first class"
    else:
        pass
    return gr
def result():
    print("roll no is:",rollno)
    print("name is:",name)
    print("total is:",tot)
    print("average is:",avg)
    print("percentage is:",per)
    print("grade is:",gr)

for i in range(3):
    a, b, c, d, e = data()
    tot = total()  
    avg = average()
    per = percentage()
    gr = grade()
    result()