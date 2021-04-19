# Ornella Olivastri - Legajo 1674201 - Curso K2051 

# "Hello, World!" en C

## Objetivos

- Demostrar con un programa simple que se esta en capacidad de editar, compilar y ejecutar un programa C.
- Contar con las herramientas necesarias para abordar la resolución de los trabajos posteriores.

## Problema
Adquirir y preparar los recursos necesarios para resolver los trabajos del curso.

## Tareas
- Indicar en el README.md el compilador seleccionado.
- Probar el compilador con un programa hello.c que envie a stdout la linea Hello, World!
- Ejecutar el programa y capturar su salida en un archivo output.txt

## Resolución
Para este trabajo utilicé
- el editor de texto Visual Studio Code
- el programa cygwin, que me permitió instalar y utilizar el compilador gcc
- el estándar de compilación fue indicado por una instrucción en la CLI

## Instrucciones destacadas
gcc --version -> gcc (GCC) 10.2.0

gcc hello-world.c -o hello -std=c18

./hello -> Hello, World!

./hello > output.txt
