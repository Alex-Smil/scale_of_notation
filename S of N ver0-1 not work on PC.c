# include <stdio.h>

#define IN 1
#define OUT 0


int main()
{
    int a, fac, sub, res, NN = 2;
    int basic_cicle = IN, search_fac_and_res = IN;
    int mas[256], ind;
    
    
    scanf("%d",&a);// ��������� ����� � 10� �������
    ind = 0;
    for(; basic_cicle != OUT; )//�������� ����
    {
    //���� ������ ��������� (fac) � �������� ����� � �������� ������� (res)
      for(; search_fac_and_res != OUT;)
       {
        if(sub == a)// ���� ���������� ����� a
          {
           res = a - sub;
           mas[ind] = res;//���������� res � ������[ind]
           ind++;//��������� �� �������. ������ �������
           a = fac;//��������� ��������� ��������� (fac)
           search_fac_and_res = OUT;//������� �� ����� ������ ��������� (fac) 
							       //� ������ �� �������� ����� � �������� ������� (res)
          }
        else if(sub > a)//��� ���������� ������ > a
          {
           fac--; //���� ��������� ��������� �� 1 (fac - 1)
           sub = NN * fac;
           res = a - sub;
           mas[ind] = res;//���������� res � ������[ind]
           ind++;//��������� �� �������. ������ �������
           a = fac;//��������� ��������� ��������� (fac)
           search_fac_and_res = OUT;//������� �� ����� ������ ��������� (fac)
								   //� ������ �� �������� ����� � �������� ������� (res)
          }
        else//���� ��������� ������ < a , �� ���� ����� ���������, ���� ��� ��������
          {
           fac++;
           sub = NN * fac;//��������� ����������
          }
       }
//�������� ����� ��������� (fac) � ������ �� �������� ����������� ����� (res)

//���� ��������� ������ ������� ���������, �� ���� ����������� ���������
//��� ���� �������� ����������� �����
    if(fac >= NN)
      {
       fac = 0;//����� �������� ��������� fac
       sub = 0;//����� �������� ����������� sub
       search_fac_and_res = IN;//���� ��� ����� � ���� ������ ��������� (fac)
							  // � ����� �� �������� ����� � �������� ������� (res)
       basic_cicle = IN;//���� ��� ����� � �������� ����
      }
    else
     {
      mas[ind] = fac;//���������� ��������� ��������� � ��������
					//����� �� �������� ����� � �������� ������� (res)
      search_fac_and_res = OUT;//���� ��� ������ �� ����� ������ ��������� (fac)
							  //� ������ �� �������� ����� � �������� ������� (res)
      basic_cicle = OUT;//���� ��� ������ �� ��������� �����
     }
    }
//���������� ������� �������� �������, � �������� �������
    for( ; ind >= 0; ind--)
    printf("%d ",mas[ind]);

    printf("\n");
    //system("PAUSE");//�������� ��� windows 7

    return 0;
}

