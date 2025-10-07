#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, consonant = 0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // check for alphabet
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // check if NOT a vowel
            if(!(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                 ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')) {
                consonant++;
            }
        }
    }

    printf("Number of consonants = %d\n", consonant);
    return 0;
}


