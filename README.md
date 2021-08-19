# Libft
My own library of useful functions in C.

_Description :_ 

This first project as a 42/1337 student will help you consolidate your Piscine skills. You will recode a number of functions from the standard C library, as well as other utility functions that you will use throughout your curriculum.

# Summary
 1. [Makefile](#makefile)
 2. [Libc Functions](#libc)
 3. [Additional functions](#additionalfunctions)

# <a name="makefile">Makefile</a>

| Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile .c and create libft.a  	|
| `make clean`    | Delete .o.  	|
| `make flcean`  	| Delete .o and libft.a.  	|
| `make re`     	| Execute fclean et make.  	|

# <a name="libc">Libc Functions</a>

- memset  [(see man)](http://linux.die.net/man/3/memset) 
- bzero   [(see man)](http://linux.die.net/man/3/bzero)
- memcpy  [(see man)](http://linux.die.net/man/3/memcpy)
- memccpy [(see man)](http://linux.die.net/man/3/memccpy)
- memmove [(see man)](http://linux.die.net/man/3/memmove)
- memchr  [(see man)](http://linux.die.net/man/3/memchr)
- memcmp  [(see man)](http://linux.die.net/man/3/memcmp)
- strlen  [(see man)](http://linux.die.net/man/3/strlen)
- strlcpy [(see man)](http://linux.die.net/man/3/strlcpy)
- strlcat [(see man)](http://linux.die.net/man/3/strlcat)
- strchr  [(see man)](http://linux.die.net/man/3/strchr)
- strrchr [(see man)](http://linux.die.net/man/3/strrchr)
- strnstr [(see man)](http://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3)
- strncmp [(see man)](http://linux.die.net/man/3/strncmp)
- atoi    [(see man)](http://linux.die.net/man/3/atoi)
- isalpha [(see man)](http://linux.die.net/man/3/isalpha)
- isdigit [(see man)](http://linux.die.net/man/3/isdigit)
- isalnum [(see man)](http://linux.die.net/man/3/isalnum)
- isascii [(see man)](http://linux.die.net/man/3/isascii)
- isprint [(see man)](http://linux.die.net/man/3/isprint)
- toupper [(see man)](http://linux.die.net/man/3/toupper)
- tolower [(see man)](http://linux.die.net/man/3/tolower)
- strdup  [(see man)](http://linux.die.net/man/3/strdup)
- calloc  [(see man)](https://linux.die.net/man/3/calloc)



# <a name="additionalfunctions">Additional functions<a/>



| Function       	|  ft_substr  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_substr(char const *s, unsigned int start,
size_t len); |
| Parameters    	| #1.  The string from which to create the substring.
#2.  The start index of the substring in the string
’s’.
#3.  The maximum length of the substring. |
| Return value     	| The substring.  NULL if the allocation fails. |
| External functs.  | malloc |
| Description    	| Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.	|

----------

| Function       	|  <a name="ft_putstr_fd">ft_putstr_fd</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putstr_fd(char const *s, int fd); |
| Description    	| Ecrit la chaine s sur le descripteur de fichier fd. |
| Param. #1      	| La chaine de caractères à écrire. |
| Retour         	| Rien. |
| Fonctions libc 	| write(2)	|

----------

| Function       	|  <a name="ft_putendl_fd">ft_putendl_fd</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putendl_fd(char const *s, int fd); |
| Description    	| Ecrit la chaine s sur le descripteur de fichier fd suivi d’un ’\n’. |
| Param. #1      	| La chaine de caractères à écrire. |
| Retour         	| Rien. |
| Fonctions libc 	| write(2)	|

----------

| Function       	|  <a name="ft_putnbr_fd">ft_putnbr_fd</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putnbr_fd(int n, int fd); |
| Description    	| Ecrit l’entier n sur le descripteur de fichier fd. |
| Param. #1      	| L’entier à écrire. |
| Retour         	| Rien. |
| Fonctions libc 	| write(2)	|
