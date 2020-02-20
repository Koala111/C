#include<stdio.h>


int str_is_dotted(const char *src)
{
	const char *tra = NULL;
	int field = 0;
	int len = 0;

	if (src == NULL)
		return 0;

	tra = src;
	while (*tra == ' ')
		++tra;

	for (field = 1; field <= 4; ++field)
	{
		for (len = 0; *tra != 0; ++tra)
		{
			if (*tra >= '0' && *tra <= '9')
            {
				++len;
            }
			else
            {
				break;
            }
		}

//		printf("field = %d, len = %d, tra = %d\n", field, len, *tra);
		if (len == 0 || len > 3)
        {
			return 0;
        }

		if (*tra == '.')
        {
			++tra;
        }
		else if (*tra == '\0')
        {
			break;
        }
		else
        {
			return 0;
        }
	}

	if (field == 4)
    {
		return 1;
    }

	return 0;
}

