#include <stdio.h>

int main() {
    int n = 5;

    // Version 1: Using printf only
    printf("*****\n");
    printf(" *** \n");
    printf("  *  \n");
    printf(" *** \n");
    printf("*****\n");

    /*
    // Version 2: Using loops (commented out)
    // Upper half
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) printf(" ");
        for(int j = 0; j < 2*(n-i)-1; j++) printf("*");
        printf("\n");
    }
    // Lower half
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) printf(" ");
        for(int j = 0; j < 2*i+1; j++) printf("*");
        printf("\n");
    }
    */

    return 0;
}