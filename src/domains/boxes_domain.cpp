#include "domain_defs.hpp"
#include "domain_registry.hpp"
#include <crab_tests/domains.hpp>

namespace crab_tests {
#ifdef HAVE_LDD   
REGISTER_DOMAIN(AbstractDomain::BOXES, boxes_domain_t)
#endif 
} // end namespace crab_tests
