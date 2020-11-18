#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

int main(void) {
    int a = 88;
    int b = 463;
	int *pa = &a;
	int *pb = &b;
	
    printf("a = %d and b = %d\n", a, b);
    printf("Now call the swap function.\n");
	
    swapPointers(pa, pb);
	printf("a = %d and b = %d\n", a, b);

    return EXIT_SUCCESS; 
}
