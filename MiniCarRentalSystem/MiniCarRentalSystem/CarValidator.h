#pragma once
#include "Car.h"
#include <string>
#include "CarType.h"
#include "CarStatus.h"

class CarValidator
{
public:
	static bool isValidCar(const Car& car);

	static bool isValidId(const std::string& id);
	static bool isValidModel(const std::string& model);
	static bool isValidType(const CarType& type);
	static bool isValidPricePerDay(const double& pricePerDay);
	static bool isValidStatus(const CarStatus& status);

private:
	static bool isInteger(const std::string& string);
};

