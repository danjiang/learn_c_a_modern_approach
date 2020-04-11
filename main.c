#include <stdio.h>

void reverse() {
    int a[10] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31}; // 数组初始化
    int size = (int)(sizeof(a) / sizeof(a[0])); // sizeof 确定数组大小
    int b[size]; // C99 中非常量指定数组的长度
    for (int i = 0; i < size; ++i) {
        b[i] = a[size - i - 1];
    }
    for (int j = 0; j < size; ++j) {
        printf("%d ", b[j]);
    }
    printf("\n");
}

void sum() {
    int a[5] = {3, 0, 3, 4, 1};
    int size = (int)(sizeof(a) / sizeof(a[0]));
    int sum = 0, *p;
    for (p = a; p < a + size; p++) {
       sum += *p;
    }
    printf("sum = %d\n", sum);
}

int main() {
    reverse();
    sum();
    return 0;
}
