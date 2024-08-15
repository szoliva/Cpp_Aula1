#include <iostream>
using namespace std;

struct Jogador
{
	int nivel;
	float saude;
	float dano;
	float resistencia;
	
	void sofrerDano(float dano) {
		saude -= dano; // saude = saude - dano
	}
	
	int getSaude() {
		if (saude < 0) {
			cout << "Morreu! \n";
		}
		return saude;
	}
};

int main()
{
	Jogador j1 = { 11, 100.f, 10.f, 50.f };
	
	// cout << j1.saude << endl;
	
	cout << "Mostra saude: " << j1.getSaude() << endl;
	
	j1.sofrerDano(101);
	
	cout << "Mostra saude: " << j1.getSaude() << endl;
	
	return 0;
}
	
	