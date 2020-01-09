/* заморожен


#include <iostream>
using namespace std;

class Slave
{
public:
	int TabelNo;
	string surname;
	string sex;
	unsigned short int age;
	float weight;
	bool Smoker;
	float TarifStavka;
	void initializeSlave()
	{
		cin >> TabelNo;
		cin >> surname;
		cin >> sex;
		cin >> age;
		cin >> weight;
		cin >> Smoker;
		cin >> TarifStavka;
	}
};

int main()
{
	Slave Jmih;
	Jmih.initializeSlave();
	cout << Jmih.TabelNo << endl << Jmih.surname << endl << Jmih.sex << endl << Jmih.age << endl << Jmih.weight << endl << Jmih.Smoker << endl << Jmih.TarifStavka << endl;

}

*/