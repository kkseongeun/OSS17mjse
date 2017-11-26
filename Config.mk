CC              := gcc
LD              := ld
INCLUDES        := -I. -I$(TOPDIR)/include
DEFINES         := -DDEBUG
CFLAGS          := -O2 -W -Wall $(INCLUDES) $(DEFINES)

.SUFFIXES: .o .c

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
