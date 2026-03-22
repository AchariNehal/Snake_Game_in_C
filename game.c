#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
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
   srand(time(0));
   int foodX=rand() % (width-2)+1;
   int foodY=rand() % (height-2)+1;
   while(1){ //game loop
      system("cls");
   for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
        if(i==y && j==x)
        printf("O");//snake head
        else if(i==foodY && j==foodX)
        printf("@");
        else if(i==0||j==0||i==height-1||j==width-1)
        printf("#"); //border
        else
            printf(" ");
    }
    printf("\n");
   }
   
if(kbhit()){ //keyboard movement
   char ch=getch();
   if(ch=='d'&& dir !=LEFT)
   dir=RIGHT;
   else if(ch=='a' && dir !=RIGHT)
   dir=LEFT;
   else if(ch=='w' && dir !=UP)
   dir=UP;
   else if(ch=='s' && dir !=DOWN)
   dir=DOWN;
   }

 if(dir == RIGHT)x++;
else if(dir == LEFT) x--;
else if(dir == UP)y--;
else if(dir == DOWN)y++;

if(x==foodX&&y==foodY){
   foodX=rand() % (width-2)+1;
   foodY=rand() % (height-2)+1;
}

if(x == 0 || x == width-1 || y == 0 || y == height-1){
    printf("GAME OVER\n");
    Sleep(2000);
    break;
}
   Sleep(300);
}
   return 0;
} 