#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

system("cls");

    float n1, n2;
    char op;
    double total, seno, coss, ang, rad,radic, raiz;

        printf("\n******************************************************");
        printf("\nBem vindo a sua calculadora inteligente, Ccalculator!");
        printf("\n******************************************************");
        printf("         \nSelecione uma das opcoes abaixo: ");

        printf("                   \na) Soma");
        printf("                   \nb) Subtracao");
        printf("                   \nc) Divisao");
        printf("                   \nd) Multiplicacao");
        printf("                   \ne) Potencia");  
        printf("                   \nf) Seno");
        printf("                   \ng) Cosseno");
        printf("                   \nh) Raiz Quadrada");
        printf("                   \ni) Sair");

        printf("\ndigite qual destas operacoes voce deseja realizar: ");
        scanf("%c", &op);

            switch (op)
            {
            case 'a':
            {
                printf("\ndigite o primeiro numero: ");
                scanf("%f", &n1);
                printf("\ndigite o segundo numero: ");
                scanf("%f", &n2);

                printf("\n%.2f + %.2f = %.2f", n1,n2, n1 + n2);

                
            }
                 break;
        
            case 'b':
            {
                printf("\ndigite o primeiro numero: ");
                scanf("%f", &n1);
                printf("\ndigite o segundo numero: ");
                scanf("%f", &n2);

                printf("\n%.2f - %.2f = %.2f", n1,n2, n1 - n2);
            }
                break;

            case 'c':
            {
                printf("\ndigite o primeiro numero: ");
                scanf("%f", &n1);
                printf("\ndigite o segundo numero: ");
                scanf("%f", &n2);

                

                printf("\n%.0f", n1);
                printf("\n--- = %.2f", n1 / n2);
                printf("\n%.0f", n2);
        
                
            }
                break;
               
            case 'd':
            {
                printf("\ndigite o primeiro numero: ");
                scanf("%f", &n1);
                printf("\ndigite o segundo numero: ");
                scanf("%f", &n2);

                printf("\n%.2f x %.2f = %.2f", n1,n2, n1 * n2);
            }
                break;

            case 'e':
            {
                
                printf("\ndigite o numero da base: ");
                scanf("%f", &n1);
                printf("\ndigite o numero do expoente: ");
                scanf("%f", &n2);


                total = pow(n1, n2);
                printf("\na potencia cuja base eh %.0f e expoente %.0f, eh igual a: %.0f", n1,n2, total);
            }
                break;

            case 'f':
            {
                printf("\ndigite um angulo: ");
                scanf("%lf", &ang);

                rad =  3.14  * (ang/180.0);

                seno = sin(rad); 

                printf("\nSeno de %.0lf = %.2lf", ang, seno);
            }
                break;

            case 'g':
            {
                printf("\ndigite um angulo: ");
                scanf("%lf", &ang);

                rad =  3.14  * (ang/180.0);

                coss = cos(rad); 

                printf("\nCosseno de %.0f = %.2f", ang, cos);
            }
                break; 

            case 'h':
            {
                printf("\ndigite o radicando: ");
                scanf("%lf", &radic);

                raiz = sqrt(radic);

                printf("nA raiz de %.0f eh: %.2f", radic, raiz);
            }
                break ;

            case 'i':
            {
                printf("\nfim dos calculos por hoje!");
                break;
            }
            }

            
























    return 0;
}