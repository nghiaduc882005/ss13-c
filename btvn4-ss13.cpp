#include<stdio.h>
#include<string.h>

int print_longest_string(char* string) {
    int size = strlen(string);
    int i, j, k;
    int max_length = 0; //do dai lon nhat
    int current_length; //do dai hien tai
    int start_position = 0; //vi tri bat dau
    for (i = 0; i < size; i++) {
        int appeared[256] = { 0 };
        current_length = 0;
        for (j = i; j < size; j++) {
            if (appeared[string[j]] == 0) {
                appeared[string[j]] = 1;
                current_length++;
            }
            else {
                break;
            }
        }
        if (current_length > max_length) {
            max_length = current_length;
            start_position = i;
        }
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ", max_length);
    for (k = start_position; k < start_position + max_length; k++) {
        printf("%c", string[k]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    print_longest_string(str);
    return 0;
}
