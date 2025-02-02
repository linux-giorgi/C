
main : main.o 
	gcc main.o -o  main -lncurses

main.o : main.c
	gcc -c main.c -o main.o

clean:
	rm -rf main main.o 

install:
	sudo apt install sox -y 	
