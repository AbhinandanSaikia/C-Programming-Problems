#include <stdio.h>
int main() {
    int n = 2, limit;
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    while (n <= limit) {
        printf("%d ", n);
        n += 2;
    }
    printf("\n");
    return 0;
}
