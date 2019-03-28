#include<stdio.h>
#include<stdlib.h>
#include"add.h"



//funkcja_wstawiania(char slowo[7]);
//funkcja_sortowania(int zew,int wew,int tab[10],int temp);
main()
{
int k =10;
printf("wartosc k przed wszystkim %d\n",k);
int i = 0;
char slowo[7];
int zew;
int wew;
int temp =0;
int tab[7];
//printf(" wartosc k deklarowana to  %d\n",k);
efekt_trucizny(&k);
printf(" wartosc k w funkcji manu po wywolaniu %d\n",k);
#include"add.h"
/************************************************/
funkcja_wstawiania(slowo);//wprowadzasz slowo//
printf(" \nto jest lista czyli slowo do skonwrtowania na liczby \n");

while(i<7)
{
  tab[i]=slowo[i];

  printf(" %d --- %c\n",tab[i],tab[i]);
  i++;
}
/*************************************************/
funkcja_sortowania(zew,wew,tab,temp);


for(i=0;i<7;i++) //wyswietla luczby
{
    printf("\n %d --- %c",tab[i],tab[i]);
    //printf("%c\t\t\n",liczba[i]);
}
#include"add.h"
return 0;
}
/*********************************************/
funkcja_wstawiania(char slowo[])

{

    puts("wstaw 1 slowo do 7 znakow");


    {
    gets(slowo);

    }
return;

}
/*********************************************/
funkcja_sortowania(int zew,int wew,int tab[7],int temp)
{

    for(zew =0;zew<6;zew++)
    {
      for(wew=zew;wew<7;wew++)
        {
         if(tab[zew]>tab[wew])
            {
              temp=tab[zew];
              tab[zew]=tab[wew];
              tab[wew]=temp;
            }

        }
    }


return;


}
int efekt_trucizny(int *w){
w -=5;
printf(" wartosc *w w funkcji %d\n",w);
return w;


}





