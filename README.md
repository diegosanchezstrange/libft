# libft
My implementation of some of the Standard C Library functions

## About

This is the first project of the 42 cursus and aims to teach you about the libc functions by making you implment them. 

You will be using all of this functions in your future projects, for that reson you can add anything that you find useful that doesn´t break any of the rules of the projects (like using forbbiden functions or the implementation not goig according to the Norm)

Apart from the basic functions the bonus part of this project asks you to implement a linked list and some functions to use it.

In this repo you will also find an additional 2 funtions printf and get_nex_line. This are 2 different project but you can add them later to your lib

## Libft Basic functions

### Char functions

| Name       | Description | Prototype |
|:-----------|:------------|:----------|
| isalpha    | Return 1 if 'c' is alphabetic| int ft_isalpha(char c) |
| isdigit    | Return 1 if 'c' is a digit| int ft_isdigit(char c)|
| isalnum    | Return 1 if 'c' is alphanumeric| int ft_isalnum(char c)|
| isacii     | Return 1 if 'c' is in the ascii table | int ft_isascii(char C)|
| isprint    | Return 1 if 'c' is a printable char | int ft_isprint(char C)|
| toupper    | Return 'c' in uppercase if is alphabetic | int ft_toupper(int c)|
| tolower    | Return 'c' in uppercase if is alphabetic | int ft_tolower(int c)|

### String funtions 

| Name       | Description | Prototype |
|:-----------|:------------|:----------|
| strlen    | Return the lenght of str| size_t ft_strlen(char *str) |
| strlcpy   | | |
| strlcat   | ||
| strchr    | ||
| strrchr   | ||
| strncmp   | ||
| strnstr   | ||
| strdup    | Allocates (with malloc(3)) and returns a copy of str| char * ft_strdup(char *str) |
| substr    | Allocates (with malloc(3)) and returns a substring from the string ’s’.<br>The substring begins at index ’start’ and is of maximum size ’len’.|char *ft_substr(char const *s, unsigned int start, size_t len);|
| strjoin   | Allocates (with malloc(3)) and returns a new string, which is<br>the result of the concatenation of ’s1’ and ’s2’| char *ft_strjoin(char const *s1, char const *s2); |
| strtrim   | Allocates (with malloc(3)) and returns a copy of ’s1’ with <br>the characters specified in ’set’ removed from the beginning and the end of the string.| char *ft_strtrim(char const *s1, char const *set); |
| split     | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.| char **ft_split(char const *s, char c); |
| strmapi   | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.| char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |
| striter   | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.| void ft_striteri(char *s, void (*f)(unsigned int, char*)); |



## Libft Linked List

## printf

## get_nex_line

