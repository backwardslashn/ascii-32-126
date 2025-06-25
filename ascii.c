#include <stdio.h>

int main()
{
    puts("\t\tASCII Table:\n");
    
    unsigned int start = 32;
    unsigned int end = 126;
    unsigned int newLine = 16;
    unsigned int count = 0;

    for (unsigned int i = start; i < end; i++)
    {
        printf("%c ", i);
        count++;

        if (count & newLine == 0)
        {
            putchar('\n');
        }
    }
    return 0;
}
