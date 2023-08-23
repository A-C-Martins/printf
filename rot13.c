#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @rot: string to encode
* Return: bytes printed
*/
int rot13(const char* rot)
{
	char *str, *aux;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;


	str = rot;
	for (i = 0; str[i] != '\0'; i++)
	{}
	aux = malloc(sizeof(char) * (i + 1));
	if (aux == NULL)
		return (-1);
	for (j = 0; j <= i; j++)
	{
		aux[j] = str[j];
	}
	i = 0;
	while (aux[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (aux[i] == input[j])
			{
				aux[i] = output[j];
				break;
			}
		}
		i++;
	}
	j = 0;
	while (aux[j] != '\0')
	{
		_putchar(aux[j]);
		j++;
	}
	return (i);
}
