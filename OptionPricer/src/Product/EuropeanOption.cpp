#include "EuropeanOption.h"

EuropeanOption::EuropeanOption(double strike, double maturity, int numObservations)
	: _strike(strike), _maturity(maturity), _numObservations(numObservations) {
}

double EuropeanOption::getStrike() const {
	return _strike;
}

double EuropeanOption::getMaturity() const {
	return _maturity;
}

int EuropeanOption::getNumObservations() const {
	return _numObservations;
}