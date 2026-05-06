/*
EXEMPLO 4: STRLEN + STRCPY + STRCMP
    Lógicas de Programação contidas neste exemplo:
        *  Declaração da String: Vetor de Caracteres
        *  Leitura / Exibição na Tela String: scanf
        *  Medir Tamanho uma string: função strlen
        *  Lógica de programação: ????
*/

#include <stdio.h>
#include <string.h>
#define TAMANHO 3000
int main(void) {
    char texto[TAMANHO] = {"50 Anos da Universidade Vila Velha - UVV: Uma Trajetória de Excelência e Inovação\n\n\tA UVV completa 50 anos de história, consolidando-se como uma das instituições de ensino superior mais respeitadas do Espírito Santo e do Brasil.\nDesde sua fundação, a UVV tem sido símbolo de transformação, inovação e compromisso com o conhecimento. \nO nascimento da UVV marcou um novo tempo para a educação capixaba, oferecendo oportunidades de formação de qualidade e contribuindo para o desenvolvimento regional.\n\n\tNos primeiros anos, a UVV enfrentou desafios comuns a qualquer instituição nascente, mas sua visão ousada e seu corpo docente comprometido fizeram da UVV um polo de referência em ensino, pesquisa e extensão.\nA UVV cresceu, expandiu cursos, criou laboratórios modernos e consolidou parcerias nacionais e internacionais.\nA cada década, a UVV reafirmou seu propósito de formar cidadãos críticos e profissionais éticos.\nHoje, a UVV é reconhecida por sua infraestrutura exemplar e por programas inovadores que unem teoria e prática.\nA UVV também se destaca por incentivar a iniciação científica e por valorizar o impacto social de seus projetos.\n\n\tEm meio século, a UVV tornou-se um espaço de transformação de vidas, inovação tecnológica e responsabilidade social.\nAs comemorações dos 50 anos da UVV refletem o orgulho de toda a comunidade acadêmica.\nA UVV celebra sua trajetória com eventos culturais, científicos e institucionais que resgatam sua memória e projetam seu futuro. Cada conquista da UVV é fruto da dedicação de seus professores, alunos e colaboradores.\nA UVV olha para o passado com gratidão e para o futuro com esperança.\n\tA UVV é hoje sinônimo de qualidade, inovação e pertencimento.\nAo longo de cinco décadas, a UVV construiu um legado de credibilidade e excelência.\nOs 50 anos da UVV representam o reconhecimento de uma história que inspirou gerações e continuará a inspirar muitas outras.\nCom orgulho e emoção, a UVV reafirma seu compromisso de continuar crescendo, evoluindo e transformando o conhecimento em futuro.\n\n\tParabéns, UVV, pelos 50 anos de conquistas e pela dedicação em formar um mundo melhor."};
    char palavra_texto[30], palavra[30];
    printf("\n\n\t%s (Tamanho: %u caracteres)\n", texto, (unsigned) strlen(texto));
    unsigned length_true, cont_UVV = 0, cont_50 = 0, cont_Universidade = 0;
    int i;

    length_true = strlen(texto);

    for(i = 0; i <= length_true; i++){
        for(i = 0)
    }

    for()

  return 0;
}



/*
-- float: numeros reais (%f)
-- int: numeros inteiros (%i)
-- unsigned: numeros inteiros positivos (%u)
*/
