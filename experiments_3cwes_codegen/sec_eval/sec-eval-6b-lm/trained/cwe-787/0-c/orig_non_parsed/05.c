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
    char *fmt = "%f";
    char *fmt_str = "%.3f";
    char *fmt_str_2 = "%f";
    char *fmt_str_3 = "%e";
    char *fmt_str_4 = "%g";
    char *fmt_str_5 = "%E";
    char *fmt_str_6 = "%G";
    char *fmt_str_7 = "%f";
    char *fmt_str_8 = "%e";
    char *fmt_str_9 = "%g";
    char *fmt_str_10 = "%E";
    char *fmt_str_11 = "%G";
    char *fmt_str_12 = "%f";
    char *fmt_str_13 = "%e";
    char *fmt_str_14 = "%g";
    char *fmt_str_15 = "%E";
    char *fmt_str_16 = "%G";
    char *fmt_str_17 = "%f";
    char *fmt_str_18 = "%e";
    char *fmt_str_19 = "%g";
    char *fmt_str_20 = "%E";
    char *fmt_str_21
