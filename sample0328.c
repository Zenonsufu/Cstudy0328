#include<stdio.h>
#include<string.h>

int main(void) {

	/*

	char str[100];
	char* p;

	printf("���ڿ��� �Է��Ͻʽÿ� : ");
	scanf("%s", str);

	int len = strlen(str);

	p = str;	// �迭 str�� �ּҸ� ������ ���� p�� ����

	printf("������ ����ϸ� : ");

	for (int i = 0; i < len; i++) {

		printf("%c", *(p + len - (i + 1)));
	}
	printf("\n");

	return 0;

	

	char str[30];	// ���� �迭 ����
	FILE* rfp;	// ���� ������ ���� ����

	rfp = fopen("c://sample//data1.txt", "r");

	fgets(str, 30, rfp);

	printf("���Ͽ��� �о�� ���ڿ��� : ");
	puts(str);

	fclose(rfp);

	return 0;

	

	char str[250];
	FILE* rfp;
	rfp = fopen("c://sample//win.ini", "r");

	for (;;) {
		fgets(str, 250, rfp);
		if (feof(rfp)) {
			break;
		}
		else {
			printf("%s", str);	// ������ ���� �ƴϸ� ���� ������ ���
		}
	}
	fclose(rfp);

	return 0;

	

	FILE* rfp;
	int sum = 0;
	int in;	// ���Ͽ��� �о�� ������ ����

	rfp = fopen("c://sample//data2.txt", "r");

	for (int i = 0; i < 5; i++) {
		fscanf(rfp, "%d", &in);

		sum += in;
	}

	printf("����==> %d\n", sum);

	fclose(rfp);
	return 0;

	*/

	char str[25];
	FILE* wfp;

	wfp = fopen("c://sample//data3.txt", "w");

	printf("���ڿ��� �Է��Ͻʽÿ�(�ִ� 24��) : ");
	
	gets(str);

	fputs(str, wfp);

	fclose(wfp);

	return 0;


	


}