#ifndef RUNMONTECARLO_H
#define RUNMONTECARLO_H

// prototype of the function
double runMonteCarlo(double Expiry,
						    double Strike,
						    double Spot,
						    double Vol,
						    double r,
						    unsigned long int NumberOfPaths);

#endif
