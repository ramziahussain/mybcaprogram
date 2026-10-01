a='ramzia hussain'
ab=a.split()
print(ab)


name='naveen kumar'
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
name=' '.join([first,last])
print(name)

b,c=a.split(',')[0],a.split(',')[1]
print(b)
print(c)