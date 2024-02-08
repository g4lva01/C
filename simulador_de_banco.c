#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[50];
    char cpf[12];
    float saldo;
} Conta;

void exibirSaldo(Conta* conta) {
    printf("Saldo atual de %s: %.2f\n", conta->nome, conta->saldo);
}

void depositar(Conta* conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Deposito de %.2f realizado com sucesso na conta de %s.\n", valor, conta->nome);
    } else {
        printf("Valor invalido para deposito.\n");
    }
}

void sacar(Conta* conta, float valor) {
    if (valor > 0 && conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso na conta de %s.\n", valor, conta->nome);
    } else {
        printf("Saque nao permitido. Saldo insuficiente ou valor invalido.\n");
    }
}

void transferir(Conta* remetente, Conta* destinatario, float valor) {
    if (valor > 0 && remetente->saldo >= valor) {
        remetente->saldo -= valor;
        destinatario->saldo += valor;
        printf("Transferencia de %.2f realizada com sucesso da conta de %s para a conta de %s.\n", valor, remetente->nome, destinatario->nome);
    } else {
        printf("Transferencia nao permitida. Saldo insuficiente ou valor invalido.\n");
    }
}

void exibirContas(Conta* contas, int numContas) {
    printf("\nContas cadastradas:\n");
    for (int i = 0; i < numContas; i++) {
        printf("\nConta %d\n", i + 1);
        printf("Nome: %s\n", contas[i].nome);
        printf("CPF: %s\n", contas[i].cpf);
        printf("Saldo: %.2f\n", contas[i].saldo);
    }
}

int validarCPF(const char* cpf) {
    if (strlen(cpf) != 11) {
        return 0;
    }
    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int digito1 = (soma % 11 < 2) ? 0 : (11 - (soma % 11));
    if (digito1 != cpf[9] - '0') {
        return 0;
    }
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int digito2 = (soma % 11 < 2) ? 0 : (11 - (soma % 11));
    if (digito2 != cpf[10] - '0') {
        return 0;
    }
    return 1;
}

int lerInteiro() {
    int valor;
    while (1) {
        if (scanf("%d", &valor) == 1) {
            while (getchar() != '\n');
            return valor;
        } else {
            printf("Entrada invalida. Tente novamente: ");
            while (getchar() != '\n');
        }
    }
}

float lerFloat() {
    float valor;
    while (1) {
        if (scanf("%f", &valor) == 1) {
            while (getchar() != '\n');
            return valor;
        } else {
            printf("Entrada invalida. Tente novamente: ");
            while (getchar() != '\n');
        }
    }
}

Conta* cadastrarConta(Conta* contas, int* numContas) {
    char novoCpf[12];
    char novoNome[50];
    int cpfJaCadastrado;
    do {
        cpfJaCadastrado = 0;
        printf("\nCadastro da nova conta %d\n", *numContas + 1);
        printf("Nome: ");
        fgets(novoNome, sizeof(novoNome), stdin);
        novoNome[strcspn(novoNome, "\n")] = '\0';
        printf("CPF: ");
        fgets(novoCpf, sizeof(novoCpf), stdin);
        novoCpf[strcspn(novoCpf, "\n")] = '\0';
        if (!validarCPF(novoCpf)) {
            printf("Erro: CPF invalido. Tente novamente.\n");
            cpfJaCadastrado = 1;
            continue;
        }
        for (int i = 0; i < *numContas; i++) {
            if (strcmp(contas[i].cpf, novoCpf) == 0) {
                printf("Erro: CPF ja cadastrado. Tente novamente.\n");
                cpfJaCadastrado = 1;
                break;
            }
        }
    } while (cpfJaCadastrado);
    Conta* novoContas = (Conta*)realloc(contas, (*numContas + 1) * sizeof(Conta));
    if (novoContas != NULL) {
        contas = novoContas;
        strcpy(contas[*numContas].nome, novoNome);
        strcpy(contas[*numContas].cpf, novoCpf);
        printf("Saldo: ");
        contas[*numContas].saldo = lerFloat();
        (*numContas)++;
        return contas;
    } else {
        printf("Erro ao alocar memoria para a nova conta.\n");
        return NULL;
    }
}

int main() {
    int numContas;
    printf("Digite o numero de contas a serem cadastradas: ");
    numContas = lerInteiro();
    Conta* contas = (Conta*)malloc(numContas * sizeof(Conta));
    for (int i = 0; i < numContas; i++) {
        printf("\nCadastro da conta %d\n", i + 1);
        printf("Nome: ");
        fgets(contas[i].nome, sizeof(contas[i].nome), stdin);
        contas[i].nome[strcspn(contas[i].nome, "\n")] = '\0';
        do {
            printf("CPF: ");
            fgets(contas[i].cpf, sizeof(contas[i].cpf), stdin);
            contas[i].cpf[strcspn(contas[i].cpf, "\n")] = '\0';
            if (!validarCPF(contas[i].cpf)) {
                printf("Erro: CPF invalido. Tente novamente.\n");
            }
        } while (!validarCPF(contas[i].cpf));
        int cpfJaCadastrado = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(contas[j].cpf, contas[i].cpf) == 0) {
                printf("Erro: CPF ja cadastrado. Tente novamente.\n");
                cpfJaCadastrado = 1;
                break;
            }
        }
        if (cpfJaCadastrado) {
            i--;
            continue;
        }
        printf("Saldo: ");
        contas[i].saldo = lerFloat();
    }
    int escolha;
    int contaOrigem, contaDestino;
    float valor;
    exibirContas(contas, numContas);
    do {
        printf("\nMenu de Operações:\n");
        printf("1. Exibir Saldo\n");
        printf("2. Realizar Deposito\n");
        printf("3. Realizar Saque\n");
        printf("4. Realizar Transferencia\n");
        printf("5. Cadastrar Nova Conta\n");
        printf("6. Exibir Contas\n");
        printf("7. Sair\n");
        printf("Escolha uma operacao (1-7): ");
        escolha = lerInteiro();
        switch (escolha) {
            case 1:
                printf("Digite o numero da conta para exibir o saldo: ");
                contaOrigem = lerInteiro();
                exibirSaldo(&contas[contaOrigem - 1]);
                break;
            case 2:
                printf("Digite o numero da conta para deposito: ");
                contaOrigem = lerInteiro();
                printf("Digite o valor a ser depositado: ");
                valor = lerFloat();
                depositar(&contas[contaOrigem - 1], valor);
                break;
            case 3:
                printf("Digite o numero da conta para saque: ");
                contaOrigem = lerInteiro();
                printf("Digite o valor a ser sacado: ");
                valor = lerFloat();
                sacar(&contas[contaOrigem - 1], valor);
                break;
            case 4:
                printf("Digite o numero da conta de origem para transferencia: ");
                contaOrigem = lerInteiro();
                printf("Digite o numero da conta de destino para transferencia: ");
                contaDestino = lerInteiro();
                printf("Digite o valor a ser transferido: ");
                valor = lerFloat();
                transferir(&contas[contaOrigem - 1], &contas[contaDestino - 1], valor);
                break;
            case 5:
                {
                    Conta* novoContas = cadastrarConta(contas, &numContas);
                    if (novoContas != NULL) {
                        contas = novoContas;
                    } else {
                        printf("Erro ao cadastrar nova conta. Saindo do programa.\n");
                        escolha = 7;
                    }
                }
                break;
            case 6:
                exibirContas(contas, numContas);
                break;
            case 7:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (escolha != 7);
    free(contas);
    return 0;
}
