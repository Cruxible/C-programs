#include <time.h>
#include <stdio.h>
#include <windows.h> 
#include <conio.h>

int main()
{
 printf("This is the message before sleep() function");
 Sleep(1000); //1000 microsecond= 1 second will sleep...
 printf("This is the message after 1 second");
 getch();
 return 0;
}