#include <stdio.h>

int main() {
    int a, num, count = 0;
    scanf("%d", &a);

    int i, j;
    for (i = a; i != 0; i--) {
        scanf("%d", &num);
        //소수 검사
        for (j = 2; j < num; j++) {
            if (num % j == 0)
                break;
        }
        if (j == num)
            count++;
    }
    printf("%d\n", count);
    return 0;
}