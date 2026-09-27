#include "CarRentalProductCreator.h"


const ICarRentalProduct* CarRentalProductCreator::getCarRentalProduct()
{
    ICarRentalProduct* carRentalProduct = createCarRentalProduct();

    return carRentalProduct;
}


CarRentalProductCreator::~CarRentalProductCreator()
{
}
