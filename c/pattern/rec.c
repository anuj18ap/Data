#include <stdio.h>

void printStars(int count);
void printPattern(int n, int current);

int main() {
    int n = 5; 
    printPattern(n, 1);
    return 0;
}


void printStars(int count) {
    if (count == 0) {
        
        printf("\n");
        return;
    }
    printf("*");
    
    printStars(count - 1);
}

void printPattern(int n, int current) {
    if (current > n) {
       
        return;
    }
    printStars(current);
    printPattern(n, current + 1);
}
