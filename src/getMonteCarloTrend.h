#ifndef GETMONTECARLOTREND_H
#define GETMONTECARLOTREND_H

#include <vector>

// prototype of the function
std::vector<double> getMonteCarloTrend(double Expiry,
						    double Strike,
						    double Spot,
						    double Vol,
						    double r,
						    unsigned long int NumberOfPaths,
						    double barrier);

#endif
