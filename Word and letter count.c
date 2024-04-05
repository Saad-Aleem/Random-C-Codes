#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *str, c;
    FILE *file_ptr;
    int letters, words = 0;

    file_ptr = fopen("empathy.txt", "r"); //add any file
    c = fgetc(file_ptr);

    while (c != EOF)
    {
        if ((c == ' ' || c == '\t' ||
         c == '\v' || c == '\f' || c == '\r' || c == '\n') && letters > 0){
            words++;
        }
        else if (c >= 65 && c <= 91 || c >= 97 && c <= 123 ){
            letters++;
        }
        c = fgetc(file_ptr);
    }
    
    fclose(file_ptr);
    if (letters == 0){
        printf("Total number of letters = %d\nTotal number of words = %d\n", letters, words);
    }
    else{
        printf("Total number of letters = %d\nTotal number of words = %d\n", letters, words + 1);
    }

    return 0;
}
