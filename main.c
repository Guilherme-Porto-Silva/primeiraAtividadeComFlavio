#include <stdio.h>
#include <str.h>

typedef struct void aluno(int quantosCadastrados){
 char nome[20][quantosCadastrados];
 int matricula[quantosCadastrados], alunos[quantosCadastrados], i;
 float nota1[quantosCadastrados], nota2[quantosCadastrados], nota3[quantosCadastrados], media[quantosCadastrados];
 for(i = 0; i < quantosCadastrados; i++){
    printf("\nComo eh chamado o aluno que este programa vai cadastrar agora? (vinte caracteres, no maximo)");
    fgets(nome[0][i], 20, stdin);
    printf("\nQual eh o numero de matricula de %s?",nome);
    scanf("%d",&matricula[i]);
    printf("\nAgora, forneca as notas tiradas por %s, em ordem cronologica.",nome);
    scanf("%f",&nota1[i]);
    scanf("%f",&nota2[i]);
    scanf("%f",&nota3[i]);
    media[i] = nota1[i] + nota2[i] + nota3[i] / 3;
 }
} ac;

typedef struct void impressao(void){
    int i;
  for(i = ac.i; i < ac.quantosCadastrados; i++){
printf("\nTendo %d como numero de matricula, %s tirou %f, %f e %f, respectivamente, e a media de suas notas foi %f.\n",ac.matricula[i],ac.nome[0][i],ac.nota1[i],ac.nota2[i],ac.nota3[i],ac.media[i]);
    }
};

typedef struct void adapteina(int a[], int n){
// a[] eh o vetor dos numeros de matricula
// n eh a quantidade de numeros de matricula presentes
    int i, j, seguraAquiRapidao;
    for(j = n -1, j > 0; j--) for(i = 0; i < j; i++) if(a[i+1] > a[i]){
        seguraAquiRapidao = a[i+1];
        a[i+1] = a[i];
        a[i] = seguraAquiRapidao;
    }
} ada;

typedef struct double buscaBinaria(int procurado, int total){
    int esquerda = 0, direita = total - 1;
    do{
    if(ac.matricula[(esquerda + direita)/2] == procurado) {
printf("\nO nome desse aluno eh %s e ele tirou, nesta ordem, %f, %f e %f, dando uma media de %f\n",ac.nome[0][esquerda + direita)/2],ac.nota1[esquerda + direita)/2],ac.nota2[esquerda + direita)/2],ac.nota3[esquerda + direita)/2],ac.media[esquerda + direita)/2]);
    return 0;
}
    }while(esquerda <= direita);
    do{
        printf("\nPercorri o vetor inteiro e nenhum deu igual, olhe se digitaste o numero corretamente. Maquinas nao sao tao espertas quanto humanos, o numero que digitas agora precisa ser completamente igual ao que estah cadastrado, ou a comparacao apontarah falso para igualdade.\n");
        return 1;
    }
} bina;

int main(void)
{
    int quantosCadastrados, desejo, i;
    printf("Digite 1 se quiser cadastrar novos alunos e 2 se quiser olhar cadastros jah feitos.");
    scanf("%d",&desejo);
    if(desjo == 1){
    printf("Quantos alunos este programa vai cadastrar?");
    scanf(%d,&quantosCadastrados);
    ac(quantosCadastrados);
    printf("\nOs cadastros ficaram da seguinte forma:\n");
    impressao();
    }
    else if(desejo == 2){
        printf("Por qual numero de matricula buscaremos? Se nao lembrares numeros de matricula, digite 12, e uma lista com todos os numeros de matricula cadastrados serah mostrada a voce.\n");
        scanf("%d",&desejo);
    if(desjo == 12){
     for(i = 0; i < quantosCadastrados; i++) printf("\nO numero de %s eh %d\n", ac.nome, ac.matricula);
    }
    else {
        printf("\nDigite 1 se preferir usar busca sequencial para encontrar o numero de matricula, e 2 se preferir usar a binaria. Se os numeros de matricula nao estiverem ordenados, a busca binaria so funcionarah se eu ordenah-los agora, o que posso fazer, mas levarah um tempinho.\n");
        scanf("%d",&desejo);
        if(desejo == 1) for(i = 0; i < quantosCadastrados; i++){
     if(desejo == ac.matricula) printf("\nSeu nome eh %s e ele tirou %f, %f e %f pontos, nessa ordem, resultando em uma media de %f pontos.\n",ac.nome[0][i],ac.nota1[i],ac.nota2[i],ac.nota3[i],ac.media[i]);
    }
    else if(desejo == 2) {
        printf("\nDigite 1 se os numeros de matricula jah estiverem ordenados em ordem crescente e 0 caso contrario.\n");
        scanf("%d",&desejo);
        if(desejo == 1) {
            printf("\nProcuraremos por que numero de matricula?\n");
        scanf("%d",&desejo);
            printf("\nQuantos numeros de matricula estao cadastrados, no total?\n");
        scanf("%d",&quantosCadastrados);
     i = bina(desejo, quantosCadastrados);
     if(i == 1) {
     printf("\nQuiseres tentar novamente, digite o numero de matricula agora.\n");
        scanf("%d",&desejo);
     i = bina(desejo, quantosCadastrados);
        }
        }
        else if(desejo == 0) {
            printf("\nTah, eu vou ordenah-los.\n");
            ada(ac.matricula[sizeof(ac.matricula)], sizeof(ac.matricula));
            printf("\nPronto. Agora, procuraremos por que numero de matricula?\n");
        scanf("%d",&desejo);
            printf("\nQuantos numeros de matricula estao cadastrados, no total?\n");
        scanf("%d",&quantosCadastrados);
     i = bina(desejo, quantosCadastrados);
     if(i == 1) {
     printf("\nQuiseres tentar novamente, digite o numero de matricula agora.\n");
        scanf("%d",&desejo);
     i = bina(desejo, quantosCadastrados);
        }
        }
    else printf("\nPor favor, digite 1 se os numeros de matricula jah estiverem ordenados em ordem crescente e 0 caso contrario, nao outra coisa.\n");
    }
    else printf("\nPor favor, digite 1 se quiser usar busca sequencial e 2 se quiser usar a binaria, nao outra coisa.\n");
    }
    printf("\nSe nenhuma resposta tiver aparecido a cima, eh porque o numero de matricula buscado nao estava cadastrado. Se isso acontecer, tente reescreve-lo, por poder te-lo escrito errado, ou tente digitar 12 e ver a lista de numeros cadastrados.\n");
    }
    else printf("\nPor favor, digite 1 se quiser cadastrar novos alunos e 2 se quiser olhar cadastros jah feitos, nao outra coisa.\n");
    return 0;
}