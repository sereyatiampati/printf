# printf ()
# Contextualization

The printf function (which derives its name from "formatted printing") prints a message on the screen using a "format string" that includes instructions for mixing multiple strings in the final string to be displayed on the screen. Languages ​​such as Ruby also include functions similar to this (Ruby printf.).

printf is a special function because it receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to print literally and marks to replace with text that is obtained from the additional parameters. Therefore, printf is called with as many parameters as there are marks in the format string plus one (the format string itself). The following example shows how the value of the counter variable is printed. 
printf("Value %d.\n", cont); 

  <p align="center">
  <img src="https://i.ibb.co/ryyYq8D/Percent.png" style="width:80%;"> 
  <p>

## Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push * them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might * be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

## Prototype

```bash
int _printf(const char *format, ...);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

## Usage _printf

```bash
int _printf(const char *format, ...);
```

## Material

 - [Secrets of printf](https://www.cypress.com/file/54761/download)

## Contributing
 - [Sereya Tiampati](https://github.com/sereyatiampati)
 - [Bob Hawkins](https://github.com/KingHawkins)


## License
Project for: [ALX School](https://www.https://www.alxafrica.com/software-engineering-2022)

