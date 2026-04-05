#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    temp = a;  // store a in temp
    a = b;     // assign b to a
    b = temp;  // assign temp to b

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}