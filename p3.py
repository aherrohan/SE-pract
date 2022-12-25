matrix1=[]


r=int(input("number of rows"))
c=int(input("number of colums"))
for i in range (r):
    s=[]
    for j in range (c):
       u=(int(input("enter the data for matrix1:")))
       s.append(u)
       
    matrix1.append(s)
      
print(matrix1)
print("first matrix:")   
for i in range (r):
    for j in range(c):
        print(matrix1[i][j],end=" ")
    print()    
matrix2=[]
for i in range(r):
    b=[]
    for j in range(c):
        t=(int(input("enter the data for matrix 2:")))
        b.append(t)
    matrix2.append(b)
print("second matrix:")    
for i in range (r):
    for j in range(c):
        print(matrix2[i][j],end=" ")
    print()    
    
print(matrix2)

def addition():
    add=[]
    for i in range(r):
        p=[]
        for j in range(c):
           m=(matrix1[i][j]+matrix2[i][j])
           p.append(m)
        add.append(p)
    for i in range (r):
        for j in range(c):
            print(add[i][j],end=" ")
        print()    
    return(add)
print("addition:")
print(addition())
def subraction():
    sub=[]
    for i in range(r):
        p=[]
        for j in range(c):
           m=(matrix1[i][j]-matrix2[i][j])
           p.append(m)
        sub.append(p)
    for i in range (r):
        for j in range(c):
            print(sub[i][j],end=" ")
        print()    
    return(sub)
print("subraction:")
print(subraction())

       
def transpose(): 

    trans=[]
    for i in range (r):
        n=[]
        for j in range(c):  
                n.append(matrix1[j][i])
          
        trans.append(n)
    print("transpose:")    
    for i in range (r):
        for j in range(c):
            
            print(trans[i][j],end=" ")
        print()              
    print(trans)  
transpose()    
 
def multiplication():
    m3=[]
    for i in range(r):
        m5=[]
        for j in range(c):
            o=0
            m5.append(o)
        m3.append(m5) 
    for i in range (r):
        for j in range(c):
            print(m3[i][j],end=" ")
        print()       

    for i in range (r):
       
       
        for j in range(c):
            for k in range (c):
            
                m3[i][j]+=(matrix1[i][k]*matrix2[k][j])
                   
     
        
    print("multiplication",m3)
    for i in range (r):
        for j in range(c):
            print(m3[i][j],end=" ")
        print()  
multiplication()
 