all: a1 newtonRecursion newtonLoop

a1: main.c carbon.c ackermann.c newton.c
	gcc -Wall carbon.c ackermann.c newton.c main.c -o a1 

newtonRecursion: newtonRecursionTimed.c
	gcc -Wall -o recursion newtonRecursionTimed.c

newtonLoop: newtonLoopTimed.c
	gcc -Wall -o loop newtonLoopTimed.c

clean: 
	rm -rf *o a1 recursion loop
