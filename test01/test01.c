#include<stdio.h>
#include<string.h>

int main(void) {

	FILE* rfp,* wfp;
	char str[250];

	rfp = fopen("c://sample//win.ini", "r");
	wfp = fopen("c://sample//data4.txt", "w");

	for (;;) {
		fgets(str, 250, rfp);
		if (feof(rfp)) {
			break;
		}
		else {
			fputs(str, wfp);
		}

	}

	fclose(rfp);
	fclose(wfp);

	return 0;


}