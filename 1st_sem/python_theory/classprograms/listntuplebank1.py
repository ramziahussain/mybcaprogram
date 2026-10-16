n=int(input("enter the number of accounts:"))
accounts=[]
for i in range(n):
    accname=input("enter account name:")
    accno=int(input("enter account number"))
    dob=input("enter date of birth:")
    pan=int(input("enter pan card number:"))
    email=input("enter your email id:")
    phone=int(input("enter ur phone number:"))
    add=input("enter your address:")
    curbal=0
    accdetails=[email,phone,add,curbal]
    acc=(accno,accname,dob,pan,accdetails)
    print(acc)
    deposit=int(input("enter deposit:"))
    curbal=curbal+deposit
    acc[4][3]=curbal
    print(acc)  
    accounts.append(acc)
print(accounts)
    
# enter choice 1 ,enter accno ,acc found, enter deposit amt,update,show  current balance, ptint ----------------
#enter choice 2, enter accno , acc found n, enter withdraw amt, update, show current balance
#show every acc, print(accounts)
while True:
    print("1. deposit")
    print("2. withdraw")
    print("3. show accounts")
    print("4. exit")

    choice = int(input("enter your choice: "))

    if choice == 1:
        accno = int(input("enter account number: "))
        found = False

        for acc in accounts:
            if acc[0] == accno:
                deposit = int(input("enter deposit amount: "))
                acc[4][3] = acc[4][3] + deposit
                print("current balance:", acc[4][3])
                found = True
                break

        if found == False:
            print("account not found")

    elif choice == 2:
        accno = int(input("enter account number: "))
        found = False

        for acc in accounts:
            if acc[0] == accno:
                withdraw = int(input("enter withdrawal amount: "))

                if withdraw <= acc[4][3]:
                    acc[4][3] = acc[4][3] - withdraw
                    print("current balance:", acc[4][3])
                else:
                    print("insufficient balance")

                found = True
                break

        if found == False:
            print("account not found")

    elif choice == 3:
        print(accounts)

    elif choice == 4:
        break

    else:
        print("invalid choice")
           






