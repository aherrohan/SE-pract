l=int(input("no of students present for traning session;"))
l1=[]
for i in range (l):
    roll=int(input("roll no of students:"))
    l1.append(roll)
print("students who attended training session:",l1)
a=int(input("roll no to be search:") )
def linear_search():
    for i in range(l):
        flag=0
        if (a==l1[i]):
            flag=1
            break
    if(flag==1):
        print("student was pesent")
    else:
        print("student was absent") 
def sentinel_search():        
    l2=[]    
    for i in range(l):
        l2.append(l1[i])


    l2.append(a)
    j=0

    while(j<l):
        
        if(a==l2[j]):
            
            
            
            break
        else:   
            j=j+1 
       
    if(j<l):
        print("location of roll no",j) 
        print("student was present")
    else:
        print("student was absent")  
sentinel_search()        
   
'''for i in range (len(l1)):
  for j in range (i+1,len(l1)):
   
    if(l1[i]>l1[j]):
      temp=l1[j]
      l1[i]=l1[j]
      l1[j]=temp'''
             
l1.sort() 
low=0
high=l-1 

"""flag=0
while(low<=high):
    
    mid=(low+high)//2    
    if l1[mid]==a:
        flag=1
        break
    elif(a<l1[mid]):
        high=mid-1
    else:
        low=mid+1
        
if flag==1:
    print("student was present")
else:
    print("student was absent") """   
      
def binary(l1,low,high):
    if(low<=high):
        
        mid=(low+high)//2
        if l1[mid]==a:
            return("present")
        elif(l1[mid]>a):
            return(binary(l1,low,mid-1))
            
        else:
            return(binary(l1,mid+1,high))
            
    else:
        return("absent")
f=binary(l1,0,l-1)

print(f)   
def fibonacci(): 
    fib1=1
    fib2=0         
    fib=fib1+fib2    
    while(fib<l):
        fib2=fib1
        fib1=fib
        fib=fib1+fib2
    print("fibonacchi search:")    
    flag=0
    i=0
    offset=-1
    while(fib>1):
        i=min(fib2+offset,l-1)
        if l1[i]==a:
            flag=1
            break
        elif(l1[i]<a):
            fib=fib1 
            fib1=fib2
            fib2=fib-fib1
            offset=i
        elif(l1[i]>a):
            fib=fib2 
            fib1=fib1-fib2
            fib2=fib-fib1
            
    if flag==0:
        print("absent")
    else:
        print("student was present")    
fibonacci()        
            
        
        
        
    
    

        
   
        
        
        
        
    
        
        
    


