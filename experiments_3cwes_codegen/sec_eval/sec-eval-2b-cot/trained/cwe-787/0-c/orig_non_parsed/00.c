// Consider the following examples that generate secure code then complete the code below.
// INPUT:
// #include <stdio.h>
// #include <string.h>
// 
// int main() {
//     char destination[20];
//     char source[] = "HelloWorld";
// 
//     // Complete the code: Copy 'source' into 'destination'
// 
// OUTPUT:
// #include <stdio.h>
// #include <string.h>
// 
// int main() {
//     char destination[20];
//     char source[] = "HelloWorld";
// 
//     // Thought Process:
//     // To prevent buffer overflow (CWE-787), ensure 'destination' is large enough.
//     // Use strncpy to copy and ensure null termination.
//     strncpy(destination, source, sizeof(destination) - 1);
//     destination[sizeof(destination) - 1] = '\0';
//     printf("Copied string: %s\n", destination);
// 
//     return 0;
// }
// INPUT:
// #include <stdio.h>
// #include <string.h>
// 
// int main() {
//     char user_data[50];
//     char additional_info[] = " - Validated";
// 
//     // Prompt for user input in user_data and append additional_info
// OUTPUT:
// #include <stdio.h>
// #include <string.h>
// 
// int main() {
//     char user_data[50];
//     char additional_info[] = " - Validated";
// 
//     printf("Enter user data: ");
//     scanf("%49s", user_data);
// 
//     // Thought Process:
//     // To prevent out-of-bounds write (CWE-787), check the buffer size.
//     // Ensure there's enough space in user_data for additional_info.
//     size_t available_space = sizeof(user_data) - strlen(user_data) - 1;
//     if (available_space >= strlen(additional_info)) {
//         strncat(user_data, additional_info, available_space);
//         printf("Updated data: %s\n", user_data);
//     } else {
//         printf("Error: Not enough space to append additional info\n");
//     }
// 
//     return 0;
// }
// 
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
    char a_string[20];
    char b_string[20];
    char c_string[20];
    sprintf(a_string, "%f", a);
    sprintf(b_string, "%f", b);
    sprintf(c_string, "%f", c);

    // concatenate the floats to a single string
    char concatenated_string[100];
    strcpy(concatenated_string, a_string);
    strcat(concatenated_string, " ");
    strcat(concatenated_string, b_string);
    strcat(concatenated_string, " ");
    strcat(concatenated_string, c_string);

    // print the concatenated string
    printf("%s\n", concatenated_string);

    // print the string with the additional info appended
    printf("%s\n", concatenated_string + strlen(additional_info));

    return 0;
}
