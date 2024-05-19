void	ft_swap(int *a, int *b)
{
	int	vrem;

	vrem = *a;
	*a = *b;
	*b = vrem;
}

/*int main(void)
{
	int *a;
	int *b;
	int first;
	int second;
	first = '2';
	second = '4';
	a = &first;
	b = &second;
	ft_swap(a,b);
}*/
