#pragma once
#include <string>
#include "Rental.h"
#include "RentalStatus.h"
class RentalValidator
{
public:
	static bool isValidRental(const Rental& rental);

	static bool isValidId(const std::string& id);
	static bool isValidCarId(const std::string& carId);
	static bool isValidCustomerName(const std::string& customerName);
	static bool isValidNumberOfDays(const short& numberOfDays);
	static bool isValidStatus(const RentalStatus& status);

protected:
	static bool isInteger(const std::string& string);
};

