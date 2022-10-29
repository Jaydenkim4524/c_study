#파일 만들기
* 오늘은 파일에 대해 공부해볼 겁니다  
* 먼저 파일을 만드는 프로그램을 만들어 보죠(읽기 모드로 생성)
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = fopen("file.txt", "w");

  if (fp == NULL) {
    printf("파일이 없습니다");
    exit(1);
  }

  fclose(fp);
  return 0;
}
```
* 문자 쓰기
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp;

  fp = fopen("CharOut.txt", "w");

  if (fp == NULL) {
    printf("파일이 없습니다");
    exit(1);
  }
  fputc('A', fp);
  fputc('B', fp);
  fputc('\n', fp);
  fputc(97, fp);
  fputc(98, fp);

  fclose(fp);
  return 0;
}
```
* 문자열
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = fopen("Stringfile.txt", "w");
  char str1[] = "Hello Coding";
  char str2[] = "안녕하세요 코딩입니다.\n";

  if (fp == NULL) {
    printf("파일이 없습니다");
    exit(1);
  }
  fputs("문자열을 출력합니다\n", fp);
  fputs(str1, fp);
  fputs("\n", fp);
  fputs(str2, fp);
  fclose(fp);
  return 0;
}
```
* sizeof이용하여 프로그램 만들기
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *in = fopen("Stringfile.txt", "r");
  char str1[30];
  char str2[30];
  char str3[30];

  if (in == NULL) {
    printf("파일이 없습니다");
    exit(1);
  }

  fgets(str1, sizeof(str1), in);
  fgets(str2, sizeof(str2), in);
  fgets(str3, sizeof(str3), in);

  puts(str1);
  printf("%s", str2);

  fputs(str3, stdout);
  fclose(in);
  return 0;
}
```
* scanf이용하여 파일 프로그램 만들기
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *out = fopen("Numberfile.txt", "w");
  int n, m;
  double d1, d2;

  if (out == NULL) {
    printf("파일이 없습니다");
    exit(1);
  }

  printf("정수 두개를 입력해주세요");
  scanf("%d %d", &n, &m);
  printf("실수를 두개 입력하세요");
  scanf("%lf %lf", &d1, &d2);

  printf("\n\n\n입력 받은 수들은 모두 출력되었습니다");
  printf(">>>>>>>>>>>>>>>>>\n");
  printf("왜 콘솔에서 찾으세요?");

  fprintf(out, "%d %d\n", n, m);
  fprintf(out, "%lf %lf\n", d1, d2);
  fclose(out);
  return 0;
}
```
* 입력해놓은 값을 콘솔로 불러오기
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *in = fopen("Numberfile.txt", "r");
  int n, m;
  double d1, d2;

  if (in == NULL) {
    printf("파일이 없습니다");
    exit(1);
  }

  printf("정수 두개를 입력합니다");
  fscanf(in, "%d %d", &n, &m);
  printf("실수를 두개를 입력하니다");
  fscanf(in, "%lf %lf", &d1, &d2);

  printf("\n입력 받은 수들은 모두 출력되었습니다\n");
  printf("%d %d\n", n, m);
  printf("%lf %lf\n", d1, d2);
  printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>\n");
  printf("어디서 입력 받았을까요?");

  fclose(in);
  return 0;
}
```
* 또 다른 프로그램
```c
#include <stdio.h>

int main(void) {
  int n, num;
  char *res, str[20];

  printf("문자 입력 : ");
  n = getchar();
  printf("n=%d\n", n);

  printf("문자열 입력 : ");
  res = gets(str);
  printf("res = %d\n", res);

  printf("형식 입력 : ");
  n = scanf("%d", &num);
  printf("n = %d", n);
  return 0;
}
```
* 그럼 끄ㅡㅡㅡㅡㅌ
