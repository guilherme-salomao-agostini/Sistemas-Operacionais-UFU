/*
INTEGRANTES:
Nome: Eduardo Marques da Silva - Número: 11721EMT018
Nome: Enrico Sampaio Bonela - Número: 11721EMT007
Nome: Guilherme Salomao Agostini - Número: 11721EMT003
Nome: Luiz Renato Rodrigues Carneiro - Número: 11721EMT004
*/

struct BCP{
	unsigned int burst;
	unsigned int ID;
	unsigned int cpu;
	char tipo; //i = I/O bound, c = cpu bound
	char status; /* usar apenas um caractere (n)ovo, (p)ronto, (e)xecução, (b)loqueado, (f)inalizado , (i)nexistente.*/
	unsigned int time_in;//tempo de chegada
	unsigned int t_interrupt;//tempo ja executado	
	unsigned int prioridade;
	double t_init;//controle de estatistica
	double t_end;//controle de estatistica
};
typedef struct BCP processo;

struct thread_args{
	int Number;
	processo *proc;
	int esc;
};
typedef struct thread_args thread_args;
