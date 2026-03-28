#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

#define RIGHT 1
#define LEFT 2
#define UP 3
#define DOWN 4
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
      srand(time(0));
      CONSOLE_CURSOR_INFO cursorInfo;
        GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
        cursorInfo.bVisible = FALSE;
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
   while(1){
   int dir=RIGHT;
   int width=20;
   int height=10;
   int x=width/2; //snake column
   int y=height/2; //snake row
   int foodX=rand() % (width-2)+1;
   int foodY=rand() % (height-2)+1;
   int tailX[100],tailY[100];
   int length=0;
   int score=0;
   int gameover=0;
  //game loop
   while(!gameover){ 

//input
if(kbhit()){ 
   char ch=getch();
   if(ch=='d'&& dir !=LEFT)
   dir=RIGHT;
   else if(ch=='a' && dir !=RIGHT)
   dir=LEFT;
   else if(ch=='w' && dir !=DOWN)
   dir=UP;
   else if(ch=='s' && dir !=UP)
   dir=DOWN;
   }
// save pervious position
   int prevX=x; 
   int prevY=y;
//move head
 if(dir == RIGHT)x++;
else if(dir == LEFT) x--;
else if(dir == UP)y--;
else if(dir == DOWN)y++;
//food logic
if(x==foodX&&y==foodY){ 
   foodX=rand() % (width-2)+1;
   foodY=rand() % (height-2)+1;
   length++;
   score++;
}
//update tail
for(int i = length - 1; i > 0; i--){
    tailX[i] = tailX[i-1];
    tailY[i] = tailY[i-1];
}

if(length > 0){
    tailX[0] = prevX;
    tailY[0] = prevY;
}
//self collision
for(int i = 0; i < length; i++){ 
    if(x == tailX[i] && y == tailY[i]){
        gameover=1;
    }
}
//wall collision
if(x == 0 || x == width-1 || y == 0 || y == height-1){
    gameover=1;
}
//draw
gotoxy(5,5);
 printf("Score: %d\n", score);
for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
        if(i==y && j==x)
        printf("O");//snake head
        else if(i==foodY && j==foodX)
        printf("@");
        else if(i==0||j==0||i==height-1||j==width-1)
        printf("#"); //border
        else{
            int istail = 0;

            for(int k=0;k<length;k++){
               if(i==tailY[k] && j==tailX[k]){
                     printf("o");
                     istail = 1;
                     break;
                   }
               }

               if(!istail)
                  printf(" ");
            }
        
      }
      printf("\n");
      }
   
   int speed = 300 - score * 5;
if(speed < 50) speed = 50;

Sleep(speed);
}
       system("cls");
printf("GAME OVER\n");
printf("Final Score: %d\n", score);
printf("Press any key to Restart OR Q to Quit...");

char ch = getch();

if(ch == 'q' || ch == 'Q'){
    break;   // exits outer while(1)
}}
   return 0;
} 