CC = gcc
CFLAGS = -Wall -std=c11

all: simplifymain.elf

simplifymain.elf: simplifymain.c
	$(CC) $(CFLAGS) simplifymain.c -o simplifymain.elf

clean:
	rm -f *.o *.elf
