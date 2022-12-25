A=[]
U=[]
u= int(input("strenght of class"))
Aob=[]
Aeb=[]
F=[]
for i in range (u):
    U.append(i+1)
print(U)    
a=int(input("enter the number of students who appear for test"))
for i in range (a):
    roll=int(input("roll no of students:"))
    A.append(roll)
print(A)   
for i in range(a):
    print("roll no of student=",A[i],"marks=")
    marks=(int(input("marks=")))
    Aob.append(marks)
print("students with there marks",Aob)
def avg():
    sum=0 
    for i in range (a):
        sum=sum+A[i]
    print(sum)
    average=sum/a
    print("average score=",average)
avg()    
def top():    
    high=Aob[0]
    for i in range (1,a):
        if(Aob[i]>high):
            high=Aob[i]
            
    print("high score of class",high)
top()   
def lowest(): 
    low=Aob[0]
    for i in range(1,a):
        if(Aob[i]<low):
            low=A[i]

    print("lowest score of class",low)        
lowest()   
def absent(): 
    for i in range (len(U)):
        flag=0
        for j in range(len(A)):
            if U[i]==A[j]:
                flag=1
                break
        if flag==0:
            Aeb.append(U[i])
            
    print("roll no of students who were absent for test",Aeb)
absent()
def frequency():
    for i in range (a):
        count=1
        for j in range(a):
            if Aob[i]==Aob[j] and i!=j:
                count+=1
        print(Aob[i],"have frquency",count)
        F.append(count)
        
    high=-1
    for i in range (a):
        if high<F[i]:
            high=F[i]
            mks=Aob[i]
            
    print("have high frewuency",mks) 
frequency()      

