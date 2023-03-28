#include<stdio.h>
#include<string.h>

int main(void) {

	/*

	char str[100];
	char* p;

	printf("문자열을 입력하십시오 : ");
	scanf("%s", str);

	int len = strlen(str);

	p = str;	// 배열 str의 주소를 포인터 변수 p에 대입

	printf("역으로 출력하면 : ");

	for (int i = 0; i < len; i++) {

		printf("%c", *(p + len - (i + 1)));
	}
	printf("\n");

	return 0;

	

	char str[30];	// 문자 배열 선언
	FILE* rfp;	// 파일 포인터 변수 선언

	rfp = fopen("c://sample//data1.txt", "r");

	fgets(str, 30, rfp);

	printf("파일에서 읽어온 문자열은 : ");
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
			printf("%s", str);	// 파일의 끝이 아니면 읽은 내용을 출력
		}
	}
	fclose(rfp);

	return 0;

	

	FILE* rfp;
	int sum = 0;
	int in;	// 파일에서 읽어올 숫자의 변수

	rfp = fopen("c://sample//data2.txt", "r");

	for (int i = 0; i < 5; i++) {
		fscanf(rfp, "%d", &in);

		sum += in;
	}

	printf("합은==> %d\n", sum);

	fclose(rfp);
	return 0;

	*/

	char str[25];
	FILE* wfp;

	wfp = fopen("c://sample//data3.txt", "w");

	printf("문자열을 입력하십시오(최대 24자) : ");
	
	gets(str);

	fputs(str, wfp);

	fclose(wfp);

	return 0;


	


}