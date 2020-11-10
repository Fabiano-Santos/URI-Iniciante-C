#include <stdio.h>

int main(){

    int h_inicial, h_final, m_inicial, m_final, aux, aux2;

    scanf("%d%d%d%d", &h_inicial, &m_inicial, &h_final, &m_final);

    if(h_inicial < h_final && m_inicial < m_final){
    
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_final - h_inicial, m_final -m_inicial);
    
    }if(h_inicial == h_final && m_inicial == m_final){
    
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", 24);
    
    }if(h_inicial > h_final && m_inicial > m_final){
    
        aux = 24 - h_inicial + h_final;
        aux2 = 60 - m_inicial + m_final;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", aux, aux2);
    
    }


    //Em Construção


    return 0;
}
