#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: ./a.out filename line_no. \n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp==0) {
        printf("File not found..\n");
        return 1;
    }

    int num = atoi(argv[2]);
    char ch[200];
    char *s[200]; 
    int c = 0, i = 0;
    while (fgets(ch, sizeof(ch), fp) != NULL) 
    {   
        s[c]=(char*)malloc((strlen(ch)+1));
        strcpy(s[c],ch); 
       c++;
    }
    fclose(fp);


    printf("Deleting line: %s", s[num - 1]);

   
    free(s[num - 1]);   
    for (i = num - 1; i < c - 1; i++) {
        s[i] = s[i + 1];
    }
    c--; 
  
    fp = fopen(argv[1], "w");
  
    for (i = 0; i < c; i++) {
        fputs(s[i], fp);
        free(s[i]);     }

    fclose(fp);

    printf("Line %d deleted successfully.\n", num);
    return 0;
}
