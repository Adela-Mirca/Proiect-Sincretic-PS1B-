#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 5

int main(){
	int a[MAX][MAX], i, j, n = 0, m = 0, sp = 0, ss = 0, opt, min = 20, max = 0, min1 = 20, max1 = 0;
	srand(time(NULL));

	do
	{
		printf("0. Iesire. \n");
		printf("1. Crearea matricii. \n");
		printf("2. Suma elementelor de pe diagonala principala. \n");
		printf("3. Suma elementelor de pe diagonala secundara. \n");
		printf("4. Minimul si maximul elementelor aflate sub diagonala principala. \n");
		printf("5. Minimul si maximul elementelor aflate sub diagonala secundara. \n");
		printf("Optiunea aleasa: "); scanf("%d", &opt);

		switch (opt) {
		case 0:
			exit();
			break;
		case 1:
			n = rand() % (5 - 2) + 2;
			printf("n : %d", n);
			printf("\n");
			m = n;
			printf("m : %d", m);
			printf("\n");
			printf("Matricea: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					a[i][j] = rand() % (20 - 0) + 0;
				}

			for (i = 0; i < n; i++)
			{
				printf("\n ");
				for (j = 0; j < m; j++)
					printf("%d ", a[i][j]);
			}
			printf("\n ");
			printf("\n ");
			break;
		case 2:
			printf("Suma elementelor de pe diagonala principala este: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if (i == j)
					{
						sp = sp + a[i][j];
					}
			printf("%d", sp);
			printf("\n ");
			printf("\n ");
			break;
		case 3:
			printf("Suma elementelor de pe diagonala secundara este: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if (j + i == n - 1)
					{
						ss = ss + a[i][j];
					}
			printf("%d", ss);
			printf("\n ");
			printf("\n ");
			break;
		case 4:
			printf("Minimul: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if ((i > j) && (a[i][j] < min))
						min = a[i][j];
			printf("%d", min);
			printf("\n");
			printf("Maximul: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if ((i > j) && (a[i][j] > max))
						max = a[i][j];
			printf("%d", max);
			printf("\n");
			printf("\n ");
			break;
		case 5:
			printf("Minimul: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if (((i + j) > (n - 1)) && (a[i][j] < min1))
						min1 = a[i][j];
			printf("%d", min1);
			printf("\n");
			printf("Maximul: ");
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if (((i + j) > (n - 1)) && a[i][j] > max1)
						max1 = a[i][j];
			printf("%d", max1);
			printf("\n");
			printf("\n ");
			break;
		default:
			printf("Optiunea aleasa nu exista! \n");
			break;
		}
	} while (opt != 0);
	return 0;
}