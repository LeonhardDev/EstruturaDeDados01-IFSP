#define MAX 100
typedef struct aluno{
    int matricula;
    float n1, n2, n3;
}ALUNO;

typedef struct fila FILA;

//cria a fila em mem�ria e devolve
//enderego de sua localizagdo
FILA *criaFila();

//libera mem�ria alocada para a fila
void liberaFila (FILA *fi);

//devolve o quantos elementos est�o na fila
int tamanhoFila(FILA *fi);

//verifica se fila cheia
int filaCheia(FILA *fi);

//verifica se fila vazia
int filaVazia (FILA *fi);

int insereFila(FILA *fi, ALUNO al);

int removeFila(FILA *fi);
