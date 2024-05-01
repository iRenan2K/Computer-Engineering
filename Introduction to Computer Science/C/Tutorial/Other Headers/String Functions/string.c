#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Renan";
    char string2[] = "Rodrigues";

    strlwr(string1);                                        // converts a string to lowercase
    // strupr(string1);                                        // converts a string to uppercase

    // strcat(string1, string2);                               // appends string2 to end of string1
    // strncat(string1, string2, 1);                           // appends n characters from string2 to string1

    // strcpy(string1, string2);                               // copy string2 to string 1
    // strncpy(string1, string2, 2);                           // copy n characters of string 2 to string 1

    // strset(string1, '?');                                   // sets all characters of a string to a given character
    // strnset(string1, 'x', 1);                               // sets first n characters of a string to a given character

    // strrev(string1);                                        // reverses a string

    printf("\n%s", string1);



    int result = strlen(string2);                          // returns string length as int

    // int result = strcmp(string1, string2);                  // compare all characters
    // int result = strncmp(string1, string2, 1);              // compare first n characters

    // int result = strcmpi(string1, string2);                 // compare all characters (ignore case)
    // int result = strnicmp(string1, string2, 2);             // compare first n characters (ignore case)

    printf("\n%d\n", result);



    /*
    if(result == 0){
        printf("These strings are the same!");
    }
    else{
        printf("These strings are NOT the same!");
    }
    */

    return 0;
}