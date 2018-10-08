#include "personBase.h"
#include "person.h"
#include <string>

class law
{
public:
	law();
	

private:
	std::string affects;
};

law::law(){

}


class government
{
public:
	government();
	~government();

	void addPopulation(int i);
	void createLaw();
	void removeLaw(int i);
	law* getLaw();


	void changeLowIndustrial(int i);
	void changeMediumIndustrial(int i);
	void changeHighIndustrial(int i);

	void changeLowCommercial(int i);
	void changeMediumCommercial(int i);
	void changeHighCommercial(int i);

	void changeLowResidential(int i);
	void changeMediumResidential(int i);
	void changeHighResidential(int i);

	int getpopulation() { return population; }

	int getLowIndustrial() { return LowIndustrial; }
	int getMediumIndustrial() { return MediumIndustrial; }
	int getHighIndustrial() { return HighIndustrial; }
	int getLowCommercial() { return LowCommercial; }
	int getMediumCommercial() { return MediumCommercial; }
	int getHighCommercial() { return HighCommercial; }
	int getLowResidential() { return LowResidential; }
	int getMediumResidential() { return MediumResidential; }
	int getHighResidential() { return HighResidential; }

private:
	int lawID;


	int population;
	personbase masterPB;

	int	freeAcres;
	int totalAcres;

	int LowIndustrial;
	int MediumIndustrial;
	int HighIndustrial;

	int LowCommercial;
	int MediumCommercial;
	int HighCommercial;

	int LowResidential;
	int MediumResidential;
	int HighResidential;

};
