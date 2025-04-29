// stringtoolkit.c
#include "stringtoolkit.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void to_uppercase(char str[]) {
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

void to_lowercase(char str[]) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int count_vowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

void reverse_string(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void sort_strings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

void reverse_words(char str[]) {
    char temp[1000], *words[100];
    int i = 0;

    strcpy(temp, str);

    char *token = strtok(temp, " ");
    while (token != NULL) {
        words[i++] = token;
        token = strtok(NULL, " ");
    }

    str[0] = '\0';  // Clear original string

    for (int j = i - 1; j >= 0; j--) {
        strcat(str, words[j]);
        if (j != 0) strcat(str, " ");
    }
}
