#include <Rcpp.h>

const char* return_message() {
  return "message";
}

// [[Rcpp::export]]
void call_stop() {
  Rcpp::stop(return_message());
}
