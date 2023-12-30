
#include "doctest.h"
#include "Armure.h"

void lesCoordonnesDeLarmeSontCorrectes(const Armure& a, int x) {
	REQUIRE(a.pointDeSolidite() == x);
	REQUIRE(a.typeEquipement() == "Armure");
};

TEST_CASE("[Armure] Les Armures sont bien construites") {

	SUBCASE("Le constructeur avec une valeur point de solidit� est correct")
	{
		int x = { 100 };
		Armure a1{ x };
		lesCoordonnesDeLarmeSontCorrectes(a1, x);
	}
	SUBCASE("Le constructeur par d�fault est correct")
	{
		//constructeur par d�faut
		Armure a2{};
		lesCoordonnesDeLarmeSontCorrectes(a2, 0);
	
	}
}