//
//  main.c
//  quiz2
//



#include <stdio.h>
void carpim(int n,int a[n][n],int b[n][n])
{
    int i,j,k;
    int sonuc[n][n];
    for(i=0; i<n; ++i)
            for(j=0;j<n;++j)
            {
                sonuc[i][j]=0;
            }

    for(i=0; i<n; ++i)
        for(j=0; j<n; ++j)
        {
            for(k=0; k<n; ++k)
            {
                sonuc[i][j]+=a[i][k]*b[k][j];
            }
        }
    
    for(i=0;i<n;++i){
        for(j=0;j<n;++j)
        {
            printf("%d  ",sonuc[i][j]);
            if(j==n-1)
                printf("\n");
        }
    }
}
int main( ) {
    int n;
    do
    {
        printf("matris boyutu girin(en az iki):");
        scanf("%d",&n);
    }while(n<2);
    
    int dizi[n][n];
    printf("matris degerlerini girin:");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&dizi[i][j]);
        }
    }
    int dizi2[n][n];
    for (int i=0; i<n; i++) {
        dizi2[0][i]=dizi[i][i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            dizi2[i+1][j]=dizi2[i][j]+1;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",dizi2[i][j]);
        }
        printf("\n");
    }
    int dizi3[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            dizi3[i][j]=dizi2[j][i];
        }
    }
    printf("\ntranspozu:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",dizi3[i][j]);
        }
        printf("\n");
    }
    printf("\nkonsoldan alınan matris ile transpozun carpimi:\n");
    carpim(n,dizi, dizi3);
    return 0;
}
