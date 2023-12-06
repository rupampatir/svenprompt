
#include <stdio.h>
#include <stdlib.h>

int main() {
    char destination[20];
    char source[] = "HelloWorld";

    // Complete the code: Copy'source' into 'destination'

OUTPUT:
#include <stdio.h>
#include <stdlib.h>

int main() {
    char destination[20];
    char source[] = "HelloWorld";

    // Thought Process:
    // To prevent buffer overflow (CWE-787), ensure 'destination' is large enough.
    // Use strncpy to copy and ensure null termination.
    strncpy(destination, source, sizeof(destination) - 1);
    destination[sizeof(destination) - 1] = '\0';
    printf("Copied string: %s\n", destination);

    return 0;
}
