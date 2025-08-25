#include <stdio.h>

/* #include "strlen.h"

int main() {
    const char *text = "Shnorhakalutyun!";
    int length = my_strlen(text);

    printf("Length of string: %d\n", length);

    return 0;
}

#include "strcpy.h"

int main() {
    char source[] = "Hallo Mery";
    char dest[100]; 

    my_strcpy(dest, source);

    printf("Source: %s", source);
    printf("Copied: %s", dest);

    return 0;
}

#include "strcat.h"

int main() {
    char str1[100] = "Hi ";
    char str2[] = "Mery";

    my_strcat(str1, str2);

    printf("Appended: %s\n", str1);

    return 0;
}


#include "strcmp.h"

int main() {
    const char *str1 = "apple";
    const char *str2 = "apricot";

    int result = my_strcmp(str1, str2);

    if ( result == 0) {
        printf("Strings are equal\n");
    } else if (result< 0) {
        printf("'%s' is less than '%s'\n", str1, str2);
    } else {
        printf("'%s' is greater than '%s'\n", str1, str2);
    }

    return 0;
}


#include "strchr.h"

int main() {
    const char *str = "Hi Mery";
    char ch = 'a';

    char *result = mystrchr(str, ch);

    if (result != NULL) {
        printf("First occurrence of '%c': %s\n", ch, result);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}


#include "strstr.h"

int main() {
    const char *haystack = "Hi mery!";
    const char *needle = "mer";

    char *result = my_strstr(haystack, needle);

    if (result != NULL) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}


#include "strrchr.h"

int main() {
    const char *str = "Hallo mery";
    char ch = 'a';

    char *result = mystrrchr(str, ch);

    if (result != NULL) {
        printf("Last occurrence of '%c': %s\n", ch, result);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
