#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct paciente {
    char nome[500];
    int idade;
    char situacao_saude[50];
    struct Paciente* proximo;
};

struct listapaciente {
    struct Paciente* paciente;
    struct Listapaciente* next;
};

struct Listapaciente* lista_cria() {
    return NULL;
}

struct Listapaciente* listapaciente(Paciente* paciente, Listapaciente* Listapaciente) {
    struct Listapaciente* novo = (Listapaciente*)malloc(sizeof( Listapaciente));
    if (novo == NULL) {
        printf("Erro na alocacao \n");
        exit(1);
    }
    novo->paciente = paciente;
    novo->next = Listapaciente;
    return novo;
}

struct Paciente* inserir_ordenado( Paciente* inicio, Paciente* novo) {
    if (inicio == NULL || strcmp(novo->nome, inicio->nome) < 0) {
        novo->proximo = inicio;
        return novo;
    }
    struct Paciente* atual = inicio;
    while (atual->proximo != NULL && strcmp(novo->nome, atual->proximo->nome) >= 0) {
        atual = atual->proximo;
    }
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    return inicio;
}


struct Listapaciente* coletar_dados_paciente() {

    printf("Digite o nome do paciente: ");
    scanf("%s", novo_paciente->nome);

    printf("Digite a idade do paciente: ");
    scanf("%d", &novo_paciente->idade);

    printf("Qual a situacao da saude?\n");
  
    scanf("%[^\n]" novo_paciente->situacao_saude)

}
  Paciente* buscarpornome(Paciente* paciente, Listapaciente* listapaciente) {
    char nomeprocurar[80];
    printf("Digite o nome que deseja buscar:\n");
    scanf(" %[^\n]", nomeprocurar);

    Listapaciente* variaveltemp = listapaciente;
    while (variaveltemp != NULL) {
        if (strcmp(variaveltemp->paciente->nome, nomeprocurar) == 0) {
            return *(variaveltemp->paciente);
            
        }
        variaveltemp = variaveltemp->next;
    }
   
    }
    printf("Desculpe, nao conseguimos encontrar esse nome.\n");
  
    return NULL; 
}


void escrever_pacientes(Listapaciente*listapaciente) {}
   
 void ler_pacientes(Listapaciente*listapaciente){

}
void remover_paciente_por_nome( Listapaciente* listapaciente) {
    char nomeremover[200];
    printf("Digite o nome do paciente que deseja remover:\n");
    scanf(" %[^\n]", nomeremover);

    struct Listapaciente* atual = *listapaciente;
    struct Listapaciente* anterior = NULL;

    while (atual != NULL && strcmp(atual->paciente->nome, nomeremover) != 0) {
        anterior = atual;
        atual = atual->next;
    }

    if (atual == NULL) {
        printf("Paciente nao encontrado.\n");
        return;
    }

    if (anterior == NULL) {
        *listapaciente = atual->next;
    } else {
        anterior->next = atual->next;
    }

    free(atual->paciente);
    free(atual);
}

}

 Paciente editar_paciente(Paciente *pacientes, char[500]){
}



}

 Paciente editar_paciente(Paciente *pacientes, char[500]){
}



    

