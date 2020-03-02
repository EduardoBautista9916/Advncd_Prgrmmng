<!-- badges -->
[license-badge]: https://img.shields.io/badge/Licencia-CC-orange
[license]: https://creativecommons.org/licenses/by-nc-sa/3.0/deed.es
[![CC License][license-badge]][license]

# Laboratorio: Manejo de Archivos y funciones asociadas<a name="LabManeFunc"></a>
*by: Javier A. Orduz-Ducuara*
![width='80%'](../figs/Header.jpg)


## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejericicios](#ejercicios)
3. [Ejercicios Especiales](#ejerciciosespeciales)
<!---4. [Referencias](#referencias)--->

### Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de [ejercicios especiales](#ejerciciosespeciales) que aparecen en 
esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/9taj0tx5p8s81da/gral-templete.pdf?dl=0). 
Este formato puede usarse para la entrega de diferentes reportes, incluso 
tu proyecto final. Coloca tu documento (PDF) en tu dropbox.


# Ejercicios<a name="ejercicios"></a>

1. *00-files.c*--*03-files.c* 
	- Realice un programa en C que imprima en 
	pantalla __hola mundo__ en un archivo externo
	con extensión .txt. 
	- Investiga y modifica el segundo parámetro de la función _fopen_. 
	Crea un archivo externo con tus conclusiones.
2. *04-files.c*
	- Crea dos archivo externos con información diferente. Cambia los parámetros.
	- Envía información a ambos archivos.
3. *05-files.c* 
	- Encuentra las diferencias entre las funciones _printf_ y _fprintf_.

	- Realice un programa que muestre las tablas de multiplicar del 1 al 10. 
	Usa las funciones malloc, calloc, etc. La información debe enviarse a un 
	archivo externo.

2. *06-files.c*
	- Cree un tercer archivo que contenga contenga: --x	f(x)	f'(x)	f''(x)--.
	- Implemente las funciones dentro de la función principal (--main--) o 
	en funciones creadas por el usuario. La información debe enviarse a un 
	archivo externo.


3. *07-files.c*--*08-files.c* 
	- Investigue sobre otras funciones para leer información de archivos externos; 
	por ejemplo: --rename()--  y --remove()--
	- Realice un programa, que use arreglos, que te pregunte tu 
	nombre y otro dato personal, guarde esta información y muestre 
	(en un archivo externo) un mensaje de bienvenida con los datos ingresados.

4. *09-files.c*
	- Documenta el archivo.
	- Modifica el programa para que capture una cadena de 
	caracteres usando la funcion __fprintf()__.

5. *10-files00.c*--*10-files00.c*
	- Implementa un párrafo en un documento externo.

6. *11-files00.c*
	- Modifica el código para que almacene un nombre completo (dos nombres y dos apellidos).
	- Invetiga sobre las funciones __fseek()__ y __rewind()__.

7. *12-files.c*
	- El estudiante debe modificar el programa para que solicite el 
	número del grupo por terminal y lo imprima en pantall y en el archivo.

8. *13-files.c*
	- Implementa documentacion interna de este codigo.
	- Implementa structuras para que se obtenga el mismo resultado. 
	Agrega otros miembros, por ejemplo, apellido.
	- Implementa funciones para la gestión dinámica de la memoria.
9. *14-files00.c*
	- Implementación de la función __fseek()__. 
	- Investiga sobre los otros parámetros de la función __fseek()__.
	- Responde: qué es y para qué sirve __EOF__ y __feof__.
10. *15-files.c*
	- Implementa más líneas de código para que:
		- Capture información desde la terminal y la envíe a un archivo.
		- Copie una parte de la información en otro archivo.
11. *16-files00.c*--*17-files00*

	- Implemente documentación interna.
	- Modifique los parámetros del "Modo de archivo"

## Ejercicios especiales<a name="ejerciciosespeciales"></a> 

- Implementa una las funciones __m(c)alloc()__, __realloc()__ y __free()__. 
	Permita la manipulación de archivos externos e implemente __struct__, 
	__typedef__ y apuntadores, además de otros conceptos discutidos en clase 
	y diseñe un código para:

	- la administración de una tienda de abarrotes.

	- Realice un código que realice operaciones: 
	derivadas, integrales u operaciones aritméticas básicas y que imprima los 
	resultados en archivos externos.

	- Crea tres archivos:
		- Un CV que contenga tu domicilio.
		- Un CV que no contenga tu domicilio.
		- Una carta de presentación dirigida un posible jefe.

	- Toma un documento de texto de al menos 100 palabras y 
	crea un código en c que explore dicho documento y arme frases que 
	contengan oraciones de la forma: SUJETO+VERBO+COMPLEMENTO. Envía 
	la información a un archivo externo.

	- Toma una lista de datos (columnas) de la forma SUJETO VERBO COMPLEMENTO
	y responda a las preguntas: ¿cómo te llamas?, ¿qué te gusta?, ¿en qué año estamos?
	¿quién es el presidente de algún país?, etc.



<!---
## Referencias <a name="referencias"></a>

--->
