#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int escolha;
    printf("Escolha o exercicio: ");
    scanf("%i",&escolha);

    switch(escolha) {
        case 1:
            ex01();
            break;
        
         case 2:
            ex02();
            break;
         case 3:
            ex03();
            break;

         case 4:
            ex04();
            break;

         case 5:
            ex05();
            break;

         case 6:
            ex06();
            break;

         case 7:
            ex07();
            break;

         case 8:
            ex08();
            break;

         case 9:
            ex09();
            break;

         case 10:
            ex10();
            break;

        default: 
        printf("Escolha invalida.");
    }
    return 0;
}
//Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.

int ex01() {
int n;

printf("Digite um numero inteiro: ");
scanf("%i",&n);

if(n%2==0) {
    printf("O numero e par.");
}
    else {
        printf("O numero e impar");
    }

}

int ex02() {
/* Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, 
uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso 
contrario.*/

    float n1,n2,n3,media;
    char nome[20];

    printf("Digite o seu nome: ");
    scanf("%s",&nome);
    fflush(stdin);

    printf("Digite suas tres notas, respectivamente: ");
    scanf("%f%f%f",&n1,&n2,&n3);

    media=(n1+n2+n3)/3;

    if(media>=6) {
        printf("Aluno %s, sua media e %.2f, voce esta APROVADO",nome, media);
    }   

    else {
        printf("Aluno %s, sua media e %.2f, voce esta REPROVADO",nome, media);
    }

}

int ex03() {
//Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.

float temperatura;

printf("Digite a temperatura da agua: ");
scanf("%f",&temperatura);

if (temperatura<=0) {
    printf("Estado solido!");
}
else {
    if (temperatura>0 && temperatura<=100){
        printf("Estado liquido");
    }
else {
    printf("Estado gasoso");
}
}
}

int ex04() {
/*Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de uma mensagem de erro. */

int x,y;

printf("Digite o valor de X: ");
scanf("%i",&x);

if(x<0) {
    y=pow(x,2)+4;
    printf("Valor de y: %i",y);
}
    else {
        if (x>0){
            y=pow(x,3)-3;
            printf("Valor de y: %i",y);
        }
    else {
        printf("ERRO");
    }
    }
}

int ex05()
{
    /*Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor
deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.*/

    int a,b,c,maior,menor,inter;

    printf("Digite os valores de A,B,C, respectivamente: ");
    scanf("%i%i%i",&a,&b,&c);
 if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    if (c > maior) {
        inter = maior;
        maior = c;
    } else {
        if (c < menor) {
            inter = menor;
            menor = c;
        } else {
            inter = c;
        }
    }

    printf("Valor de A: %i",menor);
    printf("Valor de B: %i",inter);
    printf("Valor de C: %i",maior);
}

int ex06()
{
    /*Desenvolver um algoritmo que leia três números inteiros: X, Y, Z  e verifique se o número X é divisível por Y e por Z.
    O algoritmo deverá mostrar as possíveis mensagens:
    - o número é divisível por Y e Z.
    - o número é divisível por Y mas não por Z.
    - o número é divisível por Z mas não por Y.
    - o número não é divisível nem Y nem por Z.*/

    int x,y,z,resto1,resto2;


    printf("Digite os valores de x,y e z, respectivamente: ");
    scanf("%i%i%i",&x,&y,&z);

    resto1=x%z;
    resto2=x%y;


    if(resto1==0 && resto2==0)
    {
        printf("O numero e divisivel por Y e Z");
    }
    else
    {
        if (resto1!=0 && resto2==0)
        {
            printf("O numero e divisivel por Y mas nao por Z");
        }
        else
        {

            if (resto1==0 && resto2!=0)
            {
                printf("O numero e divisivel por Z mas nao por Y");
            }
            else
            {
                printf("O numero nao e divisivel por Y nem por Z");
            }
        }
    }
}

int ex07()
{
    /*O numero 3025 possui a seguinte característica:
    30 + 25 = 55
    552 = 3025
    Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele
    possui ou não esta característica.*/


int n,resto,quociente,soma,total;

printf("Digite um numero de 4 digitos: ");
scanf("%i",&n);

quociente=n/100;
printf("Quociente: %i",quociente);
resto=n%100;
printf("Resto: %i",resto);
soma=quociente+resto;
printf("Soma: %i",soma);
total=pow(soma,2);
printf("Total: %i",total);

if (n==total) {
    printf("O numero tem esta caracteristica.");
}
else {
    printf("O numero nao tem esta caracteristica.");
}
}

int ex08() {
    /* ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista : 
221 Bernardo 
211 Eustáquio 
311 Luiz 
312 Mário 
332 Artur*/

int codigo;

printf("Digite o codigo correspondente ao nome desejado: ");
scanf("%i",&codigo);

if (codigo == 221) {
    printf("Bernardo");
}
else {
    if (codigo ==211) {
        printf("Eustaquio");
    }
    else {
        if (codigo==311) {
            printf("Luiz");
        }
        else {
            if (codigo == 312) {
                printf("Mario");
            }
            else {
                if (codigo==332) {
                    printf("Artur");
                }
            else {
                printf("Codigo invalido");
            }
             }}}}
}

int ex09() {

/*Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. 
Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo.    
*/

int n1,n2,n3,n4,n5,total,total1,total2,total3,n;

printf("Digite um numero de 5 digitos: ");
scanf("%i",&n);

n1=n/10000; //primeiro digito
n2=(n/1000)%10; //segundo digito
n3=(n/100)%10; // terceiro digito
n4=n2; //quarto digito
n5=n1; //quinto digito


total1=(n1*10)+n2; //primeiro e segundo digito
total2=(total1*10)+n3; //segundo e terceiro digito
total3=(total2*10)+n4; //terceiro e quarto digito
total=(total3*10)+n5; //quarto e quinto digito


if (total==n) {
    printf("Este numero e um polindromo");
}
else {
    printf("Este numero nao e um polindromo");
}
}

int ex10() {
/*Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do 
consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
• Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
• Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
• Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
O algoritmo devera ler a conta do cliente,  seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos. 
Como resultado imprimir o valor a ser pago pelo mesmo.*/

int contacliente, consumoagua;
float formula;
char tipoconsumidor[15];

printf("Digite o valor da sua conta: ");
scanf("%d",&contacliente);
printf("Digite o consumo em m3: ");
scanf("%d",&consumoagua);
printf("Digite qual tipo de consumidor voce e: ");
scanf("%s",tipoconsumidor);

if (strcmp(tipoconsumidor,"RESIDENCIAL") == 0){
formula = 5.00 + (0.05 * consumoagua);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua <= 80 ){
formula = 500.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

else if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua > 80 ){
formula = 500.00 + ((consumoagua - 80) * 0.25);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua <= 100){
formula = 800.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f",formula);
}
else if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua > 100){
formula = 800.00 + ((consumoagua - 100 )* 0.04);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}
}