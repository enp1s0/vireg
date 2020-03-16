#include <fstream>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv) {
	// Set target register
	char target_reg = '"';
	if (argc >= 2) {
		target_reg = argv[1][0];
	}

	// Make a file path to .viminfo
	std::string viminfo_path = std::string(getenv("HOME")) + "/.viminfo";
	const char* env_ptr = getenv("VREG_VIMINFOPATH");
	if (env_ptr) {
		viminfo_path = env_ptr;
	}

	std::cerr << viminfo_path << std::endl;

	// Load viminfo
	std::ifstream ifs(viminfo_path);
}
