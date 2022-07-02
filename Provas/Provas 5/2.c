#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
        char nome[50];
        int telefone;
        int aniver;
} Agenda;

// Funções
int verfica_data(Agenda nive);
void inserir(Agenda *conta, int tam);
void remover(Agenda *conta, char *pala, int tam);
void todos_cotatos(Agenda conta);
void lista_letra(Agenda conta, char le);
void aniversario(Agenda conta, int me);
void pesquisa_nome(Agenda conta, char *pala);

int main(int argc, char const *argv[]) {

        // Variaveis
        FILE *arq;
        Agenda *contatos;
        int escolha;
        int tam = 2;
        char letra, palavra[50];
        int mes;

        // Alocação dinamica
        contatos = (Agenda*) malloc(tam * sizeof(Agenda));

        arq = fopen("contatos.dat", "w");

        // Recebe os dados
        for (int i = 0; i < tam; i++) {
                puts("Digite o nome do usuario:");
                scanf("%[^\n]", contatos[i].nome);

                puts("Digite o telefone:");
                scanf("%d", &contatos[i].telefone);

                puts("Digite o dia e o mes do seu aniversario:");
                scanf("%d", &contatos[i].aniver);
                getchar();
                while (verfica_data(contatos[i]) == 0) {
                        printf("Data infalida!\nDigite novamente:\n");
                        scanf("%d", &contatos[i].aniver);
                }
                fprintf(arq, "%s %d %d\n", contatos[i].nome, contatos[i].telefone, contatos[i].aniver);
        }
        fclose(arq);

        while (1) {
                puts("1° Inserir contato");
                puts("2° Remover contato");
                puts("3° Pesquisar um contato pelo nome");
                puts("4° listar todos os contatos");
                puts("5° listar os contatos cujo nome inicial com uma dada letra");
                puts("6° Imprimir os nomes dos aniversariante do mês:");
                scanf("%d", &escolha);

                switch (escolha) {
                case 1:
                        contatos = (Agenda*) realloc(contatos, ++tam * sizeof(Agenda));
                        inserir(contatos, tam - 1);
                        break;
                case 2:
                        getchar();
                        puts("\nDigite o nome da pessoa que você quer remover:");
                        scanf("%s", palavra);
                        remover(contatos, palavra, tam);
                        contatos = (Agenda*) realloc(contatos, tam * sizeof(Agenda));
                        printf("\n");
                        break;
                case 3:
                        getchar();
                        puts("Digite o nome da pessoa que você quer procurar:");
                        scanf("%[^\n]", palavra);
                        for (int i = 0; i < tam; i++) {
                                pesquisa_nome(contatos[i], palavra);
                        }
                        break;
                case 4:
                        for (int i = 0; i < tam; i++) {
                                todos_cotatos(contatos[i]);
                        }
                        break;
                case 5:
                        getchar();
                        puts("Letra inicial:");
                        scanf("%c", &letra);
                        for (int i = 0; i < tam; i++) {
                                lista_letra(contatos[i], letra);
                        }
                        break;
                case 6:
                        getchar();
                        puts("Que mês é esse:");
                        scanf("%d", &mes);
                        for (int i = 0; i < tam; i++) {
                                aniversario(contatos[i], mes);
                        }
                        break;
                }
        }

        free(contatos);

        return 0;
}

int verfica_data(Agenda nive) {

        int data, dia, mes;

        data = nive.aniver;

        dia = data / 100;
        data %= 100;
        mes = data;

        // Verifica as datas
        if (mes == 2 &&  dia > 28)
                return 0;
        else if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12)) {
                return 1;
        }else {
                return 0;
        }
}

void inserir(Agenda *conta, int tam) {

        // Funções
        int verfica_data(Agenda nive);

        // Variaveis
        FILE *arq;

        getchar();
        // Recebe os dados
        arq = fopen("contatos.dat", "a");
        puts("Digite o nome do usuario:");
        scanf("%[^\n]", conta[tam].nome);

        puts("Digite o telefone:");
        scanf("%d", &conta[tam].telefone);

        puts("Digite o dia e o mes do seu aniversario:");
        scanf("%d", &conta[tam].aniver);
        while (verfica_data(conta[tam]) == 0) {
                printf("Data infalida!\nDigite novamente:\n");
                scanf("%d", &conta[tam].aniver);
        }
        fprintf(arq, "%s %d %d\n", conta[tam].nome, conta[tam].telefone, conta[tam].aniver);
        fclose(arq);
}

void remover(Agenda *conta, char *pala, int tam) {

        int verifica(Agenda conta, char *pala);
        FILE *arq;
        Agenda copia;

        for (int i = 0; i < tam; i++) {
                if (verifica(conta[i], pala) == 1) {
                                copia.aniver = conta[i].aniver;
                                copia.telefone = conta[i].telefone;
                                strcpy(copia.nome, conta[i].nome);

                                conta[i].aniver = conta[i + 1].aniver;
                                conta[i].telefone = conta[i + 1].telefone;
                                strcpy(conta[i].nome, conta[i + 1].nome);

                                conta[i + 1].aniver = copia.aniver;
                                conta[i + 1].telefone = copia.telefone;
                                strcpy(conta[i + 1].nome, copia.nome);
                }
        }

        arq = fopen("contatos.dat", "w");

        //for (int i = 0; i < tam - 1; i++) {
        //        fprintf(arq, "%s %d %d\n", conta[i].nome, conta[i].telefone, conta[i].aniver);
        //}
        //fclose(arq);

}

void todos_cotatos(Agenda conta) {

        printf("%s %d %d\n", conta.nome, conta.telefone, conta.aniver);

}

void lista_letra(Agenda conta, char le) {

        if (conta.nome[0] == le) {
                printf("%s %d %d\n", conta.nome, conta.telefone, conta.aniver);
        }

}

void aniversario(Agenda conta, int me) {

        int data, mes;

        data = conta.aniver;

        data %= 100;
        mes = data;

        if (mes == me) {
                printf("%s\n", conta.nome);
        }

}

void pesquisa_nome(Agenda conta, char *pala) {

        int verifica(Agenda conta, char *pala);

        // Se todoas as letras forem iguais imprima
        if (verifica(conta, pala) == 1) {
                printf("%d %d\n", conta.telefone, conta.aniver);
        }
}

int verifica(Agenda conta, char *pala) {

        int tam = strlen(conta.nome);
        int tam2 = strlen(pala);

        // Verifica se os tamanhos das strings são iguais
        if (tam == tam2) {
                for (int i = 0; i < tam; i++) {
                        // Verefica se todas as palavra são iguais
                        if (conta.nome[i] != pala[i]) {
                                return 0;
                        }
                }
        }else {
                return 0;
        }

        return 1;
}
