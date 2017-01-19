CC = gcc
CFLAGS = -Wall
OBJS = main.o
HDRS = 
EXEC = myshell

.SUFFIXES: .c
.c.o:
	$(CC) -c $(CFLAGS) $*.c

default: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

$(OBJS): $(HDRS)

clean:
	rm -rf $(EXEC) $(OBJS)
