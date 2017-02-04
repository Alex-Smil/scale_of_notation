#include <stdio.h>

#define IN 1
#define OUT 0



int main()
{
    int a, req_num, SN, fac, key;
    int mas[256], ind = 0;

    printf("enter required number in decimal system\n");
    scanf("%d",&a);
    req_num = a;

    printf("select the number system 2 or 8 or 16\n");
    while(SN != 2 && SN != 8 && SN != 16)//цыкл защиты от дурака
      {
       scanf("%d",&SN);
       if(SN != 2 && SN != 8 && SN != 16)
         printf("incorrect value, try again\n");
      }
    for( key = IN ; key != OUT; )//цикл поиска значений искомого числа
    {
      fac = a / SN;//ищем factor - множитель
      mas[ind] = a - (SN * fac);//полученное значение заносим в массив
      ind++;//листаем массив
      a = fac;//запоминаем множитель в качестве 'a' для нового поиска

    if(fac >= SN)//значит можно вычислить ещё одно значение искомого числа
      {
        fac = 0;//обнуляем множитель для нового поиска
      }
    else
      {
        key = OUT;//ключ для выхода из цикла поиска значений
        mas[ind] = fac;//запоминаем последний множитель в качестве
                       //последнего искомого значения
      }
    }
    //выводим первое введенное число в 10й системе
    printf("\nnumber %d in decimal system = ", req_num);

    //выводим ранее сохранённые значения в обратном порядке
    for( ; ind >= 0; ind--)
      {
        //таблица замены чисел на буквы для 16-ной сист.счисл.
        if(mas[ind] == 10)
          {
           printf("A");
           ind--;
          }
        else if(mas[ind] == 11)
          {
           printf("B");
           ind--;
          }
        else if(mas[ind] == 12)
          {
            printf("C");
            ind--;
          }
        else if(mas[ind] == 13)
          {
            printf("D");                                         
            ind--;
          }
        else if(mas[ind] == 14)
          {
            printf("E");
            ind--;
          }
        else if(mas[ind] == 15)
          {
            printf("F");
            ind--;
          }
        else
        printf("%d", mas[ind]);
      }
    //выводим систему счиления в которую перевели первое введенное число
    printf(" in %d system\n\n",SN);

    system("PAUSE");
    return 0;
}

