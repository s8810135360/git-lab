all: clean
	@gcc -o main main.c

test: all
	@./check.sh

clean:
	@rm -f *.o
	@rm -f main
