#include <stdio.h>
#include <locale.h>//русский язык
#include <stdlib.h>
#include <stdbool.h>// для bool


#define  size 10;


int getLength(char* string);

int main(void)
{
    setlocale(LC_ALL, "Russian");//русский язык
    
    Umn();
    ChetNechet();
    VoprToVoskl();
    Stepen();

    return 0;
}

int getLength(char* string)
{
    int l = 0;
    while (string[l] != 0)
    {
        l++;
    }
    return l;
}
int Umn()
{
    
    /*while (true)
    {*/
        setlocale(LC_ALL, "Russian");
        int a = 0;
        int b = 0;
        int result = 0;
        printf("Введите число А: ");
        scanf_s("%i", &a);
        printf("\nВведите число В: ");
        scanf_s("%i", &b);

        for (int i = 0; i < b; i++) { result = result + a; }

        printf("Произведение: %i\n", result);
    //}
    return 0;
}
int ChetNechet()
{
    /*while (true)
    {*/
        int array[10];
        int a = 0;

        for (int i = 0; i < 10; i++)
        {
            printf("Введите число: ");
            int b = 0;
            scanf_s("%i", &b);
            array[i] = b;
        }

        for (int i = 0; i < 10; i++)
        {
            printf("%i ", array[i]);
            if (array[i] % 2 == 0) a++;
        }

        printf("\nВсего четных символов: %i\n",a);

        return 0;
    //}


}
int VoprToVoskl()
{
    char str[5];
    gets(str);
    char str1[10];
    for (int i = 0; i < 10; i++)
    {
        if (str[i] == '?')
        { str1[i] = '!'; }
        else { str1[i] = str[i]; }
    }
    printf("%s\n", str1);
    return(0);
}
int Stepen()
{
    /*while (true)
    {*/
        setlocale(LC_ALL, "Russian");
        int a = 0;
        int b = 0;
        int result = 0;

        printf("Введите число А: ");
        scanf_s("%i", &a);
        int c = a;

        printf("\n Введите степень В: ");
        scanf_s("%i", &b);

        for (int i = 1; i < b; i++) 
        {
            a *= c;
        }

        printf("Результат возведения в степень: %i \n", a);
    //}
    return 0;
}