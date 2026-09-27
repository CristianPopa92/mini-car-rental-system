#include "RentalValidator.h"
#include "CarValidator.h"
#include <string>


bool RentalValidator::isValidRental(const Rental& rental)
{
    return 
        isValidId(rental.getCarId()) &&
        isValidCarId(rental.getCarId()) &&
        isValidCustomerName(rental.getCustomerName()) &&
        isValidNumberOfDays(rental.getNumberOfDays()) &&
        isValidStatus(rental.getStatus());
}


bool RentalValidator::isValidId(const std::string& id)
{
    if (id.empty())
    {
        return false;
    }

    if (!isInteger(id))
    {
        return false;
    }

    size_t integerId = std::stoi(id);

    return integerId > 0;
}


bool RentalValidator::isValidCarId(const std::string& carId)
{
    return CarValidator::isValidId(carId);
}


bool RentalValidator::isValidCustomerName(const std::string& customerName)
{
    return !(customerName.empty());
}


bool RentalValidator::isValidNumberOfDays(const short& numberOfDays)
{
    return numberOfDays > 0;
}


bool RentalValidator::isValidStatus(const RentalStatus& status)
{
    return 
        status == RentalStatus::ACTIVE ||
        status == RentalStatus::CANCELLED ||
        status == RentalStatus::COMPLETED;
}


bool RentalValidator::isInteger(const std::string& string)
{
    if (string.empty())
    {
        return false;
    }

    for (char character : string)
    {
        if (character < '0' || character > '9')
        {
            return false;
        }
    }

    return true;
}

