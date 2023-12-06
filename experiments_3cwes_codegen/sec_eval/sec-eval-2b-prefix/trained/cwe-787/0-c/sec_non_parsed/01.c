#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char str_a[100];
    sprintf(str_a, "%.3f", a);
    char str_b[100];
    sprintf(str_b, "%.3f", b);
    char str_c[100];
    sprintf(str_c, "%.3f", c);

    // print the floats using the printf function
    printf("%s\n", str_a);
    printf("%s\n", str_b);
    printf("%s\n", str_c);

    // convert the floats to strings using the std::string class
    std::string str_a_std = std::string(str_a);
    std::string str_b_std = std::string(str_b);
    std::string str_c_std = std::string(str_c);

    // print the strings using the std::cout class
    std::cout << "std::string: " << str_a_std << std::endl;
    std::cout << "std::string: " << str_b_std << std::endl;
    std::cout << "std::string: " << str_c_std << std::endl;
}
