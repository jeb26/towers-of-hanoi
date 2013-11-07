OBJS = hanoi
CC = gcc

all: hanoi

hanoi:
	$(CC) hanoi.c -o hanoi

clean:
	rm -rf $(OBJS)
