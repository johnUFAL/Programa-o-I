#include <stdio.h>
#include <string.h>

int contar_num(char *str){
    if(*str == '\0') return 0;
    return (*str >= '0' && *str <= '9') + contar_num(str + 1);
}

void remover_num(char *str){
    if(*str == '\0') return;    
    if(*str >= '0' && *str <= '9'){
        for(; *str != '\0'; str++){
            *str = *(str + 1);
            remover_num(str);
        }
    } else {
        remover_num(str + 1);
    }
}

void trans_num_em_char(char *str){
    if(*str == '\0') return;
    if(*str >= '0' && *str <= '9'){
        printf("%c ", *str);
    } else {
        printf("%c", *str);
    }
    trans_num_em_char(str + 1);
}

int se_tem_char(char *str, char c){
    if(*str == '\0') return 0;
    if(*str == c) return 1;
    return se_tem_char(str + 1, c);
}

void concatenar(char *dest, char *src){
    if(*dest == '\0'){
        if(*src == '\0') return;
        *dest = *src;
        concatenar(dest + 1, src + 1);
    } else {
        concatenar(dest + 1, src);
    }
}

void espaco_undescore(char *str){
    if(*str == '\0') return;
    if(*str == ' ') *str = '_';
    espaco_undescore(str + 1);
}
int comparar_str(char *str1, char *str2){
    if(*str1 == '\0' && *str2 == '\0') return 1;
    if(*str1 != *str2) return 0;
    return comparar_str(str1 + 1, str2 + 1);
}
int cont_maiuscula(char *str){
    if(*str == '\0') return 0;
    return (*isupper(*str) ? 1 : 0) + cont_maiuscula(str + 1);
}

void repetir(char *str, int n){
    if(n == 0) return;
    printf("%s", str);
    repetir(str, n - 1);
}

void char_remove(char *str, char c){
    if(*str == '\0') return;
    if( *str == c){
        for(; *str != '\0'; str++){
            *str = *(str + 1);
            char_remove(str, c);
        }
    } else {
        char_remove(str + 1, c);
    }
}

void space_remove(char *str, char *res){
    if(*str == '\0'){
        *res = '\0';
        return;
    }
    if(*str != ' '){
        *res = *str;
        space_remove(str + 1, res + 1);
    }
    else{
        space_remove(str + 1, res);
    }
}

void subtituir_char(char *str, char antigo, char novo){
    if(*str == '\0') return;
    if(*str == antigo) *str = novo;
    subtituir_char(str + 1, antigo, novo);
}

int tamanho_str(char *str) {
    if(*str == '\0') return 0;
    return 1 + tamanho_str(str + 1);
}

void inverter_str(char *str, int i){
    if(str[i] == '\0') return;
    inverter_str(str, i + 1);
    printf("%c", str[i]);
}

int vogais(char *str){
    if(*str == '\0') return 0;
    char c = *str;
    int vogal = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    return vogal + vogais(str + 1);
}

int palindromo(char *str, int i, int f){
    if(i > f) return 0;
    if(str[i] != str[f]) return 0;
    return 1 + palindromo(str, i + 1, f - 1);
}

void maiuscula(char *str){
    if(*str == '\0') return;
    *str = toupper(*str); //em caso de minuscular usar tolower
    maiuscula(str + 1);
}

int caracteres(char *str, char c){
    if(*str == '\0') return 0;
    return (*str == c) + caracteres(str + 1, c);
}

int cont_palavras(char *str){
    if(*str == '\0') return 0;
    if(isspace(*str) && *(str + 1) != '\0' && !isspace(*(str + 1))){
        return 1 + cont_palavras(str + 1);
    }
    return cont_palavras(str + 1);
}

int main() {

    char str[50];
    char res[50];
    scanf("%s", str);

    printf("Tamanho da string: %d\n", tamanho_str(str));

    inverter_str(str, 0);

    printf("\n");

    printf("Quantidade de vogais: %d\n", vogais(str));

    printf("Eh palindromos? %d\n", palindromo(str, 0, strlen(str) - 1));

    maiuscula(str);
    printf("Maiuscula: %s\n", str);

    subtituir_char(str, 'a', 'A');
    printf("String subtituida: %s\n", str);

    space_remove(str, res);
    printf("String sem espacos: %s\n", res);

    printf("Quantidade de maiusculas: %d\n", cont_maiuscula(str));

    printf("Quantidade de palavras: %d\n", cont_palavras(str) + 1);

    repetir(str, 5);
    printdf("\n");

    printf("Sao iguais? %s\n", comparar_str(str, "joao") ? "Sim" : "Nao");

    espaco_undescore(str);
    printf("Com undescore: %s\n", str);

    concatenar(str, " Joao");
    printf("Concatenacao: %s\n", str);

    trans_num_em_char("j1a3j4j5j\n");

    remover_num("j1a3j4j5j\n");

    printf("Quantidade de numeros: %d\n", contar_num("j1a3j4j5j"));

    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    printf("Quantidade de %c: %d\n", c, caracteres(str, c));

    char_remove(str, c);
    printf("String sem %c: %s\n", c, str);

    printf("contem? %s\n", se_tem_char(str, c) ? "Sim" : "Nao");

    // char str[100];
    // scanf("%s", str);
    // printf("%d\n", strlen(str)); control k

    return 0;
}