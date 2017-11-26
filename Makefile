all : draw.o gotoxy.o main.o printscore.o size.o
	$(CC) -o OSS17mjse $^ -lcurses

draw.o :
	cd draw && make

gotoxy.o : 
	cd gotoxy && make

main.o :
	cd main && make

printscore.o : 
	cd printscore && make

size.o : 
	cd size && make

clean : 
	cd draw && make clean
	cd gotoxy && make clean
	cd main && make clean
	cd printscore && make clean
	cd size && make clean 
	rm -rf *.o OSS17mjse


