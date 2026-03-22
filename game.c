#include<stdio.h>
#include<windows.h>
int main(){
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
  x++;
  if(x == width-1)
    x = 1;
   Sleep(500);
}
   return 0;
}