#!smake

CPUBOARD=IP32

include /var/sysgen/Makefile.kernloadio

all: compile

compile:
	$(CC) $(CFLAGS) $(LDFLAGS) -c simple.c

load:
	$(ML) ld -v -c simple.o -p sim -s 13

clean:
	$(RM) -f simple.o
