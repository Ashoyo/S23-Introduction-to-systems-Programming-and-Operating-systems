MYps: s1.o u.o  Stime.o v.o c.o 
	gcc s1.o u.o  Stime.o v.o c.o  -o MYps  MYps.c  
s1: s1.c
	gcc -c s1.c
u: u.c
	gcc -c u.c
Stime: Stime.c
	gcc -c Stime.c
v: v.c
	gcc -c v.c
c: c.c
	gcc -c c.c	

clean: 
	rm  *.o MYps	
