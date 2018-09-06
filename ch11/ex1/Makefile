OBJ = main.o vect.o

vect: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: vect.h
vect.o: vect.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f vect

cleanobj:
	-rm -f *.o