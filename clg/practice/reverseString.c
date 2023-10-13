#include <stdio.h>

int main()
{
    int size = 20, i;
    printf("Enter the String (under 20 chars) : ");
    char str[size];
    gets(str);

    for (i = 0; str[i] != '\0'; i++);
    for (int j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
    puts(str);

    return 0;
}