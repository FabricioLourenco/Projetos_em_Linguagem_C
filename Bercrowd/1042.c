#include <stdio.h>

int main(){

    int N1, N2, N3;

    scanf("%d %d %d", &N1, &N2, &N3);

    if (N1 > N2 && N1 > N3 && N2 > N3){       
        printf("%d\n", N3);
        printf("%d\n", N2);
        printf("%d\n\n", N1);
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n", N3);   
    }else if (N1 > N2 && N1 > N3 && N2 < N3){       
        printf("%d\n", N2);
        printf("%d\n", N3);
        printf("%d\n\n", N1);
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n", N3);   
    }else if (N1 < N2 && N1 > N3 && N2 > N3){       
        printf("%d\n", N3);
        printf("%d\n", N1);
        printf("%d\n\n", N2);
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n", N3);
    }else if (N1 < N2 && N1 < N3 && N2 > N3){        
        printf("%d\n", N1);
        printf("%d\n", N3);
        printf("%d\n\n", N2);
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n", N3);
    }else if (N1 < N2 && N1 < N3 && N2 < N3){       
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n\n", N3);
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n", N3);
    }else{        
        printf("%d\n", N2);
        printf("%d\n", N1);
        printf("%d\n\n", N3);
        printf("%d\n", N1);
        printf("%d\n", N2);
        printf("%d\n", N3);
    }  
return 0;
}