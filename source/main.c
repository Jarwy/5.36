#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int main(void)
{
	int q;

	printf("�n���ʪ��Фl�ơG");
	scanf_s("%d", &q);

	hanoi(q, '1', '2', '3');

	system("pause");
}

void hanoi(int q, char origin, char temp, char least)
{
	if (q == 1)
	{
		printf("%c -> %c\n", origin, least);
	}
	else
	{
		hanoi(q - 1, origin, least, temp);		//��1�W��q-1�ӺФl���ʨ�2
		printf("%c -> %c\n", origin, least);	//��1�W���j�Фl���ʨ�C
		hanoi(q - 1, temp, origin, least);		//��2�W��q-1�ӺФl���ʨ�A	
	}
}