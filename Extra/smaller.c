#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("Smallest number is %d\n", a);
    } else {
        printf("Smallest number is %d\n", b);
    }
    return 0;
}
