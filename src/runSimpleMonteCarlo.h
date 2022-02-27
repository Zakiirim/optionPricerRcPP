#ifndef RUNSIMPLEMONTECARLO_H
#define RUNSIMPLEMONTECARLO_H


// prototype of the function
double runSimpleMonteCarlo(double Expiry,
						    double Strike,
						    double Spot,
						    double Vol,
						    double r,
						    unsigned long int NumberOfPaths,
                double barrier);

#endif
