CC := gcc
AIR = air
AIR_FILES = air.c

STAGING_DIR = 
AIRLIB = ./lib/libairkiss_log.a
TARGET = $(AIR)
AIR_OBJS = $(AIR_FILES:.c=.o)
CFLAGS += -I$(STAGING_DIR)/include
LDFLAGS += -L$(STAGING_DIR)/lib -lpcap -lpthread

all: $(TARGET)

$(AIR) : $(AIR_OBJS)
	$(CC) -o $@ $^ $(AIRLIB) $(LDFLAGS)

$(AIR_OBJS) : $(AIR_FILES)
	$(CC) $(CFLAGS) -c -o $@ $< 


.PHONY: clean install
clean:
	rm -f *.o $(TARGET)

install:
	
