U=[]
u=int(input("no of students:")) 
for i in range(u):
    mks=int(input("percentage of students:"))
    U.append(mks)
print(U)   
def bubble_sort():
    a=0 
    for i in range (u-1):
        flag=0
        for j in range(u-1):
            if (U[j])>U[j+1])
                U[j],U[j+1]=U[j+1],U[j]
                flag=1
               
        if flag==0:
            break
         
         
    print("sorted list",U)   
    print("no of passes",a)  
bubble_sort()   
def selection_sort():    
    A=[]
    a=int(input("no of students"))


    for i in range(a):
        mks=int(input("percentage of students:"))
        A.append(mks)
    print(A)


    for i in range(a):
        
        small=i
        for j in range(i+1,a):
            if A[j]<A[small]:
                small=j
                
       
        A[i],A[small]=A[small],A[i]
    print("sorted list",A)  
selection_sort()    
