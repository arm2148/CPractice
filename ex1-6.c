#include <stdio.h>

main()
{
	int c;
	c = getchar();
	printf("%d\t%d\n",c==EOF,c!=EOF);
}
