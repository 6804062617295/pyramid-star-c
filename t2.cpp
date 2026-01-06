#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) { // for (int j = 0; j < i + 1; j++) for another way
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) { // for (int j = i; j < n; j++) for another way
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// also can change "*" and " " position to get inverted triangle