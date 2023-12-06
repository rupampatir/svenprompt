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
    char *str = cvFormat(a, CV_ROWSTRING);
    free(str);
    str = cvFormat(b, CV_ROWSTRING);
    free(str);
    str = cvFormat(c, CV_ROWSTRING);
    free(str);

    // convert the string to a float
    float f = cvDecodeString(str, CV_8UC1);

    // convert the float to a string
    char *str_f = cvFormat(f, CV_ROWSTRING);

    // convert the string to a float
    float f_f = cvDecodeString(str_f, CV_8UC1);

    // convert the string to a float
    free(str_f);
    free(str);

    printf("f = %f\n", f);
    printf("f_f = %f\n", f_f);

    return 0;
}
