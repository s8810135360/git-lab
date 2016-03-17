all: clean
	@gcc -std=c11 -o lab2 main.c func.c

test: all
	@gcc -std=c11 -o test-lab2 test.c func.c
	@./test-lab2

clean:
	@rm -f *.o
	@rm -f lab2 test-lab2
