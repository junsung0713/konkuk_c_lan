#include <stdio.h>
#define size 100
#define asciiAlphabetStart 97
#define alphabetCount 26
int main(void){
    char word[size];
    int count[alphabetCount];
    printf("Enter string\n");
    scanf("%s",&word);
    for(int i = 0; i < alphabetCount; i++){
        count[i] = 0;
    }

    for(int i = 0; i<size; i++){
        printf("%c", word[i]);
        // if(word[i]>='a' && word[i] <= 'z'){
        //     count[word[i]-asciiAlphabetStart] += 1;
        // }
    }

    // for(int i = 0; i < 26; i++){
    //     printf("%c :%d ",asciiAlphabetStart+i,count[i]);
    // }
    // printf("\n");

    return 0;
}