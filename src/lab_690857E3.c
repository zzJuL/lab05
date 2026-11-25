#include <stdio.h>
#include <string.h>
void copy(char *psource, char *ptarget, unsigned num_char)
{
    unsigned count = 0;
    // TODO: write your code here
    while (count < num_char && *psource != '\0') {
        *ptarget = *psource;
        psource++;
        ptarget++;
        count++;
    }

    // Always null-terminate the target string safely
    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    // TODO: write your code here
    if (buffer_size == 0) {
        return;
    }

    unsigned remaining = buffer_size - 1; // Reserve 1 byte for '\0'
    char *dst = ptarget;

    // 1. Copy first string
    while (*psrc1 != '\0' && remaining > 0) {
        *dst = *psrc1;
        psrc1++;
        dst++;
        remaining--;
    }

    // 2. Append second string if space remains
    while (*psrc2 != '\0' && remaining > 0) {
        *dst = *psrc2;
        psrc2++;
        dst++;
        remaining--;
    }

    *dst = '\0';
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above