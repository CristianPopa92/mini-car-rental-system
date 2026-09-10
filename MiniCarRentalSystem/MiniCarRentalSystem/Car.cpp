#include "Car.h"


Car::Car(
	std::string& idParam, 
	std::string& modelParam, 
	CarType& typeParam, 
	double& pricePerDayParam, 
	CarStatus& statusParam
):
	id{idParam},
	model{modelParam},
	type{typeParam},
	pricePerDay{pricePerDayParam},
	status{statusParam}
{
}


Car::Car(const Car& other):
	id{ other.id },
	model{ other.model },
	type{ other.type },
	pricePerDay{ other.pricePerDay },
	status{ other.status }
{
}


Car& Car::operator=(const Car& other)
{
	if (this != &other)
	{
		this->id = other.id;
		this->model = other.model;
		this->type = other.type;
		this->pricePerDay = other.pricePerDay;
		this->status = other.status;
	}

	return *this;
}

Car::~Car()
{
}


const std::string Car::getId() const
{
	return this->id;
}


void Car::setId(const std::string& newId)
{
	this->id = newId;
}


const std::string Car::getModel() const
{
	return this->model;
}


void Car::setModel(const std::string& newModel)
{
	this->model = newModel;
}


const CarType Car::getType() const
{
	return this->type;
}


void Car::setType(const CarType& newType)
{
	this->type = newType;
}


const double Car::getPricePerDay() const
{
	return this->pricePerDay;
}


void Car::setPricePerDay(const double& newPricePerDay)
{
	this->pricePerDay = newPricePerDay;
}


const CarStatus Car::getStatus() const
{
	return this->status;
}


void Car::setStatus(const CarStatus& newStatus)
{
	this->status = newStatus;
}

