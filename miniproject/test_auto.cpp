#include <fstream>

int main() {
    std::string output_file_path;
 
    std::ifstream simulation_input_file("/Users/alekseidushanin/Documents/GitHub/LFI_KT/miniproject/dataset/sim_input.txt");
    if (simulation_input_file.is_open())
    {
        std::getline(simulation_input_file, output_file_path);
        std::ofstream output_file(output_file_path);
        output_file << "Hello world!";
    }
    simulation_input_file.close();

    return 0;
}
