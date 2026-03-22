#include<stdio.h>
#include<windows.h>
# define RIGHT 1;
# define LEFT 2;
# define UP 3;
# define DOWN 4;

int main(){
   int dir=3;
   int width=20;
   int height=10;
   int x=width/2;
   int y=height/2;
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
   if(dir==1)
   x++;
   if(dir==2)
   x--;
   if(dir==3)
   y--;
   if(dir==4)
   y++;
   if(x==width-1)
   x=1;
   Sleep(500);
}
   return 0;
}