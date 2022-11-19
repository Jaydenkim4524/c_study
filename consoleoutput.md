# Console output 콘솔
* 콘솔로 말하기 - DEV C++이나 VS코드로 가능  
* 인터넷 프로그램은 불가능
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x, y;
	COORD pos = {40,12};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("Hello C3 coding");
	getch();
	
	return 0;
}
```
* 콘솔의 커서위치 바꾸기
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x, y;
	COORD pos = {1,0};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	
	pos.X=10;
	pos.Y=2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	
	pos.X=20;
	pos.Y=5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	
	pos.X=40;
	pos.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	
	pos.X=40;
	pos.Y=24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	
	return 0;
}
```
* 조금 더 편리해진 커서 위치 정하기.. 하지만 아직도 부족하다..
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x, y;
	COORD pos;
	
	do
	{
		pos.X=0;
		pos.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
		printf("커서의 위치를 입력하세요");
		scanf("%d %d",&pos.X, &pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
		printf("?");
	} while (pos.X <= 80 && pos.Y <= 24);
	
	return 0;
}
```
* 아직 뭔가 부족하다.. 내 마음대로 바꿔보아야지
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x, y;
	COORD pos;
	COORD pos1;
	system("mode con:cols=50 lines=25");
	
	do
	{
		pos.X=0;
		pos.Y=0;
		pos1.X=0;
		pos1.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("<-: 커서 시작위치(%d, %d)",pos.X,pos.Y);
		printf("커서의 위치를 입력하세요");
		scanf("%d %d",&pos.X, &pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
		printf("                                                      ");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("<-: 커서 위치(%d, %d)",pos.X,pos.Y);
	} while (pos.X <= 50 && pos.Y <= 20);
	
	return 0;
}
```
* 너무 빠르니 딜레이를 줘보자
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void GotoXY(int x, int y);
void delay(int n){
	clock_t start=clock();
	while(clock()-start<n*1000);
}
int main(){
	int i;
	int j;
	
	do{
		GotoXY(0,0);
		printf("%d",i);
		delay(1);
		i++;
	} while (1);
	return 0;
}

void GotoXY(int x, int y){
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
```
* clock() 만들어 해결하자!!
* 10씩 증가할때마다 오른쪽으로 움직이기
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void GotoXY(COORD pos);
void delay(int n){
	clock_t start=clock();
	while(clock()-start<n*1000);
}
int main(){
	int i;
	int j;
	COORD pos;
	pos.X=20;
	pos.Y=4;
	do{
		GotoXY(pos);
		printf("%d",i);
		pos.X+=200;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		delay(1);
		i+=10;
	} while (i<=100);
	return 0;
}

void GotoXY(COORD pos){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
```
