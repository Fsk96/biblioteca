#include <iostream>
#include <string>
#define MAX 5

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Livro {
	public:
		string nome;
		int isin;
		
		string name () {
			return nome;
		}
};


int main() {
	
	int nlivros= 0;
	Livro lista_de_livros[MAX];
	
	int opcao = 1;
	
	while(opcao){
	
		cout << "1- Criar livro" << endl;
		cout << "2- Imprimir livros" << endl ;
		cout << "3- Fechar" << endl ;
		
		cout << "Introduza a opcao: ";
		cin >> opcao;
		
		switch (opcao){
			case 1:
				
			    for(int i=0; i<MAX; i++) {
				    	
						cout << "Nome do livro: " ;
						cin >> lista_de_livros[i].nome;
						cout << "Codigo ISIN:";
						cin >> lista_de_livros[i].isin;
						;
					}
			    
				
				    	
                    
				}
					break;
			case 2:
			    for(int i=0;i<MAX;i++){
			    	cout << lista_de_livros[i].name() << endl;
				}
				break;
			case 3:
			    return 0;		
		}
	}
	
	return 0;
}
