#include <iostream>
#include "Tempo.h"
using namespace std;
// Construtor
Tempo::Tempo(unsigned int seg, unsigned int min, unsigned int hora, unsigned int dia )
{
	_dia = dia; 
	_hora = hora;
	_min = min;
	_seg = seg;
	//função para verificação e correção dos valores atribuidos a classe Tempo
	Check_Tempo();
}

//Destrutor
Tempo::~Tempo()
{
	//
}


void Tempo::Check_Tempo()
{	//verifica se segundos possui mais de 59 segundos e corrige os valores
	if (_seg  > 59) {
		_min += (int)(_seg / 60);
		_seg = _seg % 60;
	}
	// Verifica se minutos possui mais de 59 minutos e corrige os valores
	if (_min > 59) {
		_hora += (int)(_min / 60);
		_min = _min % 60;
	}
	//Verifica se hora possui mais de 23 horas e corrige os valores
	if (_hora > 23) {
		_dia += (int)(_hora / 24);
		_hora = _hora % 24;
	}
}

// soma 1 segundo a variavel dos segundos
void Tempo::Soma_1_seg()
{
	_seg++;
	Check_Tempo();
}
// subtrai, se possivel, 1 segundo da variavel dos segundos
void Tempo::sub_1_seg()
{
	if (_seg > 1) {
		_seg++;
	}
	Check_Tempo();
}
// imprime os valores das variaveis do objeto
void Tempo::print() const 
{
	cout << " Dia: " << _dia << " Hora: " << _hora << " Minutos: " << _min << " Segundos: " << _seg << endl;
	cout<< ">>" << _dia << " :: " << _hora << " :: " << _min << "  ::  " << _seg << endl;
}
// soma dois objetos da classe tempo
void Tempo::soma(Tempo & addTempo) 
{
	this->_dia += addTempo._dia;
	this->_hora += addTempo._hora;
	this->_min += addTempo._min;
	this->_seg += addTempo._seg;
	this->Check_Tempo();
}
// atribuição dos valores ao objeto lidos pelo teclado, entrada padrao
void Tempo::Insert()
{
	cout << "Entre com o numero de dias: ";
	cin >> _dia;
	cout << "\n ";
	cout << "Entre com o numero de horas: ";
	cin >> _hora;
	cout << "\n ";
	cout << "Entre com o numero de minutos: ";
	cin >> _min;
	cout << "\n ";
	cout << "Entre com o numero de segundos: ";
	cin >> _seg;
	cout << "\n ";
	this->Check_Tempo();
}