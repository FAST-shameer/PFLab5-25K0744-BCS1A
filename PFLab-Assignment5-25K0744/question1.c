#include <stdio.h>
#include <ctype.h>

int main() {
    char usrChar;
    int vowelCount = 0;
    int consonantCount = 0;
    for (int i = 0; i < 3; i++) {
        scanf(" %c", &usrChar);
        switch (tolower(usrChar)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowelCount++;
                break;
            default:
                consonantCount++;
                break;
        }
    }
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}
