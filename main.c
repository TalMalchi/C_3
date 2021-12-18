#include<stdio.h>
#define TXT 1024
#define WORD 30
#include "FuncDef.h"
#include <string.h>



char word[WORD + 1];
char txt[TXT + 1];

int main()
{


    int letter_in_word=0;
    char ch2;
    ch2= getchar();
    while (ch2!=' ' && ch2!='\t' && ch2!='\n'){
        word[letter_in_word]=ch2;
        ch2=getchar();
        letter_in_word++;
    }
    word[letter_in_word]='\0';
    int counter_letter_text=0;
    char ch;
    ch = getchar();
    while(ch!= '~'){
        txt[counter_letter_text]=ch;
        ch = getchar();
        counter_letter_text++;
    }


    Func1(word,txt);//gimetria
    Func2(word,txt);
    Func3(word,txt);

}