#include "main.h"

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */

int print_octal(va_list list)
{
	unsigned int num; /*  declare an unsigned int variable called num */
	int len; /*  declare an int variable called len */
	char *octal_rep; /*  declare a char pointer called octal_rep */
	char *rev_str; /*  declare a char pointer called rev_str */

	num = va_arg(list, unsigned int); /*  get the unsigned int value of the argument from the list */

	if (num == 0) /*  if num equals 0 */
		return (_putchar('0')); /*  print 0 and return 1 */
	if (num < 1) /*  if num is less than 1 */
		return (-1); /*  return -1 to indicate an error occurred*/
	len = base_len(num, 8); /*  calculate the length of num in base 8 and assign it to len */

	octal_rep = malloc(sizeof(char) * len + 1); /*  allocate memory for octal_rep */
	if (octal_rep == NULL) /*  if allocation fails */
		return (-1); /*  return -1 to indicate an error occurred*/
	for (len = 0; num > 0; len++) /*  loop until num equals 0 */
	{
		octal_rep[len] = (num % 8) + 48; /*  set the current digit of octal_rep to the remainder of num divided by 8 */
		num = num / 8; /*  divide num by 8 */
	}
	octal_rep[len] = '\0'; /*  add a null terminator to the end of octal_rep */
	rev_str = rev_string(octal_rep); /* reverse octal_rep and assign it to rev_str */
	if (rev_str == NULL) /*  if rev_str equals NULL */
		return (-1); /*  return -1 to indicate an error occurred */

	write_base(rev_str); /*  write the string to the standard output */
	free(octal_rep); /*  free the memory allocated to octal_rep */
	free(rev_str); /*  free the memory allocated to rev_str*/
	return (len); /*  return the number of characters printed*/
}
