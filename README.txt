<body>
    <h1>Libft</h1>
    <p>
        <strong>Libft</strong> es una librería personalizada de funciones en C que implementa herramientas útiles 
        para manejar cadenas, memoria, listas enlazadas, y otras utilidades básicas. Esta librería está diseñada 
        para proporcionar una base sólida al trabajar en proyectos más grandes.
    </p>

    <h2>Descripción de funciones</h2>

    <h3>Manipulación de cadenas</h3>
    <ul>
        <li><strong>ft_atoi</strong>: Convierte una cadena en un número entero.</li>
        <li><strong>ft_isalnum</strong>: Verifica si un carácter es alfanumérico.</li>
        <li><strong>ft_isalpha</strong>: Verifica si un carácter es una letra.</li>
        <li><strong>ft_isascii</strong>: Comprueba si un carácter pertenece a la tabla ASCII.</li>
        <li><strong>ft_isdigit</strong>: Verifica si un carácter es un dígito.</li>
        <li><strong>ft_isprint</strong>: Verifica si un carácter es imprimible.</li>
        <li><strong>ft_itoa</strong>: Convierte un número entero en una cadena.</li>
        <li><strong>ft_split</strong>: Divide una cadena en un array de cadenas según un delimitador.</li>
        <li><strong>ft_strchr</strong>: Busca la primera aparición de un carácter en una cadena.</li>
        <li><strong>ft_strdup</strong>: Duplica una cadena.</li>
        <li><strong>ft_striteri</strong>: Aplica una función a cada carácter de una cadena con su índice.</li>
        <li><strong>ft_strjoin</strong>: Une dos cadenas en una nueva.</li>
        <li><strong>ft_strlcat</strong>: Concatena cadenas con un tamaño limitado.</li>
        <li><strong>ft_strlcpy</strong>: Copia una cadena con un tamaño limitado.</li>
        <li><strong>ft_strlen</strong>: Calcula la longitud de una cadena.</li>
        <li><strong>ft_strmapi</strong>: Crea una nueva cadena aplicando una función a cada carácter.</li>
        <li><strong>ft_strncmp</strong>: Compara dos cadenas hasta un número específico de caracteres.</li>
        <li><strong>ft_strnstr</strong>: Localiza una subcadena dentro de otra, hasta un límite dado.</li>
        <li><strong>ft_strrchr</strong>: Busca la última aparición de un carácter en una cadena.</li>
        <li><strong>ft_strtrim</strong>: Elimina caracteres específicos del inicio y fin de una cadena.</li>
        <li><strong>ft_substr</strong>: Extrae una subcadena de una cadena.</li>
        <li><strong>ft_tolower</strong>: Convierte un carácter en minúscula.</li>
        <li><strong>ft_toupper</strong>: Convierte un carácter en mayúscula.</li>
    </ul>

    <h3>Gestión de memoria</h3>
    <ul>
        <li><strong>ft_bzero</strong>: Llena un bloque de memoria con ceros.</li>
        <li><strong>ft_calloc</strong>: Reserva memoria inicializada a cero.</li>
        <li><strong>ft_memchr</strong>: Busca un carácter en un bloque de memoria.</li>
        <li><strong>ft_memcmp</strong>: Compara dos bloques de memoria.</li>
        <li><strong>ft_memcpy</strong>: Copia un bloque de memoria a otro.</li>
        <li><strong>ft_memmove</strong>: Copia un bloque de memoria a otro, gestionando solapamientos.</li>
        <li><strong>ft_memset</strong>: Llena un bloque de memoria con un valor específico.</li>
    </ul>

    <h3>Salida</h3>
    <ul>
        <li><strong>ft_putchar_fd</strong>: Escribe un carácter en un archivo.</li>
        <li><strong>ft_putendl_fd</strong>: Escribe una cadena seguida de un salto de línea en un archivo.</li>
        <li><strong>ft_putnbr_fd</strong>: Escribe un número entero en un archivo.</li>
        <li><strong>ft_putstr_fd</strong>: Escribe una cadena en un archivo.</li>
    </ul>

    <h3>Listas enlazadas</h3>
    <ul>
        <li><strong>ft_lstnew</strong>: Crea un nuevo nodo de lista enlazada.</li>
        <li><strong>ft_lstadd_front</strong>: Añade un nodo al inicio de una lista enlazada.</li>
        <li><strong>ft_lstsize</strong>: Cuenta el número de nodos en una lista enlazada.</li>
        <li><strong>ft_lstlast</strong>: Obtiene el último nodo de una lista enlazada.</li>
        <li><strong>ft_lstadd_back</strong>: Añade un nodo al final de una lista enlazada.</li>
        <li><strong>ft_lstdelone</strong>: Elimina un nodo de la lista.</li>
        <li><strong>ft_lstclear</strong>: Elimina todos los nodos de una lista enlazada.</li>
        <li><strong>ft_lstiter</strong>: Itera sobre los nodos de una lista, aplicando una función.</li>
        <li><strong>ft_lstmap</strong>: Crea una nueva lista aplicando una función a cada nodo.</li>
    </ul>

    <h2>Uso</h2>
    <p>
        Incluye los archivos de la librería en tu proyecto y compílalos junto a tu código. Usa las funciones de esta 
        librería para simplificar tareas comunes en C.
    </p>
    <pre>
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
    </pre>
    <p>¡Explora estas funciones y mejora tus proyectos con <strong>Libft</strong>!</p>
</body>
</html>
