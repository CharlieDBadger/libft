<p align="center">
   <img width="100%" src="https://capsule-render.vercel.app/api?type=venom&height=250&color=gradient&text=LIBFT&desc=Cybersecurity%20and%20Developement&descSize=13&descAlign=59&descAlignY=53&textBg=false&fontAlign=50&fontAlignY=41&reversal=false" alt="CharlieDevBadger Banner"/>
</p>

# Libft

**Libft** es una librería personalizada de funciones en C que implementa herramientas útiles para manejar cadenas, memoria, listas enlazadas, y otras utilidades básicas. Esta librería está diseñada para proporcionar una base sólida al trabajar en proyectos más grandes.

## Descripción de funciones

### Manipulación de cadenas
- **ft_atoi**: Convierte una cadena en un número entero.
- **ft_isalnum**: Verifica si un carácter es alfanumérico.
- **ft_isalpha**: Verifica si un carácter es una letra.
- **ft_isascii**: Comprueba si un carácter pertenece a la tabla ASCII.
- **ft_isdigit**: Verifica si un carácter es un dígito.
- **ft_isprint**: Verifica si un carácter es imprimible.
- **ft_itoa**: Convierte un número entero en una cadena.
- **ft_split**: Divide una cadena en un array de cadenas según un delimitador.
- **ft_strchr**: Busca la primera aparición de un carácter en una cadena.
- **ft_strdup**: Duplica una cadena.
- **ft_striteri**: Aplica una función a cada carácter de una cadena con su índice.
- **ft_strjoin**: Une dos cadenas en una nueva.
- **ft_strlcat**: Concatena cadenas con un tamaño limitado.
- **ft_strlcpy**: Copia una cadena con un tamaño limitado.
- **ft_strlen**: Calcula la longitud de una cadena.
- **ft_strmapi**: Crea una nueva cadena aplicando una función a cada carácter.
- **ft_strncmp**: Compara dos cadenas hasta un número específico de caracteres.
- **ft_strnstr**: Localiza una subcadena dentro de otra, hasta un límite dado.
- **ft_strrchr**: Busca la última aparición de un carácter en una cadena.
- **ft_strtrim**: Elimina caracteres específicos del inicio y fin de una cadena.
- **ft_substr**: Extrae una subcadena de una cadena.
- **ft_tolower**: Convierte un carácter en minúscula.
- **ft_toupper**: Convierte un carácter en mayúscula.

### Gestión de memoria
- **ft_bzero**: Llena un bloque de memoria con ceros.
- **ft_calloc**: Reserva memoria inicializada a cero.
- **ft_memchr**: Busca un carácter en un bloque de memoria.
- **ft_memcmp**: Compara dos bloques de memoria.
- **ft_memcpy**: Copia un bloque de memoria a otro.
- **ft_memmove**: Copia un bloque de memoria a otro, gestionando solapamientos.
- **ft_memset**: Llena un bloque de memoria con un valor específico.

### Salida
- **ft_putchar_fd**: Escribe un carácter en un archivo.
- **ft_putendl_fd**: Escribe una cadena seguida de un salto de línea en un archivo.
- **ft_putnbr_fd**: Escribe un número entero en un archivo.
- **ft_putstr_fd**: Escribe una cadena en un archivo.

### Listas enlazadas
- **ft_lstnew**: Crea un nuevo nodo de lista enlazada.
- **ft_lstadd_front**: Añade un nodo al inicio de una lista enlazada.
- **ft_lstsize**: Cuenta el número de nodos en una lista enlazada.
- **ft_lstlast**: Obtiene el último nodo de una lista enlazada.
- **ft_lstadd_back**: Añade un nodo al final de una lista enlazada.
- **ft_lstdelone**: Elimina un nodo de la lista.
- **ft_lstclear**: Elimina todos los nodos de una lista enlazada.
- **ft_lstiter**: Itera sobre los nodos de una lista, aplicando una función.
- **ft_lstmap**: Crea una nueva lista aplicando una función a cada nodo.

## Uso
Incluye los archivos de la librería en tu proyecto y compílalos junto a tu código. Usa las funciones de esta librería para simplificar tareas comunes en C.

```bash
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
