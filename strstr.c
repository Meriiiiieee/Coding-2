#include "strstr.h"

char *mystrstr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return (char *)haystack;  
    }

    while (*haystack != '\0') {

        while (*haystack && *needle && *haystack == *needle) {
            haystack++;
            needle++;
        }

        if (*needle == '\0') {
            return (char *)haystack;  
        }

        haystack++;
    }

    return NULL;
}
