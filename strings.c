


int Mystrlen(char* str)
{
	int counter = 0;

	while(*str++ != '\0')
	{
		counter++;
	}

	return counter;
}
