#include <stdio.h>

int main() {
    char signalColor;
    int time;

    printf("Enter the signal color (R/Y/G): ");
    scanf(" %c", &signalColor);
    printf("Enter the time (e.g. for 11pm: 2200, for 3am: 0300): ");
    scanf("%d", &time);
    if (signalColor == 'R') {
        if (time >= 2200 || time < 600) {
            printf("Stop, but night caution\n");
        } else {
            printf("Stop and wait\n");
        }
    } else if (signalColor == 'Y') {
        printf("Get Ready\n");
    } else if (signalColor == 'G') {
        printf("Go\n");
    } else {
        printf("Invalid Signal\n");
    }
    return 0;
}
