OBJ = main.o plorg.o

plorg: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: plorg.h
plorg.o: plorg.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f plorg

cleanobj:
	-rm -f *.o