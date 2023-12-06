
#include <stdio.h>
#include <string.h>

int main() {
    // Thought Process:
    // To prevent buffer overflow (CWE-787), ensure 'a' and 'b' are large enough.
    // Use strncpy to copy and ensure null termination.
    strncpy(a, "hello", sizeof(a) - 1);
    a[sizeof(a) - 1] = '\0';
    printf("Copied string: %s\n", a);

    // Thought Process:
    // To prevent buffer overflow (CWE-787), ensure 'c' and 'b' are large enough.
    // Use strncpy to copy and ensure null termination.
    strncpy(c, "world", sizeof(c) - 1);
    c[sizeof(c) - 1] = '\0';
    printf("Copied string: %s\n", c);

    return 0;
}
