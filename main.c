#include <stdio.h>
#include "stringtoolkit.h"

int main() {
    char str1[100] = "Hello World";
    char str2[100] = "Reverse this string";
    char arr[3][100] = {"Banana", "apple", "Cherry"};

    printf("Original: %s\n", str1);
    to_uppercase(str1); 
    printf("Uppercase: %s\n", str1);
    to_lowercase(str1);
    printf("Lowercase: %s\n", str1);
    printf("Vowels: %d\n", count_vowels(str1));

    reverse_string(str1);
    printf("Reversed: %s\n", str1);

    printf("\nOriginal words: %s\n", str2);
    reverse_words(str2);
    printf("Reversed words: %s\n", str2);
    printf("\nOriginal strings:\n");
    for (int i = 0; i < 3; i++) printf("%s\n", arr[i]);

    sort_strings(arr, 3);
    printf("Sorted strings:\n");
    for (int i = 0; i < 3; i++) printf("%s\n", arr[i]);

    return 0;
}
