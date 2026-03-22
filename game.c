#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define RIGHT 1
#define LEFT 2
#define UP 3
#define DOWN 4
int main(){
   int dir=RIGHT;
   int width=20;
   int height=10;
   int x=width/2; //snake column
   int y=height/2; //snake row
   while(1){ //game loop
      system("cls");
   for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
        if(i==y&&j==x)
        printf("O");//snake head
        else if(i==0||j==0||i==height-1||j==width-1)
        printf("#"); //border
        else
            printf(" ");
    }
    printf("\n");
   }
   
if(kbhit()){
   char ch=getch();
   if(ch=='d')
   dir=RIGHT;
   else if(ch=='a')
   dir=LEFT;
   else if(ch=='w')
   dir=UP;
   else if(ch=='s')
   dir=DOWN;
   }

 if(dir == RIGHT)x++;
else if(dir == LEFT) x--;
else if(dir == UP)y--;
else if(dir == DOWN)y++;

if(x == width-1)x = 1;
if(x==0)x=width-2;
if(y == height-1)y = 1;
if(y==0)y=height-2;
   Sleep(300);
}
   return 0;
} 