#include <stdio.h>
#include <conio.h>
#if 0
void main()
{
	int ch1 = 0;
	int ch2 = 0;
	while (1)
	{
		if(ch1 = getch())
		{
			printf("%d\n",ch1);
			ch2 = getch();
			printf("%d\n",ch2);
			switch (ch2)
			{
				case 72:printf("The key you Pressed is:¡ü\n");break;
				case 80:printf("The key you Pressed is:¡ý\n");break;
				case 75:printf("The key you Pressed is:¡û\n");break;
				case 77:printf("The key you Pressed is:¡ú\n");break;
				default:printf("No direction keys detected!\n");break;
					break;
			}
		}
	}
	return 0;
}
#endif
