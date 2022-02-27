\name{putOptionPricer-package}
\alias{putOptionPricer-package}
\alias{putOptionPricer}
\docType{package}
\title{
  Price a put option using Monte Carlo model.
}
\description{
  Uses Monte Carlo model to price options with down-and-in strategy.
}
\details{
  There are two function that can be used.

  getPutOptionPrice() returns the theoretical price of the option
  getPutOptionPath() returns a vector of theoretical prices.
}
\author{
  Raffaele di Costanzo.
}
\keyword{ package }
\examples{
  \dontrun{
     getPutOptionPrice(barrier=50).
  }
}
