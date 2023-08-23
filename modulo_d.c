#include "main.h"
/* @handle_d - decimal integer specifier
 * @dandle_i: integer specifier
 *
 */

int handle_d(const int *format)
{
    write(1, &format, 1);
    return (1);
}

int handle_i(const int *format)
{
    write(1, &format, 1);
    return (1);
}
