// ��������� �������� �� ������ ������������ �� ������� //
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "MyFunc.h" ///���������� ���� � ����� ��������//
int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int Ax, Bx, Cx, Dx, Ay, By, Cy, Dy;
	float det;
	printf("������� ���������� ����� A ������� AB: "); //������ ���������� ������ ��������//
	scanf_s("%d %d", &Ax, &Ay);
	printf("������� ���������� ����� B ������� ��: ");
	scanf_s("%d %d", &Bx, &By);
	printf("������� ���������� ����� C ������� CD: ");
	scanf_s("%d %d", &Cx, &Cy);
	printf("������� ���������� ����� D ������� CD: ");
	scanf_s("%d %d", &Dx, &Dy);
	det = (Dy - Cy) * (Bx - Ax) - (Dx - Cx) * (By - Ay); //������� ������������//
	if (intersection(Ax, Bx, Cx, Dx, Ay, By, Cy, Dy, det)) printf("������� ������������!\n"); //�������� ���� �������//
	else printf("������� �� ������������!\n");
	return 0;
}