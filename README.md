This repo is a project under which the printf function in C is replicated.
An ALX SE project

# _printf function
================

This is an implementation of the printf function in C. It takes a format string and a variable number of arguments and returns a formatted string.

## Usage
-----

To use the _printf function, include the header file `main.h` and call the function with a format string and any additional arguments:


`#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return (0);
}`

This example would output "Hello, world!" to the console.

### Supported Conversion Specifiers
-------------------------------

The _printf function supports the following conversion specifiers:

-   `%c`: character
-   `%s`: string
-   `%d`, `%i`: signed decimal integer
-   `%u`: unsigned decimal integer
-   `%o`: octal integer
-   `%x`, `%X`: hexadecimal integer
-   `%p`: pointer

### Custom Conversion Specifiers
----------------------------

The _printf function also supports the following custom conversion specifiers:

-   `%b`: binary integer
-   `%S`: non-printable characters
-   `%r`: reversed string
-   `%R`: rot13'ed string

### Formatting Options
------------------

The _printf function supports the following formatting options:

-   Field width: specify the minimum width of the output field, padded with spaces if necessary.
-   Precision: specify the number of digits to display after the decimal point for floating-point numbers.
-   Flags: specify various formatting flags such as left-justification, zero-padding, etc.

### Example Usage
-------------

Here are some examples of how to use the _printf function with various conversion specifiers and formatting options:

`#include "holberton.h"

int main(void)
{
    int n = 12345;
    char *s = "hello";
    void *p = &n;

    _printf("%%c: %c\n", 'A');
    _printf("%%s: %s\n", s);
    _printf("%%d: %d\n", n);
    _printf("%%i: %i\n", n);
    _printf("%%u: %u\n", n);
    _printf("%%o: %o\n", n);
    _printf("%%x: %x\n", n);
    _printf("%%X: %X\n", n);
    _printf("%%p: %p\n", p);

    _printf("%%10d: %10d\n", n);
    _printf("%%.3f: %.3f\n", 3.14159);
    _printf("%%-10s: %-10s\n", s);
    _printf("%%05d: %05d\n", n);

    _printf("%%b: %b\n", n);
    _printf("%%S: %S\n", "Hello,\tworld\n");
    _printf("%%r: %r\n", "Hello, world!");
    _printf("%%R: %R\n", "Hello, world!");

    return (0);
}`

### This example would output the following:

`%c: A
%s: hello
%d: 12345
%i: 12345
%u: 12345
%o: 30071
%x: 3039
%X: C08F3B
%p: 0x7ffeefbff600
%10d:      12345
%.3f: 3.142
%-10s: hello
%05d: 12345
%b: 11000000111001
%S: Hello,  world
%r: !dlrow ,olleH
%R: Uryyb`
