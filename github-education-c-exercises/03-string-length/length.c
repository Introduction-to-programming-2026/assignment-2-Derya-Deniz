#include <stdio.h>

int main(void)
{
    char s[100];
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    printf("%i\n", i);
}
