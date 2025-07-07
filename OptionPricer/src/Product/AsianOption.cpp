#include "AsianOption.h"

AsianOption::AsianOption(double strike, double maturity, int numObservations)
	: _strike(strike), _maturity(maturity), _numObservations(numObservations) {
}

double AsianOption::getStrike() const {
	return _strike;
}

double AsianOption::getMaturity() const {
	return _maturity;
}

int AsianOption::getNumObservations() const {
	return _numObservations;
}
