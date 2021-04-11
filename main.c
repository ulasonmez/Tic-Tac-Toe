#include<stdio.h>
#include<conio.h>
char dizi[10] = {'0','1','2','3','4','5','6','7','8','9'};
void board(){
	system("cls");
printf("Tic Tac Toe\n");
printf("1.oyuncu-X      2.oyuncu-O\n");
printf("---------------------\n");
printf("|      |      |      |\n");
printf("|  %c   |   %c  |   %c  |\n",dizi[1],dizi[2],dizi[3]);
printf("|      |      |      |\n");
printf("---------------------\n");
printf("|      |      |      |\n");
printf("|  %c   |   %c  |   %c  |\n",dizi[4],dizi[5],dizi[6]);
printf("|      |      |      |\n");
printf("---------------------\n");
printf("|      |      |      |\n");
printf("|  %c   |   %c  |   %c  |\n",dizi[7],dizi[8],dizi[9]);
printf("|      |      |      |\n");
printf("---------------------\n");
}
int win(){
	if(dizi[1]==dizi[2] && dizi[2]==dizi[3])
	return 1;
	else if(dizi[4]==dizi[5] && dizi[5]== dizi[6])
	return 1;
	else if(dizi[7]==dizi[8] && dizi[8]== dizi[9])
	 return 1;
	else if(dizi[1]==dizi[4] && dizi[4]== dizi[7])
	 return 1;
	else if(dizi[2]==dizi[5] && dizi[5]== dizi[8])
	return 1;
	else if(dizi[3]==dizi[6] && dizi[6]== dizi[9])
	 return 1;
	else if(dizi[1]==dizi[5] && dizi[5]== dizi[9])
	 return 1;
	else if(dizi[3]==dizi[5] && dizi[5]== dizi[7])
	return 1;
	else if(dizi[1]!='1' && dizi[2]!='2' && dizi[3]!='3' && dizi[4]!='4'&& dizi[5]!='5'&&dizi[6]!='6'&&dizi[7]!='7'&&dizi[8]!='8'&& dizi[9]!='9')
	 return 0;
	else
	 return -1;
}
int main(){
	board();
	char harf;
	int i=-1,player=1,c;
	while(i==-1){
		board();
		if(player%2==0){
			player = 2;
		}
			else{
			player = 1;
		}
		if(player == 1){
			harf = 'X';
		}
			else{
			harf = 'O';
		}
		printf("%d. oyuncu sayiyi girsin",player);
		scanf("%d",&c);
	if(c==1 && dizi[1]=='1'){
			dizi[1]=harf;
		}
		else if(c==2 && dizi[2]=='2'){
			dizi[2]=harf;
		}
		else if(c==3 && dizi[3]=='3'){
			dizi[3]=harf;
		}
		else if(c==4 && dizi[4]=='4'){
			dizi[4]=harf;
		}
		else if(c==5 && dizi[5]=='5'){
			dizi[5]=harf;
		}
		else if(c==6 && dizi[6]=='6'){
			dizi[6]=harf;
		}
		else if(c==7 && dizi[7]=='7'){
			dizi[7]=harf;
		}
		else if(c==8 && dizi[8]=='8'){
			dizi[8]=harf;
		}
		else if(c==9 && dizi[9]=='9'){
			dizi[9]=harf;
		}
		else{
			printf("Hatali sayi girdiniz.");
			player--;
			getch();
		}
	i = win();
	player++;
	}
	board();
	if(i==1){
		printf("\a%d. oyuncu kazandi",player-1);
	}
	else{
		printf("oyun berabere bitti");
	}
	getch();
	return 0;
}
