unit=int(input("unit:"))
threshold=input("threshold:")
category=input("category:")     #modulus operator
date=input("date:")
if unit<=100:
    if category=="commercial":
        if threshold=="yes":
            amount=(unit*10)+100
            print("the amount=",amount)
        else:
            amount=(unit*10)
            print("the amount=",amount)
    if category=="non commercial":
        if threshold=="yes":
            amount=(unit*5)+50
            print("the amount=",amount)
        else:
            amount=(unit*5)
            print("the amount=",amount)
elif unit<300:
    if category=="commercial":
        if threshold=="yes":
            amount=(100*10)+((unit-100)*12)+100
            print("the amount=",amount)
        else:
            amount=(100*10)+((unit-100)*12)
            print("the amount=",amount)
    if category=="non commercial":
        if threshold=="yes":
            amount=(100*10)+((unit-100)*6)+100
            print("the amount=",amount)
        else:
            amount=(100*10)((unit-100)*6)
            print("the amount=",amount)
else:
    if category=="commercial":
            if threshold=="yes":
                amount=(100*10)+((unit-400)*15)+100
                print("the amount=",amount)
            else:
                amount=(100*10)+((unit-400)*15)
                print("the amount=",amount)
    if category=="non commercial":
            if threshold=="yes":
                amount=(100*10)+((unit-400)*8)+100
                print("the amount=",amount)
            else:
                amount=(100*10)+((unit-400)*8)
                print("the amount=",amount)
