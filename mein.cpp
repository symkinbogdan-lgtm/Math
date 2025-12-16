#include <iostream>

int readNumber() {
    int x;
    printf("Введіть ціле число: ");
    scanf("%d", &x);
    return x;
}

void writeAnswer(int result) {
    printf("Результат: %d\n", result);
}

int main() {
    int a = readNumber();
    int b = readNumber();
    int sum = a + b;
    writeAnswer(sum);

    return 0;
}
