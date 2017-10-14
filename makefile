linked_list: main.o list.o
	gcc -o linked_list main.o list.o
	make clean

main.o: main.c include/list.h
	gcc -c main.c include/list.h

list.o: list.c include/list.h
	gcc -c list.c include/list.h

run:
	./linked_list

clean:
	rm *.o
