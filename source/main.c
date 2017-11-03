#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int main(void)
{
	int q;

	printf("要移動的碟子數：");
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
		hanoi(q - 1, origin, least, temp);		//把1上的q-1個碟子移動到2
		printf("%c -> %c\n", origin, least);	//把1上的大碟子移動到C
		hanoi(q - 1, temp, origin, least);		//把2上的q-1個碟子移動到A	
	}
}