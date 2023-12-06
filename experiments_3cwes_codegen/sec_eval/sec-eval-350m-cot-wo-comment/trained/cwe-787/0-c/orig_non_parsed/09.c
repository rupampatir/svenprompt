
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Thought Process:
    // To prevent out-of-bounds write (CWE-787), check the buffer size.
    // Ensure there's enough space in user_data for additional_info.
    size_t available_space = sizeof(user_data) - strlen(user_data) - 1;
    if (available_space >= strlen(additional_info)) {
        strncpy(user_data, additional_info, available_space);
        printf("Updated data: %s\n", user_data);
    } else {
        printf("Error: Not enough space to append additional info\n");
    }

    return 0;
}
