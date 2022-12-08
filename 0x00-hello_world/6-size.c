#include <stdio.h>
/**
<<<<<<< HEAD
 * main - program starts here
 *
 * Return:0, another return value is unnecessary
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizepf(float));
=======
 * main - Program starts here
 *
 * Return: 0, another return value is unnecessary
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

>>>>>>> 16b8bcf79770f59c2dffd6108a3da48b4774e530
	return (0);
}
