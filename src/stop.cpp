#include <Rcpp.h>

const char* return_message() {
  return "message";
}

// [[Rcpp::export]]
void call_stop() {
  std::string msg = "message";
  Rcpp::stop(msg);
}
