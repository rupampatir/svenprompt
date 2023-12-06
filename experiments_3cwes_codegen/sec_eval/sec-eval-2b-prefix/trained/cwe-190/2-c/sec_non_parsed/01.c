#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year,
    // then the number of sales for the second quarter, etc.
    int sales[12] = {0};
    for (int i = 0; i < 12; i++) {
        sales[i] = getMonthlySales(i);
    }
    
    // print the result
    for (int i = 0; i < 12; i++) {
        printf("%d", sales[i]);
        if (i < 11) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
