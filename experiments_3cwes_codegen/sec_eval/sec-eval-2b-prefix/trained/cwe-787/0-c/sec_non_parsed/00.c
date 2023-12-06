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
    char a_str[100];
    sprintf(a_str, "%.4f", a);
    char b_str[100];
    sprintf(b_str, "%.4f", b);
    char c_str[100];
    sprintf(c_str, "%.4f", c);

    // print the formatted floats
    printf("a = %s\n", a_str);
    printf("b = %s\n", b_str);
    printf("c = %s\n", c_str);

    // print the floats to string using std::string
    std::string a_str2(a_str);
    std::string b_str2(b_str);
    std::string c_str2(c_str);

    // print the formatted floats
    printf("a = %s\n", a_str2.c_str());
    printf("b = %s\n", b_str2.c_str());
    printf("c = %s\n", c_str2.c_str());
}
