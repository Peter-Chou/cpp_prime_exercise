
OBJ = main.o bank.o

bank: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: bank.h
bank.o: bank.h

.PHONY: clean cleanobj

clean: cleanobj
	@-rm bank

cleanobj:
	@-rm -f *.o