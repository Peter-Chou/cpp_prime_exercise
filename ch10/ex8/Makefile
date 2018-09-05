OBJ = main.o

list: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: list.h
# list.o: list.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f list

cleanobj:
	-rm -f *.o