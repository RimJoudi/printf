#  _printf

In this project we are going to recreate the C standard library **printf** function as a part of the curriculum of software engineering for the low-level programming module at [Holberton School](https://www.holbertonschool.com/tn/en/ "Holberton School").

### Description
Our _printf function has as prototype :

> int _printf(const char *format, ...);

###  C language standard functions allowed:

- write (man 2 write)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_arg (man 3 va_arg)

###  Compilation

Our code is compiled this way:

`$ gcc -Wall -Werror -Wextra -pedantic *.c`

All our files are tested on Ubuntu 14.04 LTS in a VirtualBox on it via Vagrant(2.2.14) using the Betty style.

###  Usage

To use the _printf function you simply need to compile all files .c including the header holberton.h with a main function.

##### Example:

######  main.c


    #include "holberton.h"

    int main(void)
	    {
		     _printf("let's print something using our function!");

       return (0);
	    }

###### Compilation:


`$ gcc *.c -o`

###### Output:

`let's print something using our function!`

###  Return of _printf

In case of success _printf returns an integer value, wich is the total number of printed characters.
Otherwise, _printf returns -1 (error).


### Format tags

Format tags used in _printf :

|Specifiers   |  Printed As  |
| :------------: | :------------: |
| c  |  characters |
|s   | string of characters  |
|  d or i  | int to signed decimal  |
|  R | string to rot 13 |
| r  | reversed string  |
| b  | int to binary |
| %  | no conversion, writes '%'  |


For more informations about format specifier check it in the *C Programming Language* book, page 126, 2nd Edition of:
Brian W. Kernighan  and Dennis M. Ritchie



###  Files and Description

|File   | Description  |
| :------------: | :------------: |
| holberton.h  |  Header file contains all the prototypes|
| 1_print_functions.c  | Contain functions for (c, s, %) |
| 2_print_functions.c  | Contain functions for (r, i, d, R, b) |
| _putchar.c |  Contain the putchar function |
| _new_line_fun.c  | Contain the function to print a new line  |
| get_print_function.c | Contains functions format specifiers |
| _print_fun.c | The _printf function |



### Authors

* Maroua Alaya  - (https://github.com/maroua199525)

* Rim Joudi  - (https://github.com/RimJoudi)








[![Holberton school](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT8g8Cvqw9Z7Rx9IHGq9gKYneeM1U4_KvUNTeaCBkX2L5pFE3Ihw-5uNGs9xPSmUb5kXA&usqp=CAU)](https://www.holbertonschool.com/tn/en/ "Holberton school")








###### Project made for [Holberton school](https://www.holbertonschool.com/tn/en/ "Holberton school") by **Maroua Alaya** and  Rim Joudi.
