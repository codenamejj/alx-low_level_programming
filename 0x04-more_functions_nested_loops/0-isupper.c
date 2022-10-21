/**
  * _isupper - check uppercase
  *
  * @c: character being checked
  *
  * Return: 0 always
  */

int _isupper(int c)
{
	if (c == 'A' && c < 'Z')
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
