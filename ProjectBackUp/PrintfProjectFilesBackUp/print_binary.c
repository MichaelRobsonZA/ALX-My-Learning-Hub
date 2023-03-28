/**

print_binary - Converts a number from base 10 to binary

@list: List of arguments passed to this function

Return: The length of the number printed
*/
int print_binary(va_list list)
{
unsigned int num; /* variable to store the number to be converted */
int i, len; /* loop counter and the length of the number */
char *str; /* string to store the converted number */
char *rev_str; /* reversed string of the converted number */

num = va_arg(list, unsigned int); /* get the next argument from the list */
if (num == 0) /* if the number is zero, print zero and return */
return (_putchar('0'));
if (num < 1) /* if the number is negative, return -1 to indicate error */
return (-1);
len = base_len(num, 2); /* get the length of the binary number */
str = malloc(sizeof(char) * len + 1); /* allocate memory for the string */
if (str == NULL) /* check if allocation was successful */
return (-1);

for (i = 0; num > 0; i++) /* convert the number to binary */
{
if (num % 2 == 0)
str[i] = '0';
else
str[i] = '1';
num = num / 2;
}
str[i] = '\0'; /* add null terminator to the string */
rev_str = rev_string(str); /* reverse the string to get the correct order */
if (rev_str == NULL) /* check if string reversal was successful */
return (-1); 
write_base(rev_str); /* print the binary number */
free(str); /* free the memory allocated for the string */
free(rev_str); /* free the memory allocated for the reversed string */
return (len); /* return the length of the binary number */
}