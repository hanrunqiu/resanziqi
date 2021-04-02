#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"




void game()
{
	int ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		//�����һ��
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		Computermove(board, ROW, COL);
		//������һ��
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");

	}
	else
	{
		printf("ƽ��\n");
	}
}


void menu()
{
	printf("***************************************************\n");
	printf("*****1   ��                0    ����      *********\n");
	printf("***************************************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�Ƴ���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;

		}

	} while (input);
}


int main()
{
	test();
	return 0;
}