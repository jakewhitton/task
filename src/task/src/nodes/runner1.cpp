#include "../helper/runner.h"
#include <cmath>

task::position f(double t) {
	task::position result;

	double amplitude = 5.0;

	result.object_name = "runner1";
	result.x = amplitude * cos(t);
	result.y = amplitude * sin(t);
	result.z = 0.0;
	
	return result;
}

int main(int argc, char ** argv) {
	Runner runner(argc, argv, "runner1", f);
}
