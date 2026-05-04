#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문자열 입력 받아서 거꾸로 출력하는 함수
char *solution(const char *my_string)
{
    int len = strlen(my_string);
    char *answer = (char *)malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++)
    {
        answer[i] = my_string[len - 1 - i];
    }
    answer[len] = '\0';
    return answer;
}