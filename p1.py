    
U=[]
A=[]
B=[]
C=[]
AB=[]
Aob=[]

Aeb=[]
Ncb=[]
Not=[]
AC=[]
Aoc=[]
u=int(input("enter the strength of class:"))
for i in range (u):
    U.append(i+1)
    
a = int(input("student who plays cricket:"))
for i in range (a):
    roll=int(input("enter the roll of students who plays cricket:"))
    A.append(roll)
b= int(input("student who plays badminton:"))
for i in range (b):
    roll=int(input("enter the roll of students who plays badminton:"))
    B.append(roll)    
c= int(input("student who plays football:"))
for i in range (c):
    roll=int(input("enter the roll of students who plays football:"))
    C.append(roll)   
    
    
def intersection():
    for i in range (a):
        for j in range (b):
            if A[i]==B[j]:
                AB.append(A[i])
                
                break                                                                                   
    print("student who plays both cricket and badminton:",AB) 
print("Strenght",U)
print("students who plays cricket",A)
print("student who play badminton",B)
print("student plays football",C)
intersection()
Aob=AB
print("new list",Aob)

"""
def union():

    for j in range (b):
        if (B[j] not in Aob):
            Aob.append(B[j])
    for i in range(a):
        if(A[i]) not in Aob:
            Aob.append(A[i])
        
union()            
print('student who plays both cricket and badminton',Aob)
flag=Aob
def cricobad():
    for i in range  (a):
        for j in range (b):
            if A[i]==B[j]:
                flag.remove(A[i])
            
        
cricobad()
print("student who plays either cricket or badminton but not both",flag)"""
# using coppy


for i in range (a):
    Aeb.append(A[i])
    
for i in range (b):
    merge=0
    
        
       
    
        
    for j in range(a):
        if B[i]==A[j]:
            merge=1
            break
    if merge==0:
        Aeb.append(B[i])
print("student who plays cricket and bad minton",Aeb) 
   
   
        

            
        

    
for i in range (len(Aeb)):
    
        
    merge=0 
        
    for j in range(len(AB)):
            if (Aeb[i]==AB[j]):
                 merge=1
                 break
    if (merge==0):
        Ncb.append(Aeb[i])
print("student who plays either cricket or badminton but not both",Ncb)  
 


for i in range (u):
    flag=0
    for j in range (len(Aeb)):
        if U[i]==Aeb[j]:
            flag=1
            break
    if flag==0:
        Not.append(U[i])
    
print ("student who doesnt play cricket and badminton",Not)    


for i in range (a):
    AC.append(A[i])
for i in range(c):
    temp=0
    for j in range (a):
        if(C[i]==A[j]):
            temp=1
            
    if temp==0:
       AC.append(C[i])
    
print("student who plays cricket and football",AC)
      
for i in range (len(AC)):
    flag=0
    for j in range (len(B)):
        if AC[i]==B[j]:
            flag=1
            break
    if (flag==0):
        Aoc.append(AC[i])
    
               
print("student who plays cricket and football but not badminton",Aoc)              
                
                    
                
            
                
            
            
            
        
            
            
        
        
            

        
        