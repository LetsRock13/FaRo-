/* */


#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <stdbool.h>

#define M_PI 3.14159265358979323846

int menu(void);
void addition(void);
void subtraktion(void);
void division(void);
void multiplikation(void);
void wurzel(void);
void potenz(void);
void hilfe(void);
void cosinus(void);
void sinus(void);
void tangens(void);


char eingabe;

int main(void) {

        printf("\n\n\t\tWillkommen im Fa(Ro)²\n\n");
        hilfe();
        menu();

        return 0;

}

int menu(void) {

        while(true) {


                printf("Menu > ");
                scanf("%s", &eingabe);
                printf("\n");


                switch(eingabe) {

                        case '1': addition();
                        break;
                        case '2': subtraktion();
                        break;
                        case '3': multiplikation();
                        break;
                        case '4': division();
                        break;
                        case '5': wurzel();
                        break;
                        case '6': potenz();
                        break;
                        case '7': cosinus();
                        break;
                        case '8': sinus();
                        break;
                        case '9': tangens();
                        break;
                        case 'q': exit(EXIT_SUCCESS);
                        break;
                        case '0': hilfe();
                        break;
                        default: printf("Ihre Eingabe war nicht richtig,\nbitte versuchen Sie es erneut!\n");
                        break;

                }

        }
}


void hilfe() {

        printf("\n\n\t\t\tHilfe Menu\n\n");
        printf("\t\t<1> Addition\n");
        printf("\t\t<2> Subtraktion\n");
        printf("\t\t<3> Multiplikation\n");
        printf("\t\t<4> Division\n");
        printf("\t\t<5> Radizieren\n");
        printf("\t\t<6> Potenzieren\n");
        printf("\t\t<7> Cosinus\n");
        printf("\t\t<8> Sinus\n");
        printf("\t\t<9> Tangens\n");
        printf("\t\t<q> Beenden\n");
        printf("\t\t<0> Hilfe\n\n");

}

void addition() {
        double x;
        double y;
        double z;

        printf("\n\n\t\t\tSie haben die Addition gewaehlt!\n");
        printf("\t\t------------------------------------------------\n\n"); /*Anzahl Unterstriche 48*/

        printf("Bitte erste Zahl eingeben\n");
        printf("Erste Zahl >");
        scanf("%lf", &x);

        printf("Bitte die zweite Zahl eingeben\n");
        printf("Zweite Zahl >");
        scanf("%lf", &y);


        z = x + y;

        printf("Ihr Ergebnis lautet %.2f\n\n", z);

}

void subtraktion() {
        double x;
        double y;
        double z;

        printf("\n\n\t\t\tSie haben die Subtraktion gewaehlt\n");
        printf("\t\t------------------------------------------------\n\n");

        printf("\tBitte geben Sie die erste Zahl ein!\n\n");
        printf("Erste Zahl > ");
        scanf("%lf", &x);

        printf("\n\tBitte geben Sie die zweite Zahl ein!\n\n");
        printf("Zweite Zahl > ");
        scanf("%lf", &y);

        z = x - y;

        printf("\n\tIhr Ergebnis lautet %.2f\n\n", z);
}

void multiplikation() {
        double x;
        double y;
        double z;

        printf("\n\n\t\t\tSie haben die Multiplikation gewaehlt\n");
        printf("\t\t------------------------------------------------\n\n");

        printf("\tBitte geben Sie die erste Zahl ein!\n\n");
        printf("Erste Zahl > ");
        scanf("%lf", &x);

        printf("\tBitte geben Sie die zweite Zahl ein!\n\n");
        printf("Zweite Zahl > ");
        scanf("%lf", &y);

        z = x * y;

        printf("\n\tIhr Ergebnis lautet %.2f\n\n", z);
}


void division() {
        double x;
        double y;
        double z;

        printf("\n\n\t\t\tSie haben die Division gewaehlt\n");
        printf("\t\t------------------------------------------------\n\n");
        printf("\tBitte geben Sie die Erste Zahl ein!\n\n");
        printf("Erste Zahl > ");
        scanf("%lf", &x);

        printf("Bitte geben Sie die Zweite Zahl ein\n\n");
        printf("Zweite Zahl > ");
        scanf("%lf", &y);

        if(y == 0) {
                printf("\t\tFehler Division durch 0 ist nicht moeglich!\n\n");
        } else {
                z = x / y;
        }

        printf("\nIhr Ergebnis lautet %.2f\n\n", z);

}

void wurzel() {
        double x;
        double y;
        double z;

        printf("\n\n\t\t\tSie haben die Wurzelberechnung gewaehlt\n");
        printf("\t\t------------------------------------------------\n\n");

        printf("\tBitte geben Sie die Basis der Wurzel ein!\n\n");
        printf("Basis > ");
        scanf("%lf", &x);

        printf("\tBitte geben Sie den Exponenten der Wurzel ein\n\n");
        printf("Exponent > ");
        scanf("%lf", &y);

        if(x <= 0 ) {
                printf("\t\tFehler bei der Eingabe die Basis\n\t\tdarf nicht 0 oder kleiner 0 sein\n\n");
        } else if( y <= 0) {
                printf("\n\nFehler beid er Eingabe die Potenz\n\t\tdarf nicht 0 oder kleiner 0 sein\n\n");
        } else {
                z = pow(x, 1/y);
        }

        printf("\nIhr Ergebnis lautet %.2f\n\n", z);

}

void potenz() {
	double x;
	double y;
	double z;

	printf("\n\n\t\t\tSie haben die Potenzberechnung gewaehlt!\n");
	printf("\t\t------------------------------------------------\n\n");

	printf("\tBitte geben Sie die Basis der Potenz ein!\n\n");
	printf("Basis > ");
	scanf("%lf", &x);

	printf("\tBitte geben Sie den Exponenten ein!\n\n");
	printf("Exponent > ");
	scanf("%lf", &y);

	z = pow(x, y);

	printf("\nIhr Ergebnis lautet %.2f\n\n", z);

}

void tangens(void) {
	double x;
	double z;
	double tmp;

	printf("\n\t\t\tSie haben die  Tangensfunktion gewaehlt!\n");
	printf("\t\t------------------------------------------------\n\n");

	printf("\tBitte geben Sie den Winkel ein\n\n");
	printf("Winkel > ");
	scanf("%lf", &x);

	tmp = x / 180 * M_PI;

	z = tan(tmp);

	printf("\nIhr Ergebnis lautet %.2f\n\n", z);

}

void cosinus(void) {
	double x;
	double z;
	double tmp;

	printf("\n\t\t\tSie haben die  Cosinusfunktion gewaehlt!\n");
	printf("\t\t------------------------------------------------\n\n");

	printf("\tBitte geben Sie den Winkel ein\n\n");
	printf("Winkel > ");
	scanf("%lf", &x);

	tmp = x / 180 * M_PI;

	z = cos(tmp);

	printf("\nIhr Ergebnis lautet %.2f\n\n", z);

}

void sinus(void) {
	double x;
	double z;
	double tmp;

	printf("\n\t\t\tSie haben die  Sinusfunktion gewaehlt!\n");
	printf("\t\t------------------------------------------------\n\n");

	printf("\tBitte geben Sie den Winkel ein\n\n");
	printf("Winkel > ");
	scanf("%lf", &x);

	tmp = x / 180 * M_PI;

	z = sin(tmp);

	printf("\nIhr Ergebnis lautet %.2f\n\n", z);

}
