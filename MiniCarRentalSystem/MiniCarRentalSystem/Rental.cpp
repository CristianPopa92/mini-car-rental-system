#include "Rental.h"


Rental::Rental(
    std::string& rentalIdParam, 
    std::string& carIdParam, 
    std::string& customerNameParam, 
    short& numberOfDaysParam, 
    RentalStatus& statusParam
):
    rentalId{rentalIdParam},
    carId{carIdParam},
    customerName{customerNameParam},
    numberOfDays{numberOfDaysParam},
    status{statusParam}
{
}


Rental::Rental(const Rental& other):
    rentalId{ other.rentalId },
    carId{ other.carId },
    customerName{ other.customerName },
    numberOfDays{ other.numberOfDays },
    status{ other.status }
{
}


Rental& Rental::operator=(const Rental& other)
{
    if (this != &other)
    {
        this->rentalId = other.rentalId;
        this->carId = other.carId;
        this->customerName = other.customerName;
        this->numberOfDays = other.numberOfDays;
        this->status = other.status;
    }

    return *this;
}


Rental::~Rental()
{
}


const std::string Rental::getRentalId() const
{
    return this->rentalId;
}


void Rental::setRentalId(const std::string& newRentalId)
{
    this->rentalId = newRentalId;
}


const std::string Rental::getCarId() const
{
    return this->carId;
}


void Rental::setCarId(const std::string& newCarId)
{
    this->carId = newCarId;
}


const std::string Rental::getCustomerName() const
{
    return this->customerName;
}


void Rental::setCustomerName(const std::string& newCustomerName)
{
    this->customerName = newCustomerName;
}


const short Rental::getNumberOfDays() const
{
    return this->numberOfDays;
}


void Rental::setNumberOfDays(const short& newNumberOfDays)
{
    this->numberOfDays = newNumberOfDays;
}


const RentalStatus Rental::getStatus() const
{
    return this->status;
}


void Rental::setStatus(const RentalStatus& newStatus)
{
    this->status = newStatus;
}

