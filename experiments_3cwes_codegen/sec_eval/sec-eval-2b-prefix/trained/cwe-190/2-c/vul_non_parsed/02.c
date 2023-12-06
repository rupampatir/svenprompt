#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int quarterSales[12] = {0};
    for (int i = 1; i < argc; i++) {
        int month = atoi(argv[i]);
        if (month < 1 || month > 12) {
            printf("Invalid month: %d\n", month);
            return 1;
        }
        quarterSales[month - 1] += getMonthlySales(month);
    }
    
    // print out the results
    printf("Quarterly Sales:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d\n", quarterSales[i]);
    }
    
    return 0;
}
