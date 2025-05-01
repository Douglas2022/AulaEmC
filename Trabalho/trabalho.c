// 
int main() {
    int a, b, soma;

    // Solicita ao usuário os dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    // Realiza a soma
    soma = a + b;
    
    // Exibe o resultado
    printf("A soma de %d + %d = %d\n", a, b, soma);
    
    return 0;
}
