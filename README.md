# TP1

##  Investigar el archivo .gitignore

### ¿Por qué es conveniente incluirlo?
	Es importante incluir el archivo, pues de esta manera Git ignora archivos o carpetas en un proyecto, y hace el mismo mas liviano

### ¿Cuándo se debe hacer?
	Se debe hacer cuando tenemos en un repositorio archivos pesados y que no necesitamos subir a GitHub

###¿Cómo configuraría el archivo .gitignore?
	
Para crear un archivo .gitignore local, crea un archivo de texto
y asígnale el nombre ".gitignore" (recuerda incluir el . al principio).
Luego, edita este archivo según sea necesario. Cada nueva línea debe 
incluir un archivo o carpeta adicional que quieras que Git lo ignore.

Las entradas de este archivo también pueden seguir un patrón coincidente:
	- * se utiliza como una coincidencia comodín.
	- / se usa para ignorar las rutas relativas al archivo .gitignore.
	- # es usado para agregar comentarios

Ejemplos

###Ignora todos los archivos de texto

*.txt
