#include <stdio.h>
#define MAX 100000
void pop(void);
void push(int data);

int arr[MAX], top = -1;

int main()
{
	int input, data, sum = 0;
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++)
	{
		scanf_s("%d", &data);
		if (data != 0)
			push(data);
		else
			pop();
	}
	for (int i = 0; i <= top; i++)
		sum += arr[i];
	printf("%d", sum);
	return 0;
}

void pop(void)
{
	if (top < 0)
		return;
	arr[top--] = 0;
}

void push(int data)
{
	if (top == MAX - 1)
		return;
	arr[++top] = data;
}

/*
top�� -1�� �����ϰ� push�ϸ� ���������ڷ� �ؼ�
�Է��� �޾��� �� push �Լ� ȣ�� �� �ϸ� top�� �� �ε��� �� �����ϰ� �� �Ŷ�
arr �ε��� �� ������ ó���� �� 
*/