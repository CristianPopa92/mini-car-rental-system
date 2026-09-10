#pragma once
#include "ICarRentalProduct.h"
#include <string>
#include "RentalStatus.h"

class Rental: public ICarRentalProduct
{
private:
	std::string rentalId;
	std::string carId;
	std::string customerName;
	short numberOfDays;
	RentalStatus status;

public:
	Rental(
		std::string& rentalIdParam,
		std::string& carIdParam,
		std::string& customerNameParam,
		short& numberOfDaysParam,
		RentalStatus& statusParam
	);

	Rental(const Rental& other);

	Rental& operator=(const Rental& other);

	virtual ~Rental();

	const std::string getRentalId() const;
	void setRentalId(const std::string& newRentalId);

	const std::string getCarId() const;
	void setCarId(const std::string& newCarId);

	const std::string getCustomerName() const;
	void setCustomerName(const std::string& newCustomerName);

	const short getNumberOfDays() const;
	void setNumberOfDays(const short& newNumberOfDays);

	const RentalStatus getStatus() const;
	void setStatus(const RentalStatus& newStatus);
};



