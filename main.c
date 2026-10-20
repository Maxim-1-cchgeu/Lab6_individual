#include <stdio.h>
#include <locale.h>

#define CURRENT_YEAR 2026

int main()
{
    setlocale(LC_CTYPE, "RUS.UTF-8");

    int birth_year;
    puts("Введите год рождения: ");
    scanf("%d", &birth_year);
    int age = CURRENT_YEAR - birth_year;
    printf("Полный возраст: %d", age);
    
    return 0;
}