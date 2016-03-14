#ifndef STAN_SERVICES_ARGUMENTS_ARG_ENGINE_HPP
#define STAN_SERVICES_ARGUMENTS_ARG_ENGINE_HPP

#include <cmdstan/arguments/list_argument.hpp>

#include <cmdstan/arguments/arg_static.hpp>
#include <cmdstan/arguments/arg_nuts.hpp>

namespace stan {
  namespace services {

    class arg_engine: public list_argument {
    public:
      arg_engine() {
        _name = "engine";
        _description = "Engine for Hamiltonian Monte Carlo";

        _values.push_back(new arg_static());
        _values.push_back(new arg_nuts());

        _default_cursor = 1;
        _cursor = _default_cursor;
      }
    };

  }  // services
}  // stan

#endif

