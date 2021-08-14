CC = g++
CFLAGS = -Wall -g
OBJ = helloWorld.o


%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)


helloWorld: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


.PHONY: clean

clean:
	rm -f *.o *~ core
