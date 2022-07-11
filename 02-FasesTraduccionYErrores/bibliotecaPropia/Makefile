MAKEFILE_PATH := $(subst /,\,$(abspath $(lastword $(MAKEFILE_LIST))))
DIR := $(dir $(MAKEFILE_PATH))
LIB_FOLDER_PATH := C:\mingw64\lib


intallLibrary:
# primero se ensambla el archivo fuente de la biblioteca a un archivo objeto
	gcc -c studioBiblioteca.c -o studioBiblioteca.o
# luego se crea la biblioteca en el directorio deseado con el archivo ensamblado
	ar rcs C:\mingw64\lib\studioBiblioteca.a studioBiblioteca.o


uninstallLibrary:
	rm $(LIB_FOLDER_PATH)\studioBiblioteca.a

