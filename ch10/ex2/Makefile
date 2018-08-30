
OBJ = main.o person.o

person: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: person.h
person.o: person.h

.PHONY: clean cleanobj

clean: cleanobj
	@-rm person

cleanobj:
	@-rm -f *.o