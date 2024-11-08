#include <stdio.h>

int main()
{
    int diff;
    char large;//大文字
    char small;//小文字
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c",&small);
    diff='A'-'a';   //'A'と'a'との文字の差
    large=small+diff; //大文字に変換
    printf("大文字は%c 小文字は%c\n",large,small);
    

    return 0;
}