#include <stdio.h>

    int main(void)
{
    char name[20];
    int age;

    printf("I'm a bot. What's your name?\t");
    scanf("%s", name);
    printf("Hello, %s! How old are you?\t", name);
    scanf("%d", &age);
    printf("You are looking younger! I thought you are %d!\t", age - 3);
    return (0);
}