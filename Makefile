.EXPORT_ALL_VARIABLES:

TARGET          := OSS17mjse
TOPDIR          := $(shell /bin/pwd)
SUBDIRS         := draw gotoxy main printscore

include $(TOPDIR)/Config.mk

all : compile $(OBJS)
	$(CC) $(OBJS) $(addsuffix /built-in.o,$(SUBDIRS)) -o $(TARGET) -lcurses

include $(TOPDIR)/Rules.mk
