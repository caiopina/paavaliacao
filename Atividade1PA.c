#include <string.h>
#include <stdio.h>
void codificar(); // prototipo da função que codifica.
void decodificar(); // prototipo da função que descodifica.

int main()
{
    char z; // variavel para a escolha das opções.
    printf("Escolha o que vai fazer: \n");
    printf("Digite 'C' para codificar e 'D' para decodificar: \n");
    scanf("%s",&z);
    if (z=='C'){
        codificar(); // chamando a função que codifica.
    }
    if (z=='D'){
        decodificar(); // chamando a função que decodifica.
    }

    return 0;
}

void codificar(){ // função que codifica.
    
    char letras[1000],s; // vetor que sera codificado e variavel 's' para transformar o numero decimal em string.
    int i,j,x,a,ascii[128]; // variaveis contaveis e um vetor para armazenar os carecteres convertidos em decimais.
    
    for (a=0; a<128; a++){ // Zerando o vetor.
            ascii[a]=0; 
        }
    
    scanf("%s",letras);
    
    for (i=0; i!=strlen(letras); i++){ // pegando cada letra e transformando para decimal.
            x=letras[i]; // o caracter é convertido para decimal.
            ascii[x]++;
        }
        
        for (a=1; a<=1000; a++){ 
            for (x=31; x<128; x++) // do 0 a 30 ele ignora no vetor pois nao tem nada( 0 ), pois nao usaremos na tabela ASCII
            if(ascii[x]==a){  
                
                s=x; // transformando de decimal para caracter novamente.
                
                if ((a>1)&&(s!='Z')&&(s!='0')&&(s!='1')&&(s!='2')&&(s!='3')&&(s!='4')&&(s!='5')&&(s!='6')&&(s!='7')&&(s!='8')&&(s!='9')){ // verificando se o numero repeti mais de uma vez e imprimindo.
                    printf ("%d%c",a,s);
                }
                if ((a==1)&&(s!='Z')&&(s!='0')&&(s!='1')&&(s!='2')&&(s!='3')&&(s!='4')&&(s!='5')&&(s!='6')&&(s!='7')&&(s!='8')&&(s!='9')){ //verificando se so repeti uma vez e imprimindo.
                    printf("%c",s);
                }
                if (s=='Z'){             // daqui até o final da função ele verifica se tem alguma string q se iguala e imprime a seguir.
                    printf("2%c",s);
                }
                if (s=='0'){
                    printf("ZA");
                    
                }
                if (s=='1'){
                    printf("ZB");
                    
                }
                if (s=='2'){
                    printf("ZC");
                    
                }
                if (s=='3'){
                    printf("ZD");
                    
                }
                if (s=='4'){
                    printf("ZE");
                    
                }
                if (s=='5'){
                    printf("ZF");
                    
                }
                if (s=='6'){
                    printf("ZG");
                    
                }
                if (s=='7'){
                    printf("ZH");
                    
                }
                if (s=='8'){
                    printf("ZI");
                    
                }
                if (s=='9'){
                    printf("ZJ");
                    
                }
               
            }
        }
        printf("\n");
    }
    

void decodificar(){ // função que decodifica.
    
    
    char letras[1000],aux[1000]; // um vetor que vai receber as letras digitadas e outro vetor que serve de auxiliar.
    int i=0,j,x=0,a;            // variaveis contadoras e uma delas ira servir para transfomar um caracter em decimal.
    scanf("%s",letras);
    
    while(letras[i]!='\0'){     // estrutura que ira funcionar até chegar no caracter nulo.
        
        if(letras[i]=='Z'){  // caso a letra na posição 'i' seja 'Z' ele imprimirar nada. 
            printf(" ");
        }
        if((letras[i]=='2')&&(letras[i+1]=='Z')){ // caso a letra na posição 'i' seja '2Z' ele imprimira 'Z'.
            printf("Z");
        }
        j=letras[i];     // transformando de caracter para decimal.
        if ((j<=57)&&(letras[i]!='Z')&&(letras[i+1]!='Z')){     // condições necessarias para que a estrutura continue.
            j=letras[i]-48; // transfomando de caracter para decimal, porém diminuindo o valor para que a conta funcione.
            if(j<9){
            
                while(j!=0){  // enquanto o j n for igual a 0 ele ira armazenar o caracter na estrutura auxiliar na pocição i+1.
            
                    aux[x]=letras[i+1];
            
                    x++;
                    j--;
        }
        
            
        
        }
        }
        
        
        i++;
    }
    printf("%s",aux); // imprimindo o que tem na estrutura auxiliar.
    
    
    
}