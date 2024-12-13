#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char password[100];
    int length, has_uppercase = 0, has_lowercase = 0, has_digit = 0;
    
    printf("パスワードを入力してください : ");
    scanf("%99s", password);
    
    length = strlen(password);
    
    for (int i = 0; i < length; i++)
    {
        if (isupper(password[i])) has_uppercase = 1;
        if (islower(password[i])) has_lowercase = 1;
        if (isdigit(password[i])) has_digit = 1;
    }
    
    if (length >= 8 && has_uppercase && has_lowercase && has_digit)
    {
        printf("このパスワードは強いです！\n");
    }
    
    else
    {
        printf("このパスワードは弱いです。以下を改善してください。\n");
        if (length < 8) printf("・パスワードは８文字以上にしてください。\n");
        if (!has_uppercase) printf("・パスワードに大文字を含めてください。\n");
        if (!has_lowercase) printf("・パスワードに小文字を含めてください。\n");
        if (!has_digit) printf("・パスワードに数字を含めてください。\n");
    }
    
    return 0;
}
