todo : *.c *.h
	cc *.c -o todo

.PHONY : test clean
test : todo
	./todo -c 'Lorem Ipsum'
	./todo

clean :
	-rm todo
