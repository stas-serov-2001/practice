//Программа отвечает на вопрос пересекаются ли отрезки//
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int Ax, Bx, Cx, Dx, Ay, By, Cy, Dy;
	float det, Ua, Ub;
	printf("Введите координаты точки A отрезка AB:");          //Вводим координаты концов отврезков//
	scanf_s("%d %d", &Ax, &Ay);
	printf("Введите координаты точки B отрезка AB:");          
	scanf_s("%d %d", &Bx, &By);
	printf("Введите координаты точки C отрезка CD:");         
	scanf_s("%d %d", &Cx, &Cy);
	printf("Введите координаты точки D отрезка CD:");         
	scanf_s("%d %d", &Dx, &Dy);
	det = (Dy - Cy)*(Bx - Ax) - (Dx - Cx)*(By - Ay);        //Находим определитель//
		if (det == 0)                                               //Проверяем равен ли определить 0//
		{
			printf("Отрезки не пересекаются!\n");
			return 0;
		}
	Ua = ((Dx - Cx)*(Ay - Cy) - (Dy - Cy)*(Ax - Cx))/det; //Находим координаты  Ua и Ub//
	Ub = ((Bx - Ax)*(Ay - Cy) - (By - Ay)*(Ax - Cx))/det;
	if (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1) printf("Отрезки пересекаются!\n");
	else printf("Отрезки не пересекаются!\n");
	return 0;
}