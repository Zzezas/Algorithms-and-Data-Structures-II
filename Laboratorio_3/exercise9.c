#include <stdio.h>

typedef struct
{
    int matricula;
    float notas[3];
} aluno;

aluno g_turma[5];

void le_aluno(){
    for(int i = 0; i < 5; i++){
        printf("Insira a matricula do aluno: ");
        scanf("%d", &g_turma[i].matricula);
        for(int j = 0; j < 3; j++){
            printf("Insira a nota %d do aluno: ", j+1);
            scanf("%f", &g_turma[i].notas[j]);
        }
    }    
}

void imprime_turma(){
    for(int i = 0; i < 5; i++){
        printf("Aluno %d - Notas = %.2f, %.2f, %.2f\n", g_turma[i].matricula, g_turma[i].notas[0], g_turma[i].notas[1], g_turma[i].notas[2]);
    }
}

float calcula_media_aluno(int idx){
    float media = (g_turma[idx].notas[0] + g_turma[idx].notas[1] + g_turma[idx].notas[2]) / 3.0;
    return media;
}

void imprime_medias(){
    for(int i = 0; i < 5; i++){
        float media = calcula_media_aluno(i);
        printf("Aluno %d - Media = %.2f\n", g_turma[i].matricula, media);
    }
}

int main(){
    le_aluno();
    imprime_turma();
    imprime_medias();
    return 0;
}