// #include <stdio.h>

// int main(void){
//     char char1;
//     scanf("%c",&char1);
//     switch (char1){
//         case 'a':
//             printf("%c는 모음입니다",char1);
//             break;
//         case 'e':
//             printf("%c는 모음입니다",char1);
//             break;
//         case 'i':
//             printf("%c는 모음입니다",char1);
//             break;
//         case 'o':
//             printf("%c는 모음입니다",char1);
//             break;
//         case 'u':
//             printf("%c는 모음입니다",char1);
//             break;
//         default:
//             printf("%c는 자음입니다",char1);
//     }
//     return 0;
// }

#include <stdio.h>

int main(void){
    char char1;
    scanf("%c",&char1);
    if(char1 == 'a'){     printf("%c는 모음입니다",char1);}
    else if(char1 == 'e'){printf("%c는 모음입니다",char1);}
    else if(char1 == 'i'){printf("%c는 모음입니다",char1);}
    else if(char1 == 'o'){printf("%c는 모음입니다",char1);}
    else if(char1 == 'u'){printf("%c는 모음입니다",char1);}
    else {
        printf("%c는 자음입니다",char1);
    }
    return 0;
}