#ifndef STAN_SERVICES_ARGUMENTS_ARG_METHOD_HPP
#define STAN_SERVICES_ARGUMENTS_ARG_METHOD_HPP

#include <cmdstan/arguments/list_argument.hpp>
#include <cmdstan/arguments/arg_sample.hpp>
#include <cmdstan/arguments/arg_optimize.hpp>
#include <cmdstan/arguments/arg_variational.hpp>
#include <cmdstan/arguments/arg_diagnose.hpp>

namespace stan {
  namespace services {

    class arg_method: public list_argument {
    public:
      arg_method() {
        _name = "method";
        _description = "Analysis method (Note that method= is optional)";

        _values.push_back(new arg_sample());
        _values.push_back(new arg_optimize());
        _values.push_back(new arg_variational());
        _values.push_back(new arg_diagnose());

        _default_cursor = 0;
        _cursor = _default_cursor;
      }
    };

  }  // services
}  // stan

#endif

