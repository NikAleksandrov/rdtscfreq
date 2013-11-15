
# simple Makefile for rdtscfreq.

all: rdtscfreq

PREFIX = /usr/bin
PACKAGE = rdtscfreq
CC = gcc
CFLAGS = 
SRC = rdtscfreq.c
EXEC = rdtscfreq

cpufreq: 
	$(CC)$(CFLAGS) $(SRC) -o $(EXEC)

install: 
	install $(EXEC) $(PREFIX)

clean:
	rm -f $(EXEC)



