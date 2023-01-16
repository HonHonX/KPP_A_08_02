#include<stdio.h>
#include<string.h>

//Funktions Prototypen

//Hauptprogramm
int main () {
	/*
	* Nach der Eingabe soll der entsprechende Wochentag ausgegeben werden.
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *  Wochentage            * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Speichern der Wochentagen in einen Array
	char* wochentage[7];
	wochentage[0]= "Montag";
	wochentage[1]= "Dienstag";
	wochentage[2]= "Mittwoch";
	wochentage[3]= "Donnerstag";
	wochentage[4]= "Freitag";
	wochentage[5]= "Samstag";
	wochentage[6]= "Sonntag";
	
	//Abfrage nach dem gesuchten Wochentag
	int tag;
	printf("\nBitte geben Sie den gewünschten Wochentag ein: ");
	scanf("%d",&tag);
	if (tag>0&&tag<8)
		printf("Der %d. Tag der Woche ist der %s.\n",tag,wochentage[tag-1]);
	else
		printf("Die Eingabe war leider ungültig. Bitte geben Sie eine Zahl von 1-7 an.\n");
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
