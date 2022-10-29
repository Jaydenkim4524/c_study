#파일 만들기
* 오늘은 파일에 대해 공부해볼 겁니다  
* 먼저 파일을 만드는 프로그램을 만들어 보죠(읽기 모드로 생성)
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp = fopen("file.txt","w");

	if (fp == NULL){
	  printf("파일이 없습니다");
	  exit(1);
	}

	fclose(fp);
	return 0;
}
```

