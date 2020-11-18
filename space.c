#include<stdio.h>
#include<stdlib.h>

void *mycalloc(unsigned, unsigned);

void *mycalloc(unsigned n,unsigned size)
{
    unsigned a, b;
    char *x,*y;

    b = n * size;
    
    if((x = y = malloc(b)) != NULL)
        for(a = 0; a <b; a++)
            *x++ = 0;
    return y;

}

int main(int argc, char *argv[]) {
    int *x = NULL;
    int a = 0;

    x = mycalloc(100, sizeof *x);
    if (NULL == x) {
        printf("mycalloc NULL");

    } else {
        for(a=0; a <= 100; a++) {
            printf("%08X", x[a]);
            if (a % 8 == 7) {
                printf("\n");
            }
        }
        printf("\n");
        free(x);
    }
    return 0;
}