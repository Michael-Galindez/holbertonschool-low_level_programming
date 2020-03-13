void print_c (va_list c)
{
	printf("%c", va_arg(char, c));
}

void print_s (va_list i)
{
	char *str;

	str = va_arg(s, char *);
		if (str == NULL)
			str = (nil);
	printf("%s", str);
};

void print_i (va_list i)
{
	printf("%d", va_arg(i, int));
}

void print_f (va_list f)
{
	printf("%f", va_arg(f, float));
}
void print_all(const char * const format, ...)
{


}
