#ifndef TEMPO_H
#define TEMPO_H

class Tempo
{
private:
	unsigned int _dia; 
	unsigned int _hora;  // 0-23
	unsigned int _min;   //0 -59
	unsigned int _seg;  //0-59

public:
	Tempo(unsigned int seg=0, unsigned int min=0, unsigned int hora=0, unsigned int dia=0);
	~Tempo();
	//funções membro

	void Check_Tempo(); // avalia os valores permitidos para o objeto
	void Soma_1_seg(); // soma 1 segundo a variavel dos segundos
	void sub_1_seg(); // subtrai, se possivel, 1 segundo da variavel dos segundos
	void print() const; // imprime os valores das variaveis do objeto
	void soma( Tempo &addTempo); // soma dois objetos da classe tempo
	void Insert(); // atribuição dos valores ao objeto lidos pelo teclado, entrada padrao
};

#endif // TEMPO_H

