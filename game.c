#include<stdio.h>
int main()
{
    int j=1, i;
    for(i=1;i<=j;i++)
    { 
        printf("LET'S PLAY TIC TAC TOE\n");
        printf("\n");
        printf("/=====|=====|=====%c\n", 92);
        printf("|  1  |  2  |  3  |\n");
        printf("|=====|=====|=====|\n");
        printf("|  4  |  5  |  6  |\n");
        printf("|=====|=====|=====|\n");
        printf("|  7  |  8  |  9  |\n");
        printf("%c=====|=====|=====/\n", 92);
        printf("\n");
        printf("PLAYER 1 HAS (X) AND PLAYER 2 HAS (O)\n");
        printf("\n");
        printf("TYPE THE NUMBER OF THE PLACE YOU WANT TO SELECT\n");
        int arr[9];
        int a, b, c, f=0;
        for(a=0;a<9;a++)
        {
            arr[a]=' ';
        }
        c=0;
        int d=0, e=0;
        for(a=0;a<9+c;a++)
        {
            if((a+c)%2==0) 
            {
                printf("\n");
                printf("PLAYER 1:");
                scanf("%d", &b);
                if(b>9 || b<1)
                {
                    printf("\n");
                    printf("OUT OF RANGE, MORON!\n");
                    c++;
                    continue;
                }
                if(arr[b-1]!=' ')
                {
                    printf("\n");
                    printf("OVERWRITING IS OUT OF RULES!\n");
                    c++;
                    continue;
                }
                arr[b-1]='X';
            }
            else
            {
                printf("\n");
                printf("PLAYER 2:");
                scanf("%d", &b);
                if(b>9 || b<1)
                {
                    printf("\n");
                    printf("OUT OF RANGE, MORON!\n");
                    c++;
                    continue;
                }
                if(arr[b-1]!=' ')
                {
                    printf("\n");
                    printf("OVERWRITING IS OUT OF RULES!\n");
                    c++;
                    continue;
                }
                arr[b-1]='O';
            }
            printf("\n");
            printf("/=====|=====|=====%c\n", 92);
            printf("|  %c  |  %c  |  %c  |\n", arr[0], arr[1], arr[2]);
            printf("|=====|=====|=====|\n");
            printf("|  %c  |  %c  |  %c  |\n", arr[3], arr[4], arr[5]);
            printf("|=====|=====|=====|\n");
            printf("|  %c  |  %c  |  %c  |\n", arr[6], arr[7], arr[8]);
            printf("%c=====|=====|=====/\n", 92);
            if((arr[0]=='X' && arr[3]=='X' && arr[6]=='X') || (arr[4]=='X' && arr[1]=='X' && arr[7]=='X') || (arr[8]=='X' && arr[5]=='X' && arr[2]=='X') || (arr[0]=='X' && arr[1]=='X' && arr[2]=='X') || (arr[3]=='X' && arr[4]=='X' && arr[5]=='X') || (arr[6]=='X' && arr[7]=='X' && arr[8]=='X') || (arr[0]=='X' && arr[4]=='X' && arr[8]=='X') || (arr[6]=='X' && arr[4]=='X' && arr[2]=='X'))
            {
                printf("\n");
                printf("CONGRATULATIONS!, PLAYER 1 HAS WON THE GAME!");
                f++;
                break;
            }
            if((arr[0]=='O' && arr[3]=='O' && arr[6]=='O') || (arr[4]=='O' && arr[1]=='O' && arr[7]=='O') || (arr[8]=='O' && arr[5]=='O' && arr[2]=='O') || (arr[0]=='O' && arr[1]=='O' && arr[2]=='O') || (arr[3]=='O' && arr[4]=='O' && arr[5]=='O') || (arr[6]=='O' && arr[7]=='O' && arr[8]=='O') || (arr[0]=='O' && arr[4]=='O' && arr[8]=='O') || (arr[6]=='O' && arr[4]=='O' && arr[2]=='O'))
            {
                printf("\n");
                printf("CONGRATULATIONS!, PLAYER 2 HAS WON THE GAME!");
                f++;
                break;
            }
        }
        printf("\n");
        if(f==0) printf("MATCH IS TIE!\n");
        printf("\n");
        printf("DO YOU WANT TO PLAY AGAIN?(YES/NO):");
        char brr[3];
        fflush(stdin);
        gets(brr);
        if(brr[0]=='y' || brr[0]=='Y') j++;
        else printf("\nTHANK YOU!\n");
    }
    return 0;
}
