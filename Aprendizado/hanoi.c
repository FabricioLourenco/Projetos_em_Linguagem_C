#include <stdio.h>


// A função recebe o número de discos n, o disco de origem "origem", o disco de destino "destino" e o disco auxiliar "auxiliar"
void hanoi(int n, char origem, char destino, char auxiliar);

int main() {
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
