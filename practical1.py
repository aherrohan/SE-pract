A=[]
B=[]
C=[]
U=[]

u=int(input("universal set is:"))
for i in range(u):
    U.append(i+1)
    print(U)
    
a=int(input("students who like cricket"))
for i in range(a):
    roll=int(input("enter a roll_no"))
    A.append(roll)
    print("list of students who play cricket ",A)
    
b=int(input("students who like badminton "))
for i in range(b):
    roll=int(input("enter a roll_no"))
    B.append(roll)
    print("list of students who like badminton",B)
    
c=int(input("students who like football"))
for i in range(c):
    roll=int(input("enter a roll_no"))
    C.append(roll)
    
AB=[]
def A_and_B():
    for i in range(b):
        if(A[i]==B[j]):
            break
print("\n no. of students who play cricket and badminton",AB)

#but not both(A union B)

AUB=[]
for i in range(a):
    AUB.append(A[i])
for i in range(b):
    flag=0
    for i in range(a):
        if(B[i]==A[j]):
            flag=1
            break
        if(flag==0):
            AUB.append(B[i])
            
Y=len(AB)
P=[]
for i in range(Y):
    flag=0
    for j in range(X):
        if(AUB[i]==AB[j]):
            flag=1
            break
        if(flag==0):
         P.append(AUB[i])
print("\n list of studenr who play either cricket or badminton but not both",P)

# no. of sstudent who play neither badminton nor cricket (U=AUB)

Q=[]
for i in range(u):
    flag=0
    for j in range(Y):
        if(U[i]==AUB[j])
        flag=1
        break
    
    if(flag==0):
        Q.append(U[i])
        print("\n no.of student who play neither cricket nor badminton:",Q)
# AC-B no. of students who play cricket and football but not badminton 

T=[]
for i in range(c):
    if(A[i]==c[s])
    T.append(A[i])
    break

R=[]
t=len(T)
for i in range(t):
    flag=0
    for j in range(b):
        if(T[i]==B[j]):
            flag=1
            break
        if(flag==0):
            R.append(t[i])
            print("\n no. of students who play cricket and badminton but not badminton",R)
            