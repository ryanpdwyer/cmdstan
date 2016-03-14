#ifndef CMDSTAN_ARGUMENTS_VARIATIONAL_FULLRANK_HPP
#define CMDSTAN_ARGUMENTS_VARIATIONAL_FULLRANK_HPP

#include <cmdstan/arguments/categorical_argument.hpp>

namespace stan {

  namespace services {

    class arg_variational_fullrank: public categorical_argument {
    public:
      arg_variational_fullrank() {
        _name = "fullrank";
        _description = "full-rank covariance";
      }
    };
  }  // services
}  // stan

#endif

