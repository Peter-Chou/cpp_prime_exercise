OBJ = main.o move.o

move: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: move.h
move.o: move.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f move

cleanobj:
	-rm -f *.o