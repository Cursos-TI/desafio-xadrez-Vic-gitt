#include   <stdio.h>

void movimentoTorre(int mover)
{
    if (mover > 0)
    {
        movimentoTorre(mover - 1);
        printf("->(x%d)", mover);

    }
    
}

void movimentoBispo(int mover)
{
    if (mover > 0)
    {
        movimentoBispo(mover-1);
        printf("↗ (x%d) ", mover);
    }
}

void movimentoRainha(int mover)
{
    if (mover>0)
    {
        movimentoRainha(mover-1);
        printf("<- (x%d) ", mover);
    }   
}

void movimentoCavalo(int mover) {
    if (mover > 0) {
        movimentoCavalo(mover - 1);

        if (mover>2)
        {
            printf("↓ (x%d)", mover);
        } else{
            printf("<- (x%d) ", mover);
        }
        
        
    }
}


int main(){
    int opcao = 0; // Menu de seleção
    printf("=======================\n");
    printf("   Escolha uma opção   \n");
    printf("=======================\n");
    printf("1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
    printf("=======================\n");
    scanf("%d", &opcao);

    switch (opcao) 
    {
        case 1:  // movimento torre
           movimentoTorre(5);
        break;

        case 2: // movimento bispo
            movimentoBispo(5);
        break;

        case 3: // movimento rainha
            movimentoRainha(8);
        break;

        case 4: // movimento cavalo
            movimentoCavalo(3);
            
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}