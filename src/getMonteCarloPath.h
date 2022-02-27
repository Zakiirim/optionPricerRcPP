#ifndef GETMONTECARLOPATH_H
#define GETMONTECARLOPATH_H

#include <vector>

// prototype of the function
std::vector<double> getMonteCarloPath(double Expiry,
						    double Strike,
						    double Spot,
						    double Vol,
						    double r,
						    unsigned long int NumberOfPaths);

#endif
