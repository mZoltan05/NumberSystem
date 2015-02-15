#include <stdio.h>
#include <math.h>
int main(void)
{
	int szam,szamr,i = 0,b,eredmc[10];	 //szám , számrendszer
	char eredm[10],a; 			//eredmény
		int szamr2;
for (i = 0; i < 10; i++) eredmc[i] = 0;
	i = 0;
		printf("Adja meg a kiindulási számrendszert(Basic (number) System)\n\t");	
		scanf("%d", &szamr2);
		if(szamr2 > 10){ szam = at(szamr2);}else{
	printf("Adja meg a konvertálni kívánt számot(Number)\n\t");
	scanf("%d", &szam);}
	printf("Adja meg a kívánt számrendszert(Target (number) System)\n\t");
	scanf("%i", &szamr);
		do{
			if((szam % szamr) > 9){
				b = szam % szamr;
				a = convert(b);
				eredm[i] = a;	
				eredmc[i] = 1;
			}else{
				b = szam % szamr;
				eredm[i] = b;                        
			}
			szam = szam / szamr;
						//printf("szam: %d\t",szam);		
			i++;
		}while(szam != 0);
i--;
printf("\n\t");
for (i;0 <= i;i--){
	if(eredmc[i] == 1){
		printf("%c", eredm[i]);
	}else
	printf("%d", eredm[i]);	
}
printf("\n");
}
int convert(int szam){
switch(szam){
case 10: return 'a';break;
case 11: return 'b';break;
case 12: return 'c';break;
case 13: return 'd';break;
case 14: return 'e';break;
case 15: return 'f';break;
case 16: return 'g';break;
case 17: return 'h';break;
case 18: return 'i';break;
case 19: return 'j';break;
}
}
int at(int szamr2 )
{
int kar[10],l,i = 0,re = 0;
getchar(); 					//a kezdő számrendszer megadásakor egy enterrel zárul, ezt "nyeli el" 
printf("Adja meg a konvertálni kívánt számot\n\t");
for(l = 0;l < 10;l++){
	kar[l] = getchar();
						//printf("%d-",kar[l]);
	if(kar[l] == 10){kar[l] = 0;break;} 	//ha a beérkező karakter egy *enter* akkor befejezi a ciklust
	else{kar[l] = conv(kar[l]);} 
						//printf("%d-",kar[l]);
}
int kar2[l];
for(i = 0; i < l;i++){kar2[i] = kar[i];		/*printf("[%d]",kar2[i])*/}
i = 0 ;

re = 0;
for(l = l-1;l >= 0;l--){
	re += kar2[l]*pow(szamr2,i);
	i++;
						//printf("((%d))",re);
}
return re;
}//
int conv(int szam){				//átkonvertálja a karaktereket decimális számrendszerbe
switch(szam){
case 48: return 0;break;
case 49: return 1;break;
case 50: return 2;break;
case 51: return 3;break;
case 52: return 4;break;
case 53: return 5;break;
case 54: return 6;break;
case 55: return 7;break;
case 56: return 8;break;
case 57: return 9;break;
case 97: return 10;break;
case 98: return 11;break;
case 99: return 12;break;
case 100: return 13;break;
case 101: return 14;break;
case 102: return 15;break;
}
}
