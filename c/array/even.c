#include<stdio.h>

int main() {
    int i, j, k, t;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ele = sizeof(a) / sizeof(a[0]);

    // Sorting the array in ascending order
    for(i = 0; i < ele-1; i++) {
        for(j = 0; j < ele-1-i; j++) {
            if(a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    // Printing the sorted array
    for(i = 0; i < ele; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Moving even numbers to the end of the array
    for(i = 0; i < ele; i++) {
        if(a[i] % 2 == 0) {
            for(j = i; j < ele-1; j++) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    // Sorting even numbers in ascending order
    for(i = 0; i < ele; i++) {
        if(a[i] % 2 == 0) {
            for(j = i; j < ele-1; j++) {
                for(k = i; k < ele-1; k++) { // Corrected the loop condition
                    if(a[k] > a[k+1]) {
                        t = a[k];
                        a[k] = a[k+1];
                        a[k+1] = t;
                    }
                }
            }
            // Printing the final array
            for(i = 0; i < ele; i++)
                printf("%d ", a[i]);
            return 0; // Added to terminate the program after printing the final array
        }
    }

    // If no even number is found, printing the original array
    for(i = 0; i < ele; i++)
        printf("%d ", a[i]);

    return 0;
}
