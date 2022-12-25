A=[]
a=int(input("total number of students:"))
for i in range (a):
    perctg=int(input("percentage of students:"))
    A.append(perctg)
    



def partition(A,start, end):
    pivot=A[end]
    pindex=start
    
    
        
    for i in range(start,end):
        if A[i]<=pivot:
        
            A[i],A[pindex]=A[pindex],A[i]
            pindex+=1 
        
    A[pindex],A[end]=A[end],A[pindex]
            
    return(pindex)             
              
         
                
def QS(A,start,end):
    if start<end:
        pindex=partition(A,start,end)
        QS(A,start,pindex-1)
        QS(A,pindex+1,end)
                
start=0
end=a-1            
QS(A,start,end)           
print(A)        
