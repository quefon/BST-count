all: main.o insert.o inorder.o find.o delete.o count.o
	gcc main.o insert.o inorder.o find.o delete.o count.o
.PHONY:all;

main.o: main.c
	gcc -c main.c
insert.o: insert.c struct.h
	gcc -c insert.c
inorder.o: inorder.c struct.h
	gcc -c inorder.c
find.o: find.c struct.h
	gcc -c find.c
delete.o: delete.c struct.h
	gcc -c delete.c
count.o: count.c struct.h
	gcc -c count.c     
clean:  main.o insert.o inorder.o find.o delete.o count.o
