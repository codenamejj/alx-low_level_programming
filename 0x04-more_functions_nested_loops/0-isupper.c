/**
  * _isupper - check uppercase
  *
  * @c: character being checked
  *
  * Return: 1 or 0 always
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
		c++;
	}
	else
	{
		return (0);
	}
	return (0);
}
