									--- 0x05-pointers_arrays_strings ---
\\Directory Structure 


### Requirements  

#General Guidelines

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
9. You are allowed to use _putchar
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
13. Don’t forget to push your header file


#Task
0. 98 Battery St.
Prototype: void reset_to_98(int *n);

Description: This function takes a pointer to an integer as a parameter and updates the value it points to 98.

1. Don't Swap Horses in Crossing a Stream
Prototype: void swap_int(int *a, int *b);

Description: This function takes two integer pointers as parameters and swaps the values they point to. After the execution of the function, the value pointed by a will be the value pointed by b and vice versa.

2. Defending Against the Risk of Being Read
Prototype: int _strlen(char *s);

Description: This function takes a pointer to a string as a parameter and returns the length of the string. The length of the string is defined as the number of characters in the string not including the null character \0.

3. Fear the Lack of Computers
Prototype: void _puts(char *str);

Description: This function takes a pointer to a string as a parameter and prints the string, followed by a newline character \n, to the standard output (stdout).

4. One Way, No Reverse Gear
Prototype: void print_rev(char *s);

Description: This function takes a pointer to a string as a parameter and prints the string in reverse, followed by a newline character \n, to the standard output (stdout).

5. Thinking in Reverse
Prototype: void rev_string(char *s);

Description: This function takes a pointer to a string as a parameter and reverses the characters of the string in place.

6. Half Lies, Every Other Character
Prototype: void puts2(char *str);

Description: This function takes a pointer to a string as a parameter and prints every other character of the string, starting with the first character, followed by a newline character \n, to the standard output (stdout).

7. Winning Is Half the Fun
Prototype: void puts_half(char *str);

Description: This function takes a pointer to a string as a parameter and prints the second half of the string, followed by a newline character \n, to the standard output (stdout). If the length of the string is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.

8. Arrays are not pointers
Prototype: void print_array(int *a, int n);

Description: This function takes an array of integers and the number of elements to be printed as input, and prints the elements followed by a new line. The numbers are separated by comma and a space. The function uses the printf function to print the elements in the same order as they are stored in the array. It is important to note that arrays are not pointers and should not be treated as such.

9. strcpy
Prototype: char *_strcpy(char *dest, char *src);

Description: This function copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. The function returns a pointer to dest.
It is important to ensure that dest has enough space to store the entire string pointed to by src (including the null terminator), otherwise, the behavior of the function is undefined.
Note that a similar function strcpy is provided in the standard library. You can run man strcpy to learn more about it.

10. String to Integer Conversion
Prototype: int _atoi(char *s);

Description: This function converts a string to an integer. The input string s may contain an infinite number of characters before the number. It can also include + or - signs before the number. The function takes all of these into account when converting the string to an integer. If there are no numbers in the string, the function returns 0. The function is not allowed to use long and declare new variables of "type" array. It is also not allowed to hard-code special values. The function must be implemented in such a way that it does not cause signed integer overflow. To ensure this, the -fsanitize=signed-integer-overflow gcc flag will be used to compile your code.

11. Random Password Generator

Description: This program generates random valid passwords for the program 101-crackme. It uses the standard library for generating random numbers.
The srand, rand, and time functions from the standard library are used to generate random numbers. srand seeds the random number generator, rand generates a random integer, and time is used to seed srand with a value based on the current time. This ensures that each run of the program produces a different set of random numbers.
The program uses the generated random numbers to create random valid passwords for 101-crackme. To do this, it uses a combination of letters, numbers, and special characters. The generated password is then printed to the console.
Note that gdb and objdump can be used to help with debugging and analyzing the program.





//Ahmed Nagm
