#include <iostream>
#include <string>

class Persoana
{
public:
	int inaltime = 182;
	double greutate = 81.2;

	void Merge();
	void Mananaca();
};

class Persoana1: public Persoana
{
public:
	std::string culoareaParului = "blond";
	std::string culoareaOchilor = "verde";
};

class Persoana2: public Persoana
{
public:
	std::string culoareaParului = "roscat";
	std::string culoareaOchilor = "albastru";

	void Inoata();
};

int main()
{
	Persoana1 p1;
	std::cout << "Persoana1 " << std::endl;
	std::cout << std::endl;
	std::cout << "Propietati si functionalitati mostenite: " << std::endl;
	std::cout << "- inaltime (cm): " << p1.inaltime << std::endl;
	std::cout << "- greutate (kg): " << p1.greutate << std::endl;
	p1.Merge();
	p1.Mananaca();
	std::cout << std::endl;
	std::cout << "Proprietati si functionalitati specificie:" << std::endl;
	std::cout << "- culoarea parului: " << p1.culoareaParului << std::endl;
	std::cout << "- culoarea ochilor: " << p1.culoareaOchilor << std::endl;

	Persoana2 p2;
	std::cout << std::endl;
	std::cout << "Persoana2 " << std::endl;
	std::cout << std::endl;
	std::cout << "Proprietati si functionalitati mostenite: " << std::endl;
	std::cout << "- inaltime (cm): " << p2.inaltime << std::endl;
	std::cout << "- greutate (kg): " << p2.greutate << std::endl;
	p2.Merge();
	p2.Mananaca();
	std::cout << std::endl;
	std::cout << " Proprietati si functionalitati specifice: " << std::endl;
	std::cout << "- culoarea parului: " << p2.culoareaParului << std::endl;
	std::cout << "- culoarea ochilor: " << p2.culoareaOchilor << std::endl;
	p2.Inoata();

	system("pause");
}

void Persoana::Merge()
{
	std::cout << "- merge " << std::endl;
}
void Persoana::Mananaca()
{
	std::cout << "- mananca " << std::endl;
}
void Persoana2::Inoata()
{
	std::cout << "- inoata " << std::endl;
}