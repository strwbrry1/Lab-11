#include <stdio.h>
#include <Windows.h>

void Task1() {
	int n;
	int m;
	printf("N = ");
	scanf_s("%d", &n);
	printf("M = ");
	scanf_s("%d", &m);
	if (n > 9 || m > 9) {
		printf("Только цифры от 1 до 9!");
	}
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("%d%d ", i, j);
			}
			printf("\n");
		}
	}
}
void Task2() {
	int i = 1;
	int j = 1;
	do {
		do {
			printf("% 3d", i * j);
			i++;
		} while (i <= 10);
		printf("\n");
		i = 1;
		j++;
	} while (j <= 10);
}
void Task3() {
	int n;
	printf("Введите кол-во строк:");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}
//не придумал как решить(9((
//void Task4() {
//	int n;
//	printf("Введите кол-во строк:");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = )
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Вывести таблицу чисел MxN\n");
		printf("2: Вывести таблицу Пифагора\n");
		printf("3: Вывести узор из чисел\n");
		//printf("4: Вывести сложный узор из чисел\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		printf(">");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;
		}
	} while (n != 0);
}

