
OBJ = main.o mytime.o

mytime: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: mytime.h
mytime.o: mytime.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f mytime

cleanobj:
	-rm -f *.o