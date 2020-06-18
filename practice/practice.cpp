// Программа отвечает на вопрос пересекаются ли отрезки //
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "MyFunc.h" ///Подключаем файл с нашей функцией//
int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int Ax, Bx, Cx, Dx, Ay, By, Cy, Dy;
	float det;
	printf("Введите координаты точки A отрезка AB: "); //Вводим координаты концов отрезков//
	scanf_s("%d %d", &Ax, &Ay);
	printf("Введите координаты точки B отрезка АВ: ");
	scanf_s("%d %d", &Bx, &By);
	printf("Введите координаты точки C отрезка CD: ");
	scanf_s("%d %d", &Cx, &Cy);
	printf("Введите координаты точки D отрезка CD: ");
	scanf_s("%d %d", &Dx, &Dy);
	det = (Dy - Cy) * (Bx - Ax) - (Dx - Cx) * (By - Ay); //Находим определитель//
	if (intersection(Ax, Bx, Cx, Dx, Ay, By, Cy, Dy, det)) printf("Отрезки пересекаются!\n"); //Вызываем нашу функцию//
	else printf("Отрезки не пересекаются!\n");
	return 0;
}