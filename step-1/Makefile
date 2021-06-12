CC=gcc
CFLAGS=-I.
DEPS=colors.h game.h
OBJ=game.o main.o 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

game:  $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o