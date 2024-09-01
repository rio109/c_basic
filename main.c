#include <stdio.h>
#include <stdlib.h>

// 함수 프로토타입 선언
void testFunc(void);
void testPointer(void);
void testPointer2(void);

int main(void)
{
    printf("Your Program \n");
    testFunc();
    testPointer();
    testPointer2();
    return 0;
}

void testFunc(void){
    // char 자료형
    char c = 'A';         // 문자형 변수 선언 및 초기화
    printf("char: %c\n", c);  // 문자형 변수 출력

    // short 자료형
    short s = 32767;     // 짧은 정수형 변수 선언 및 초기화
    printf("short: %d\n", s); // 짧은 정수형 변수 출력

    // int 자료형
    int i = 2147483647;  // 기본 정수형 변수 선언 및 초기화
    printf("int: %d\n", i); // 기본 정수형 변수 출력

    // long 자료형
    long l = 2147483648L; // 긴 정수형 변수 선언 및 초기화 (4바이트 또는 8바이트 시스템에 따라 다름)
    printf("long: %ld\n", l); // 긴 정수형 변수 출력

    // long long 자료형
    long long ll = 9223372036854775807LL; // 매우 긴 정수형 변수 선언 및 초기화
    printf("long long: %lld\n", ll); // 매우 긴 정수형 변수 출력

    unsigned int a;
    a = 12341234;
    return;
}

void testPointer(void){
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] * pa[1];

    for (i = 0; i < 3; i++){
        printf("%5d", pa[i]);
    }
    return;
}

void testPointer2(void){
    int ary[3] = {10,20,30};
    int *pa = ary;
    int i;
    printf("array value : ");

    for (i = 0 ; i<3 ; i++){
        printf("%d \n",*pa);
        printf("%d \n",pa);
        pa++;
    }

    return; 
}