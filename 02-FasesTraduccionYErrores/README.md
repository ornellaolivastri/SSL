## Ornella Olivastri - Legajo 1674201 - Curso K2051 - Año 2022 

## Proceso de Compilación
![](proceso%20de%20compilacion.PNG)

## Credito extra: Bibliotecas

### - ¿Que son?
*Las **bibliotecas** son colecciones de archivos objeto (con extensión .o, archivos fuente compilado (particularmente ensamblado)) que tienen definiciones de tipos de dato, o, desarrollos de funciones (codificados ambos en un lenguaje de programación especifico). Para poder utilizar estas bibliotecas, se requiere conocer el contrato o interfaz que indica cómo utilizarlas (es decir, los arhivos **headers**).*

*Los **Headers** son archivos (con extension .h) que contienen declaraciones, firmas, prototipos de funciones; y  son la herramienta que permite la comunicacion entre un proveedor de código (quien desarrolló las funciones y los tipos) y un cliente (quien utiliza estas funciones a traves de su declaración). Por lo tanto, los headers son la interfaz entre un cliente y un proveedor.*

### - ¿Se pueden distribuir?
*Si, simplemente distribuyendo las bibliotecas con sus interfaces correspondientes.*

### - ¿Son portables?
*Esto dependerá de hacia dónde se quiera distribuir la biblioteca. Dentro de un mismo grupo de procesadores (con una version similar de asembler) sí se podría considerar portable, pero con versiones diferentes o incluso sistemas operativos diferentes, los archivos ensamblados de las bibliotecas ya no serán interpretados de la misma forma que al momento de su creación.*

*En general, diremos que las bibliotecas serán portables en la medida que se disponga de los archivos fuente usados para su compilación, para asi poderles hacer las modificaciones necesarias para imitar su funcionamiento base en el nuevo ambiente y recompilar los archivos para obtener finalmente la biblioteca adaptada.*

### - ¿Cuales son sus ventajas y desventajas?
*La ventaja del uso de bibliotecas es permite la reutilización de código (lo cual conlleva una mayor eficiencia en el uso del tiempo de desarrollo, acelerando la creación de nuevo código.), que facilita la exportacion de funciones y tipos desarrollados (presumiblemente testeados).*

*La desventaja es que al utilizar bibliotecas, se genera una dependencia hacia el soporte que ese código desarrollado recibe. Si ese soporte deja de existir por una eventual deprecación de esa biblioteca (parcial o completa) se requeriría una actualización del código, pudiendose ocacionar menores o mayores problemas a raíz de esto dependiendo del caso.*

### - Desarrollar la biblioteca **stdio**
***Desarrollar una biblioteca** significa crear un archivo objeto con codigo desarrollado y ensamblado, que sea accesible para todo el sistema (y no solo para un proyecto particular). Esto significa **instalar esa biblioteca en el directorio lib de nuestro sistema operativo**.* 
 
