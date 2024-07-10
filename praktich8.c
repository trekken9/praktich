#include <stdio.h>
#include <string.h>

// Функція для обчислення факторіала
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    char word[15];  // Макс. довжина слова - 14, плюс 1 для нульового символу
    unsigned long long anagrams = 0;
    int letter_count[256] = {0};  // Масив для підрахунку кількості кожної букви

    printf("Введіть слово: ");
    scanf("%14s", word);

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        letter_count[(int)word[i]]++;
    }

    anagrams = factorial(length);

    for (int i = 0; i < 256; i++) {
        if (letter_count[i] > 1) {
            anagrams /= factorial(letter_count[i]);
        }
    }

    printf("Кількість анаграм: %llu\n", anagrams);

    return 0;
}
