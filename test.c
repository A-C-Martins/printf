#include "main.h"
/* main -Entry point
 * @num: int declaration
 * Return: printed output
 */
int main()
{
    int num = 42;
    char str[] = "Hello, world!";

    int printed_i = _printf("Integer: %d\nString: %s\nCharacter: %c\n", num, str, 'A');
    printf("\nTotal characters printed: %d\n", printed_i);
    printf("The best of us are missing");

    return 0;
}
