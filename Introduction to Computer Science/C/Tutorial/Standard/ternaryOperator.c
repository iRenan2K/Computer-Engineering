#include <stdio.h>

int findMax(int x, int y) {
    /* 
    
    instead of:
    
        if(x > y){
            return x;
        }
        else{
            return y;
        }

        use:

    */

   return (x > y) ? x : y;
}

int main() {
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? [value if true] : [value if false]

    int max = findMax(25, 36);
    printf("%d", max);

    return 0;
}