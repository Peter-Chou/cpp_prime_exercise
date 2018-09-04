OBJ = main.o stack.o

stack: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: stack.h
stack.o: stack.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f stack

cleanobj:
	-rm -f *.o