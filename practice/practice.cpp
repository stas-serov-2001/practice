//��������� �������� �� ������ ������������ �� �������//
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int Ax, Bx, Cx, Dx, Ay, By, Cy, Dy;
	float det, Ua, Ub;
	printf("������� ���������� ����� A ������� AB:");          //������ ���������� ������ ���������//
	scanf_s("%d %d", &Ax, &Ay);
	printf("������� ���������� ����� B ������� AB:");          
	scanf_s("%d %d", &Bx, &By);
	printf("������� ���������� ����� C ������� CD:");         
	scanf_s("%d %d", &Cx, &Cy);
	printf("������� ���������� ����� D ������� CD:");         
	scanf_s("%d %d", &Dx, &Dy);
	det = (Dy - Cy)*(Bx - Ax) - (Dx - Cx)*(By - Ay);        //������� ������������//
		if (det == 0)                                               //��������� ����� �� ���������� 0//
		{
			printf("������� �� ������������!\n");
			return 0;
		}
	Ua = ((Dx - Cx)*(Ay - Cy) - (Dy - Cy)*(Ax - Cx))/det; //������� ����������  Ua � Ub//
	Ub = ((Bx - Ax)*(Ay - Cy) - (By - Ay)*(Ax - Cx))/det;
	if (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1) printf("������� ������������!\n");
	else printf("������� �� ������������!\n");
	return 0;
}