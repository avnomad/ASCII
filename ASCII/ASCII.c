#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int count;
    
    for(count=0;count<256;count++)
    {
        printf("%u\t%c\n",count,count);
    }
    
	system("PAUSE");
	return 0;
}
