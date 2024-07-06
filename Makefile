objects = obj/main.o obj/header.o

build/program.bin: $(objects)
	cc $(objects) -lraylib -o build/program.bin

obj/main.o: src/main.c include/header.h
	cc src/main.c -c -o obj/main.o

obj/header.o: src/header.c include/header.h
	cc src/header.c -c -o obj/header.o

run:
	./build/program.bin

cleanobj:
	rm obj/*

cleanbuild:
	rm build/*

cleanall:
	rm obj/* build/*

.PHONY: cleanobj cleanbuild cleanall run
