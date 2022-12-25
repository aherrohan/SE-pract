import socket 
s=socket.socke(socket.AF_INET,socket.SOCK_STREAM)
s.bind(("localhost",4568))
s.listen(4)
print("waiting for a connection")
c,addr = s.accept()
a1=c.recv(1024)
b1=c.recv(1024)
d1=c.recv(1024)
a=int(a1)
b=int(b1)
print(a)
print(b)
d=int(d1)
print(d)
if d==1:
    r=a+b
    print(r)
    c.send((str(r).encode())
elif d==2:
    r=a-b
    c.send((str(r).encode())
elif d==3:
    r=a*b
    c.send((str(r).encode())
elif d==4:
    r=a/b
    r1=int(r)
    c.send((str(r1).encode())
c.close()
