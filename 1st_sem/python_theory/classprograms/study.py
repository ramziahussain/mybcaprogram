#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

data="""
naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""
name=data.split('\n')[1]
email=data.split('\n')[2].lower()
phone=data.split('\n')[3]

name=' '.join(name.split()).title()
initial1,initial2=name.split()[0],name.split()[1]
initials=initial1[0]+initial2[0]
initials=initials.upper()


domain=email.split('@')[1]
phone=phone.replace('-','')
phone=phone[-10:]
if len(phone)==10:
    valid='true'
else:
    valid='false'
phone='*'*6+phone[6:]
print('=================================\n')
print('PROFILE CARD\n')
print('==================================\n')
print('name\t:',name)
print('initial\t:',initials)
print('email\t:',email)
print('domain\t:',domain)
print('phone\t:',phone)
print('valid\t:',valid)  