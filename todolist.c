#include <stdio.h>

int main() {
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    char ch, prev = '\n';

    while ((ch = fgetc(input)) != EOF) {
        charCount++;
        if (ch == '\n') {
            lineCount++;
        }
        if ((ch == ' ' || ch == '\n' || ch == '\t') && prev != ' ' && prev != '\n' && prev != '\t') {
            wordCount++;
        }
        prev = ch;
    }

    if (charCount > 0) {
        lineCount++;
        wordCount++;
    }

    fprintf(output, "Character count: %d\nWord count: %d\nLine count: %d\n", charCount, wordCount, lineCount);

    fclose(input);
    fclose(output);

    printf("Counting completed. Check 'output.txt' for the results.\n");

    return 0;
}
