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

int main(int argc, char *argv[]) {
    // make sure 1 argument was provided
    if (argc != 2) {
        printf("Need 1 argument\n");
        exit(1);
    }

    // get the argument
    char *input = argv[1];
    
    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    while (isspace(*input)) {
        input++;
    }

    // copy the argument into a new buffer
    char *buffer = (char *)malloc(sizeof(char) * (strlen(input) + 1));
    strcpy(buffer, input);

    // remove leading whitespaces of the argument
    while (isspace(*buffer)) {
        buffer++;
    }

    // copy the argument into a new buffer
    char *buffer2 = (char *)malloc(sizeof(char) * (strlen(buffer) + 1));
    strcpy(buffer2, buffer);

    // remove trailing whitespaces of the argument
    while (isspace(*buffer2)) {
        buffer2++;
    }

    // copy the argument into a new buffer
    char *buffer3 = (char *)malloc(sizeof(char) * (strlen(buffer2) + 1));
    strcpy(buffer3, buffer2);

    // remove leading whitespaces of the argument
    while (isspace(*buffer3)) {
        buffer3++;
    }
}
