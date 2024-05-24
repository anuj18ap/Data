#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[] = "Anuj Prajapati";
    char a[200];
    printf("Enter old string: ");
    scanf("%s", a);

    char a1[200];
    printf("Enter new string: ");
    scanf("%s", a1);

    char *p = strstr(s, a); 
    if (p == NULL) {
        printf("Substring not found in the string.\n");
        return 1;
    }

    int old_len = strlen(a);
    int new_len = strlen(a1);
    int diff = new_len - old_len;

    char *temp = malloc(strlen(s) + diff + 1); 
        printf("Memory allocation failed.\n");
        return 1;
    }

   
    strncpy(temp, s, p - s);
    temp[p - s] = '\0'; 

    strcat(temp, a1);
    strcat(temp, p + old_len);

    strcpy(s, temp); 
    printf("Modified string: %s\n", s);

    free(temp); 
        return 0;
}
