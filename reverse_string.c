// SID 801272540

#include <stdio.h>

// Takes a pointer to a string terminated with \0 and reverses it
void reverse_string(char *str) {
    // Length of str
    int strLength = 0;
    for (int i = 0; str[i] != '\0'; i++) {strLength++;}
    // printf("String length of %d\n", strLength);

    for (int i = 0; i < strLength/2; i++) {
        char temp = str[(strLength - 1) - i];
        str[(strLength - 1) - i] = str[i];
        str[i] = temp;
    }
}

int main() {
    char string1[] = "Hello world";
    printf("Original string: %s\n", string1);
    reverse_string((char *) &string1);
    printf("Reversed string: %s\n\n", string1);

    char string2[] = "HelloWorld";
    printf("Original string: %s\n", string2);
    reverse_string((char*) &string2);
    printf("Reversed string: %s\n", string2);

    return 0;
}
