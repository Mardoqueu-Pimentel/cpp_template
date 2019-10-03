#include <mardcpp/utils/Arguments.hpp>
#include <mardcpp/utils/app.hpp>
#include <mardcpp/stream/OutputStream.hpp>

#include <cpp_template/dummy.hpp>


int mc::app(const mc::Arguments &arguments) {

	mc::os << cpp_template::message() << '\n';

	return 0;
}