
all: hello-world 


hello-world: hello-world.o 
	gcc hello-world.o -o hello-world_created_with_make

hello-world.o: hello-world.c
	gcc -c hello-world.c -std=c18


clean: 
	rm *.o, del hello-world.o hello-world_created_with_make.exe



# IMPORTANT NOTE: NEVER LEAVE A SPACE AFTER THE * BECAUSE IT'LL DELETE ALL YOUR FILES