#include "CarCreator.h"
#include "Car.h"


CarCreator::CarCreator(
    std::string& idParam, 
    std::string& modelParam, 
    CarType& typeParam, 
    double& pricePerDayParam, 
    CarStatus& statusParam
):
    id{ idParam },
    model{ modelParam },
    type{ typeParam },
    pricePerDay{ pricePerDayParam },
    status{ statusParam }
{
}


ICarRentalProduct* CarCreator::createCarRentalProduct()
{
    return new Car(id, model, type, pricePerDay, status);
}
