#include "CarValidator.h"
#include <string>


bool CarValidator::isValidCar(const Car& car)
{
    return 
        isValidId(car.getId()) &&
        isValidModel(car.getModel()) &&
        isValidType(car.getType()) &&
        isValidPricePerDay(car.getPricePerDay()) &&
        isValidStatus(car.getStatus());
}


bool CarValidator::isValidId(const std::string& id)
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

    return  integerId > 0;
}


bool CarValidator::isValidModel(const std::string& model)
{
    return !(model.empty());
}


bool CarValidator::isValidType(const CarType& type)
{
    return 
        type == CarType::HATCHBACK ||
        type == CarType::SEDAN ||
        type == CarType::SUV;
}


bool CarValidator::isValidPricePerDay(const double& pricePerDay)
{
    return pricePerDay > 0;
}


bool CarValidator::isValidStatus(const CarStatus& status)
{
    return 
        status == CarStatus::AVAILABLE ||
        status == CarStatus::RENTED ||
        status == CarStatus::SERVICE;
}


bool CarValidator::isInteger(const std::string& string)
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
