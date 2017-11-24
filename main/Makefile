OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
CFLAGS = -I../include

all : $(OBJECTS)
	cp -f $^ ../
clean :
	rm -rf *.o

