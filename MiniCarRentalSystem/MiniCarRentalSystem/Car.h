#pragma once
#include <string>
#include "CarType.h"
#include "CarStatus.h"
#include "ICarRentalProduct.h"

class Car: public ICarRentalProduct
{
private:
	std::string id;
	std::string model;
	CarType type;
	double pricePerDay;
	CarStatus status;

public:
	Car(
		std::string& idParam,
		std::string& modelParam,
		CarType& typeParam,
		double& pricePerDayParam,
		CarStatus& statusParam
	);

	Car(const Car& other);

	Car& operator=(const Car& other);

	virtual ~Car();
	
	const std::string getId() const;
	void setId(const std::string& newId);

	const std::string getModel() const;
	void setModel(const std::string& newModel);

	const CarType getType() const;
	void setType(const CarType& newType);

	const double getPricePerDay() const;
	void setPricePerDay(const double& newPricePerDay);

	const CarStatus getStatus() const;
	void setStatus(const CarStatus& newStatus);
};

