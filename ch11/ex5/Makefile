OBJ = main.o stonewt.o

stonewt: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: stonewt.h
stonewt.o: stonewt.h

.PHONY: clean cleanobj

clean: cleanobj
	-rm -f stonewt

cleanobj:
	-rm -f *.o