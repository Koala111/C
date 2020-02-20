#include <stdio.h> 
#include <string.h>

#if 0

void encode(char str[],int n)
{
	char c;
	int i;
	for(i = 0;i<strlen(str);i++)
	{
		c=str[i];
		if(c>='a'&&c<='z')
			if(c+n%26<='z')
				str[i]=(char)(c+n%26);
			else 
				str[i]=(char)('a'+((n-(('z'-c)-1)%26)));
			else if(c>='A' && c<='Z')
				if(c+n%26<='Z')
					str[i]
	}
}
#endif
