#pragma once
#include "CarRentalProductCreator.h"
#include <string>
#include "CarType.h"
#include "CarStatus.h"

class CarCreator: public CarRentalProductCreator
{
	std::string id;
	std::string model;
	CarType type;
	double pricePerDay;
	CarStatus status;

public:
	CarCreator(
		std::string& idParam,
		std::string& modelParam,
		CarType& typeParam,
		double& pricePerDayParam,
		CarStatus& statusParam
	);

	virtual ICarRentalProduct* createCarRentalProduct();
};

