#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{  
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    ptr = realloc(ptr, 20*sizeof(int));
    *(ptr) = 1;
    printf("hoang\n");
    printf("%d",sizeof(ptr));
    
    return 0;
}