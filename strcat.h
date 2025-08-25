
#include "strcat.h"

char *my_strcat(char *dest, const char *source) {
    char *ptr = dest;

    while (*ptr!='\0') {
        ptr++;
    }

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        source++;
    }

    *ptr = '\0'; 
    return dest;
}
