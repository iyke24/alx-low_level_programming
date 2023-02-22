/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet -  function to print all the alphabet in lowercase
 * Description: 'the function uses while loop to print the alphabet'
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 -  function to print all the alphabet in lowercase 10 times
 * Description: 'the function uses while loop to print the alphabet'
 */
void print_alphabet_x10(void);

/**
 *  _islower - return 1 if c is lower else return 0
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c);

/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);

/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int);
