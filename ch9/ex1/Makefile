OBJ = main.o golf.o

usegolf: $(OBJ)
	g++ -o golf $(OBJ)
main.o: golf.h
golf.o: golf.h

.PHONY: clean cleanobj

clean: cleanobj
	rm golf

cleanobj:
	rm *.o