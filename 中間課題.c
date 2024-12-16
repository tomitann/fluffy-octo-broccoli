#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

// パスワードの強さをチェックする関数
void checkPasswordStrength(const char *password) {
    int hasUpper = 0; // 大文字が含まれているか
    int hasLower = 0; // 小文字が含まれているか
    int length = strlen(password); // パスワードの長さ

    // パスワード内の文字を1つずつ確認
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        }
        if (islower(password[i])) {
            hasLower = 1;
        }
    }

    // 判定と改善点の表示
    if (length >= MIN_LENGTH && hasUpper && hasLower) {
        printf("強いパスワードです！\n");
    } else {
        printf("パスワードは強くありません。\n改善点:\n");
        if (length < MIN_LENGTH) {
            printf("パスワードを%d文字以上にしてください。\n", MIN_LENGTH);
        }
        if (!hasUpper) {
            printf("パスワードに大文字を含めてください。\n");
        }
        if (!hasLower) {
            printf("パスワードに小文字を含めてください。\n");
        }
    }
}

int main() {
    char password[100];

    printf("パスワードを入力してください。 ");
    scanf("%99s", password); // パスワードを入力

    checkPasswordStrength(password); // パスワードの強さを確認

    return 0;
}