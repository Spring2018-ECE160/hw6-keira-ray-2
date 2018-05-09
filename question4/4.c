#include <stdio.h>

struct{
    int points;
}class[] = {
    {-5},
    {-4},
    {-3},
    {-2},
    {-1},
    {0},
    {1},
    {2},
    {3},
    {4},
    {5}
};

int main(){
    int i;
    int y;
    int a, b, c;

    printf("Please Enter Value of a:");
    scanf("%d", &a);
    printf("Please Enter Value of b:");
    scanf("%d", &b);
    printf("Please Enter Value of c:");
    scanf("%d", &c);
    for(i=0; i<11;i++){
        y = a*class[i].points*class[i].points+b*class[i].points+c;
        printf("%d\t %d\t\n", class[i].points, y);
   
    }
    
    return 0;
}
