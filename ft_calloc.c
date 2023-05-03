#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    size_t    *ptr;
    size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    while (i < count)
    {
        ptr = (size_t*)malloc(size * sizeof(size_t));
        while ( j < size)
        {
          ptr[j] = 0;
          j++;
        }
        if (ptr == NULL)
        {
          printf("There has been an error with malloc function.");
        }
        i++;
        j = 0;
    }
}

/*int main()
{
  size_t count = 4;
  size_t size = 2;
  
  ft_calloc(count, size);
}*/