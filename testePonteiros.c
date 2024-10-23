#include <stdio.h> 

int main () {

    int x=1, y=3;
    int *px=&y, *py=&y;

    *px= *px + *py;

    *px++;

    px++;

    

    printf("*px=%d\n", *px);
    printf("px= %p\n", &px);
    return 0;
}