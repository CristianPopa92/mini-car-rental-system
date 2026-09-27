#pragma once
#include "ICarRentalProduct.h"

class CarRentalProductCreator
{
public:
	const ICarRentalProduct* getCarRentalProduct();

	virtual ~CarRentalProductCreator() = 0;

protected:
	virtual ICarRentalProduct* createCarRentalProduct() = 0;
};

