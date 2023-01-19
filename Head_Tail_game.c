#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void out()
{   printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t|                                     |\n");
    printf("\t|                OUT !!!              |\n");
    printf("\t|                                     |\n");
    printf("\t|_____________________________________|\n\n\n");}
void player_win()
{   printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t|                                     |\n");
    printf("\t|             YOU WIN !!!             |\n");
    printf("\t|                                     |\n");
    printf("\t|_____________________________________|\n\n\n");}
void c_win()
{   printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t|                                     |\n");
    printf("\t|           computer win !!!          |\n");
    printf("\t|                                     |\n");
    printf("\t|_____________________________________|\n\n\n");}
void draw()
{   printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t|                                     |\n");
    printf("\t|             match draw !!!          |\n");
    printf("\t|                                     |\n");
    printf("\t|_____________________________________|\n\n\n");}
void target_p(int player,int target,int computer)
{
    printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t         Player total run = %d        \n",player);
    printf("\t            Target was = %d           \n",target);
    printf("\t        Computer total run = %d       \n",computer);
    printf("\t|_____________________________________|\n\n\n");
}
void target_c(int computer,int target,int player)
{
   printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t         Computer total run = %d      \n",computer);
    printf("\t            Target was = %d           \n",target);
    printf("\t          Player total run = %d       \n",player);
    printf("\t|_____________________________________|\n\n\n");
}
int pbatting() {
system("color 6");int n,lower=1,upper=6,u,sum=0;
  while(1)
  { printf("you : ");
  scanf("%d",&u);
  if(u>=1 && u<=6){
  srand(time(NULL));
  n=(rand()%(upper-lower+1))+lower;
  if(u==n)
  { printf("Computer : %d\n",n);
    system("color c0");
    out();
    break;}
  else
   { printf("computer : %d\n",n);
    sum+=u;
    printf("total run = %d\n\n",sum);}}
    else
        printf("hit right way(1 to 6)");
    }
    return sum;
 }
void cls(void){getch();system ("cls");}

int cbatting(int target){system("color 4");
system("color 0c");
  int sum1=0;
   while(1)
  {printf("you : ");
int u,n,upper=6,lower=1;  scanf("%d",&u);
if(u>=1 && u<=6)
  {srand(time(NULL));
  n=(rand()%(upper-lower+1))+lower;
  if(u==n)
  { printf("computer : %d\n",n);
    system("color c0");
   out();
    break;}
  else
   {printf("computer : %d\n",n);
    sum1+=n;
    printf("total run : %d\n\n",sum1);
    if(sum1>=target)
    break;}}
    else
        printf("hit right way(1 to 6)");
    }
    return sum1;
 }
//2nd part
int ball(){
system("color 6");int n,lower=1,upper=6,u,sum=0;
  while(1)
  { printf("you : ");
  scanf("%d",&u);
  if(u>=1 && u<=6){
  srand(time(NULL));
  n=(rand()%(upper-lower+1))+lower;
  if(u==n)
  { printf("computer : %d\n",n);
    system("color c0");
    out();
    break;}
  else
   { printf("computer : %d\n",n);
    sum+=n;
    printf("total run = %d\n\n",sum);}}
    else
        printf("hit right way(1 to 6)");
    }
    return sum;
 }
int bat(int target){
    system("color 4");
   system("color 0c");
  int sum1=0;
   while(1)
  {printf("you : ");
int u,n,upper=6,lower=1;  scanf("%d",&u);
if(u>=1 && u<=6){
  srand(time(NULL));
  n=(rand()%6)+1;
  if(u==n)
  { printf("Computer : %d\n",n);
    system("color c0");
    out();
    break;}
  else
   {printf("computer : %d\n",n);
    sum1+=u;
    printf("total run : %d\n\n",sum1);
    if(sum1>=target)
    break;}}
else
  printf("hit right way(1 to 6)");
    }
    return sum1;
 }
void play(){
printf("\t ******press any button to start****** \n");
cls();system("color f5");
printf("\n\n\t\ _____________________________________ \n");
    printf("\t|      _____  ___   ____   ____       |\n");
    printf("\t|        |   |   | |      |           |\n");
    printf("\t|        |   |   | !---|  !---|       |\n");
    printf("\t|        |   |___| ____|  ____|       |\n");
    printf("\t|_____________________________________|\n\n\n");
 int t,a=1,w;
 printf("\n\t------------  \t\t   ------------\n");
    printf("\t| 0. head  |  \t\t   | 1. tail  |\n");
    printf("\t------------  \t\t   ------------\n\n\n");
  while(a)
  {scanf("%d",&t);
      if(t==0)
    {printf("\n\t  \t      you  choose");
        printf("\n\t\t      -----------\n");
    printf("\t\t      | 0. head |\n");
    printf("\t\t      -----------\n");a=0;
        break;}
  else if(t==1)
    {printf("\n\t  \t      you  choose");
        printf("\n\t\t      -----------\n");
    printf("\t\t      | 1. tail |\n");
    printf("\t\t      -----------\n");
        break;}
   else
    printf("try again with valid option\n");}
    cls();srand(time(NULL));w=rand()%2;
   if(t==w)
    {system("color a0");
        printf("\n\t\t  --------------------\n");
    printf("\t\t  | you won the toss |\n");
    printf("\t\t  --------------------\n");int b=1;
    printf("\n\n\t------------  \t\t   ------------\n");
    printf("\t|  0. bat  |  \t\t   | 1. ball  |\n");
    printf("\t------------  \t\t   ------------\n\n\n");
    while(1){scanf("%d",&b);
   if(b==0)
    {   system("color 6");
        printf("\n\t  \t      you  choose");
        printf("\n\t\t      -----------\n");
    printf("\t\t      | 0. bat  |\n");
    printf("\t\t      -----------\n");cls();
    printf("Your Batting ->\n\n");
        int player=pbatting();
        printf("your total run %d\n",player);cls();
        int target=player+1;
        printf("\t\t   target %d\n\n",target);
        printf("\t\tnow computer turn : \n\n");
        int computer=cbatting(target);
        printf("computer total run %d\n",computer);cls();system("color 50");
         target_p(player,target,computer);cls();
    if(player>computer)
        {system("color 20");player_win();cls();}
    else if(player<computer)
        {system("color 40");c_win();cls();}
    else
        {system("color 0f");draw();cls();}
        break;}
  else if(b==1)
    {system("color 4");
    printf("\n\t  \t      you  choose");
        printf("\n\t\t      -----------\n");
    printf("\t\t      | 1. ball |\n");
    printf("\t\t      -----------\n");cls();
    printf("\t\t Computer Batting ->\n\n");
    int computer=ball();
    printf("computer total run %d",computer);cls();
        int target=computer+1;
        printf("\t\ttarget %d\n\n",target);
        printf("\t\tnow player turn : \n\n");
        int player=bat(target);
        printf("player total run %d\n",player);cls();system("color 50");
     target_c(computer,target,player);cls();
    if(player>computer)
        {system("color 20");player_win();cls();}
    else if(player<computer)
        {system("color 40");c_win();cls();}
    else
        {system("color 0f");draw();cls();}
    break;}
   else
    printf("try again with valid option\n");
    }}
   else
    {system("color c0");
    printf("\t\t   You loss the toss\n\n");
    srand(time(NULL));int d=rand()%2;
     if(d==0)
      {printf("\t\tComputer choose to bat\n\n");
       int computer=ball();
       printf("computer total run = %d\n",computer);cls();
        int target=computer+1;
        printf("\t\t   Target %d\n",target);
        printf("\t\tNow player turn : \n\n");
        int player=bat(target);
        printf("player total run %d\n",player);cls();system("color 50");
     target_c(computer,target,player);cls();
    if(player>computer)
        {system("color 20");player_win();cls();}
    else if(player<computer)
        {system("color 40");c_win();cls();}
    else
        {system("color 0f");draw();cls();}}
    else if(d==1)
      {printf("\t\tcomputer choose to ball\n\n");
      printf("Your Batting ->\n\n");
      int player=pbatting();
      printf("player total run %d\n",player);
      cls();
        int target=player+1;
        printf("\t\t    Target %d\n",target);
        printf("\t\t Now computer turn : \n\n");
        int computer=cbatting(target);
        printf("computer total run %d\n",computer);cls();
    system("color 50");
    target_p(player,target,computer);cls();
    if(player>computer)
        {system("color 20");player_win();cls();}
    else if(player<computer)
        {system("color 40");c_win();cls();}
    else
        {system("color 0f");draw();cls();}}}}
int main()
{int n,v=1;
printf("\n\n\t\ _____________________________________ \n");
    printf("\t|                                     |\n");
    printf("\t|   *                             *   |\n");
    printf("\t|      Welcome to HEAD TAIL Game      |\n");
    printf("\t| *  *                           *  * |\n");
    printf("\t|_____________________________________|\n\n\n");
    while (v) {system("color 30");
printf("\n\n\t------------  \t\t   ------------\n");
    printf("\t| 0. exit  |  \t\t   | 1. play  |\n");
    printf("\t------------  \t\t   ------------\n\n\n");
        scanf("%d", &n);
        if (n == 0) {
            v = 0;
        } else if (n == 1) {
            play();

        } else {
            printf("enter valid value\n");
        }
    }
}
