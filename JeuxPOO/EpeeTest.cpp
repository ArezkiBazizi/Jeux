#include "doctest.h"
#include "Epee.h"

TEST_CASE("[Epee] Les Epees sont bien construites") {

	SUBCASE("Le constructeur avec une valeur 'point de solidit�' est correct")
	{
		int x = { 100 };
		Epee e1{ x };
		REQUIRE(e1.pointDeSolidite() == x);
		REQUIRE(e1.typeEquipement() == "Epee");
	}
	SUBCASE("Le constructeur par d�fault est correct")
	{
		//constructeur par d�faut
		Epee e2{};
		REQUIRE(e2.pointDeSolidite() == 0.0);
		REQUIRE(e2.typeEquipement() == "Epee");

	}
}

TEST_CASE("[Epee] : Epee : modifier les points de solidit� de l'epee") {

	SUBCASE("Modifier la solidit� par une valeur <= � la solidit�")
	{
		int x = { 100 };
		Epee e1{ x };
		e1.ModifierpointDeSolidite(100);
		REQUIRE(e1.pointDeSolidite() == x - 50);
		// L'epee est endomag�e

	}
	SUBCASE("Modifier la solidit� par une valeur > � la solidit�")
	{
		int x = { 100 };
		Epee e1{ x };
		e1.ModifierpointDeSolidite(300);
		REQUIRE(e1.pointDeSolidite() == 0);
		//L'epee est cass�
	}
}