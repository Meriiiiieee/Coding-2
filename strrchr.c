#include "strrchr.h"

char *mystrrchr(const char *str, char ch) {
    const char *last = NULL;

    while (*str != '\0') {
        if (*str == ch) {
            last = str;  
        }
        str++;
    }
return NULL;
}
