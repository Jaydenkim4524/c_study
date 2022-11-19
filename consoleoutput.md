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
