#include "strchr.h"

char *mystrchr(const char *str, int ch) {
    while (*str!='\0') {
        if ( *str== (char)ch) {
            return (char *)str;  
        }
        str++;
    }
return NULL;
}
