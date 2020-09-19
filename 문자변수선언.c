// #include <stdio.h>
// int main()
//   {
//     char c1 = 'a'; //문자로
//     char c2 = 98; //숫자로
//     char c3 = 0x63; //16진수로
//     printf("%c %d 0x%x\n",c1 ,c1, c1);
//     printf("%c %d 0x%x\n",c3 ,c3, c3);
//     printf("%c %d 0x%x\n",c2 ,c2, c2);
//   }
#include <stdio.h>
int main()
  {
    char c1 = '0'; // 문자 0을 뜻하고
    char c2 = 0; // 숫자 0을 뜻한다.
    char lf = '\n'; // 제어문자를 담을 수 있다.

    printf("%c %d %c",c1 ,c1, lf); // 문자로 나타날때는 0, 그리고 아스키코드로 48이 나오지만
    printf("%c %d %c",c2 ,c2, lf); // 아스키 코드로 0은 NULL을 뜻한다.
  }
