#include <stdio.h>
int main()
{
    int n, reverso=0, rem;
    printf("Digite um número:");
    scanf("%i", &n);
    while(n!=0){
        rem=n%10;
        reverso=reverso*10+rem;
        n/=10;
    }
    printf("Número reverso: %i", reverso);
    return 0;
}