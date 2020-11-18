#include "swap.h"

void swapPointers(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}