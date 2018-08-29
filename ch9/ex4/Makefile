OBJ = main.o sales.o

sales: $(OBJ)
	g++ -o $@ $(OBJ)
	@rm *.o
main.o: sales.h
sales.o: sales.h

.PHONY: clean cleanobj

clean: cleanobj
	rm sales

cleanobj:
	rm *.o