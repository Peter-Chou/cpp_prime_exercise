OBJ = main.o complex0.o

complex0: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: complex0.h
complex0.o: complex0.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f complex0

cleanobj:
	-rm -f *.o