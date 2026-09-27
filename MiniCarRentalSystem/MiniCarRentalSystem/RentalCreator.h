#pragma once
#include "CarRentalProductCreator.h"
#include <string>
#include "RentalStatus.h"

class RentalCreator: public CarRentalProductCreator
{
	std::string rentalId;
	std::string carId;
	std::string customerName;
	short numberOfDays;
	RentalStatus status;

public:
	RentalCreator(
		std::string& rentalIdParam,
		std::string& carIdParam,
		std::string& customerNameParam,
		short& numberOfDaysParam,
		RentalStatus& statusParam
	);

	virtual ICarRentalProduct* createCarRentalProduct();
};

