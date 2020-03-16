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
	const char* env_ptr = getenv("VIREG_VIMINFOPATH");
	if (env_ptr) {
		viminfo_path = env_ptr;
	}

	// Load viminfo
	std::ifstream ifs(viminfo_path);

	std::string buffer;
	while (std::getline(ifs, buffer)) {
		if ((buffer.length() >= 2 && buffer.data()[0] == '"' && buffer.data()[1] == target_reg) ||
			(buffer.length() >= 3 && buffer.data()[0] == '"' && buffer.data()[1] == '"' && buffer.data()[2] == target_reg)) {
			while (std::getline(ifs, buffer)) {
				if (buffer.length() >= 1 && buffer.data()[0] == '|') {
					break;
				}
				std::printf("%s\n", buffer.substr(1).c_str());
			}
		}
	}
}
