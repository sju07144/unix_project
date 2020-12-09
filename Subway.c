#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>


int main() {
	const char* START = "Gongneung";

	int stationCount = 0;
	char YesNo;
	char destination[100][50];
	char dest[50];

	while (1) {
		printf("여기는 공릉역입니다. 시물레이선을 돌리시겠습니까?(Y/N)");
		scanf("%c", &YesNo);

		if (YesNo == 'N') {
			exit(1);
		}
		else if (YesNo == 'Y') {
			printf("도착할 역 이름을 영어로 입력해주세요.");
			scanf("%s", dest);
			while (getchar() != '\n');
			strcpy(dest, destination[stationCount++]);

		}
		else {
			printf("Y 또는 N으로 다시 입력해주세요.");
			while (getchar() != '\n');
			continue;
		}

	}

}

