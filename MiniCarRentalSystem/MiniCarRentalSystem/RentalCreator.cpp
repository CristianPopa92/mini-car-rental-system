#include "RentalCreator.h"
#include "Rental.h"


RentalCreator::RentalCreator(
	std::string& rentalIdParam, 
	std::string& carIdParam, 
	std::string& customerNameParam, 
	short& numberOfDaysParam, 
	RentalStatus& statusParam
):
	rentalId{ rentalIdParam },
	carId{ carIdParam },
	customerName{ customerNameParam },
	numberOfDays{ numberOfDaysParam },
	status{ statusParam }
{
}


ICarRentalProduct* RentalCreator::createCarRentalProduct()
{
	return new Rental(rentalId, carId, customerName, numberOfDays, status);
}
