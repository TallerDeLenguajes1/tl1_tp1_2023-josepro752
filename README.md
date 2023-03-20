# TP1

##  Investigar el archivo .gitignore

### ¿Por qué es conveniente incluirlo?
	Es importante incluir el archivo, pues de esta manera Git ignora archivos o carpetas en un proyecto, y hace el mismo mas liviano

### ¿Cuándo se debe hacer?
	Se debe hacer cuando tenemos en un repositorio archivos pesados y que no necesitamos subir a GitHub

### ¿Cómo configuraría el archivo .gitignore?
	
Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre " gitignore" (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

Las entradas de este archivo también pueden seguir un patrón coincidente:
	- * se utiliza como una coincidencia comodín.
	- / se usa para ignorar las rutas relativas al archivo .gitignore.
	- # es usado para agregar comentarios

Ejemplos

### Ignora todos los archivos de texto

*.txt

La pagina para crear .gitignore es: https://www.toptal.com/developers/gitignore

### Respuestas a las preguntas ¿A qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

El resultado del punto 2 y 3 es igual, pues la direccion almacenada por el punto es la direccion de memoria de la variable.
En el punto 4 obtengo la direccion de memoria del puntero, esta no es igual que a la anterior ya que el puntero a su vez es otra variable que necesita almacenarse en algun lado al igual que la variable anterior.