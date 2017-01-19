CC = gcc
CFLAGS = -Wall
OBJS = main.o commands.o
HDRS = commands.h
EXEC = myshell
DOCS = html/ latex/

.SUFFIXES: .c
.c.o:
	$(CC) -c $(CFLAGS) $*.c

default: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

$(OBJS): $(HDRS)

docs:
	doxygen

clean:
	rm -rf $(EXEC) $(OBJS) $(DOCS)
