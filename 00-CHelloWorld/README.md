# Ornella Olivastri - Legajo 1674201 - Curso K2051 

# "Hello, World!" en C

## Objetivos
- Demostrar con un programa simple que se esta en capacidad de editar, compilar y ejecutar un programa C.
- Contar con las herramientas necesarias para abordar la resolución de los trabajos posteriores.

## Tareas
- Indicar en el README.md el compilador seleccionado.
- Probar el compilador con un programa hello.c que envie a stdout la linea Hello, World!
- Ejecutar el programa y capturar su salida en un archivo output.txt

## Resolución
Para este trabajo utilicé:
- el editor de texto Visual Studio Code
- el programa cygwin, que me permitió instalar el compilador y el debugger gcc, siguiendo las instrucciones del siguiente video https://www.youtube.com/watch?v=7QvNY9245hY&t=778s
- el estándar de compilación fue indicado por una instrucción en la CLI ( -std=18 )


## Instrucciones destacadas

para conocer la version del compilador -> *gcc --version* (respuesta de la terminal: gcc (GCC) 10.2.0)

para generar el archivo ejecutable a partir de un fuente, en la version 18 del lenguaje c -> *gcc hello-world.c -o hello -std=c18*

para ejecutar el archivo ejecutable -> *./hello* (respuesta de la terminal: Hello, World!)

para guardar la ejecucion del archivo ejecutable en un archivo de texto -> *./hello > output.txt*
