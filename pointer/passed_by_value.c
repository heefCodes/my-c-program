/**
 * modif_my_param - this function does not modify n
 * @m: useless integer
 * Return: nothing
 */

void modif_my_param(int m)
{
	m = 402;
}
/**
 * main - parameters are passed by value
 * Return: 0
 */
int main(void)
{
	int n;

	n = 98;
	modif_my_param(n);
	return (0);
}
