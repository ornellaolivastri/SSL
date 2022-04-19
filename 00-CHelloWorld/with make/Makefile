RM = del

run: hello-world
	./hello-world.exe

hello-world: hello-world.o 
	gcc hello-world.o -o hello-world.exe
	$(RM) hello-world.o

hello-world.o: hello-world.c 
	gcc -c hello-world.c -o hello-world.o -std=c18 

clean: 
	$(RM) hello-world.o
	$(RM) hello-world.exe      

# -f fuerza a que el programa ignore los errores


# IMPORTANT NOTE: NEVER LEAVE A SPACE AFTER THE * BECAUSE IT'LL DELETE ALL YOUR FILES