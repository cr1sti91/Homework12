#include <iostream>
#include <iomanip>

void temperaturileOrasului(); 
void tema2();

int main()
{
	std::cout << "Tema pe acasa:" << std::endl;
	const std::string optiuni_intrare{ R"(
			1.Tema temperaturile orasului
			2.Tema tema 2
	)" };

	//Afisam optiunile posibile
	std::cout << "Optiuni:" << std::endl << optiuni_intrare << std::endl;

	//Citim optiunea necesara de la tastatura
	std::cout << "Introduce numarul din dreptul optiunii necesare: ";
	short optiune{};
	std::cin >> optiune;
	std::cout << std::endl;

	//Executam functia ce corespunde optiunei introduse
	switch (optiune)
	{
	case 1: temperaturileOrasului();
		break;
	case 2: tema2();
		break;
	default: std::cout << "Optiune incorecta!" << std::endl;
	}

}


void temperaturileOrasului()
{
	const short numar_zile{ 7 }; //Setam dimensiunea array-ului intr-o constanta pentru evitarea hard coding

	double temperaturi[numar_zile]{};
	double suma{};

	std::cout << "Introduce-ti temperaturile pentru fiecare zi a saptamanii: " << std::endl;
	
	//Setam valorile temperaturilor pentru fiecare zi
	for (size_t i{}; i < numar_zile; i++)
	{
		std::cout << "Temperatura in ziua " << i + 1 << " este: "; 
		std::cin >> temperaturi[i]; //Valorile temperaturilor sunt citite din consola
		suma += temperaturi[i]; 
	}

	double mediaSaptamanala = suma / numar_zile; //Calculam media temperaturilor

	std::cout << std::setprecision(2) << std::fixed; //Setam precizia de 2 cifre dupa virgula
	std::cout << "Temperatura medie saptamanala este: " << mediaSaptamanala << " grade Celsius." << std::endl;	
}

void tema2()
{
	int cod_binar[50]{ 0,1,0,0,0,0,0,1,0,1,1,1,0,0,1,0,0,1,1,1,0,0,1,0,0,1,1,0,0,0,0,1,0,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,0,0 };
	std::cout << "Primul element din array: " << cod_binar[0] << std::endl;
	std::cout << "Al cincilea element din array: " << cod_binar[4] << std::endl;
	std::cout << "Ultimul element din array: " << cod_binar[49] << std::endl;
}