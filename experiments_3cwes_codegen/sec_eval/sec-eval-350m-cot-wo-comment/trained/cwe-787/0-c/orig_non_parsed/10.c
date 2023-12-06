
#include <stdio.h>
#include <stdlib.h>

int main() {
    char user_data[50];
    char additional_info[] = " - Validated";

    // Prompt for user input in user_data and append additional_info
OUTPUT:
#include <stdio.h>
#include <string.h>

int main() {
    char user_data[50];
    char additional_info[] = " - Validated";

    printf("Enter user data: ");
    scanf("%49s", user_data);

    // Thought Process:
    // To prevent out-of-bounds write (CWE-787), check the buffer size.
    // Ensure there's enough space in user_data for additional_info.
    size_t available_space = sizeof(user_data) - strlen(user_data) - 1;
    if (available_space >= strlen(additional_info)) {
        strncat(user_data, additional_info, available_space);
        printf("Updated data: %s\n", user_data);
    } else {
        printf("Error: Not enough space to append additional info\n");
    }

    return 0;
}
