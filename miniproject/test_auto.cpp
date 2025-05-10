#include <fstream>

int main() {
    std::string output_file_path;
    std::string electrode_positions_line;
    std::string electrode_widths_line;
    std::string electrode_voltages_line;
 
    std::ifstream simulation_input_file("/Users/alekseidushanin/Documents/GitHub/LFI_KT/miniproject/dataset/sim_input.txt");
    if (simulation_input_file.is_open())
    {
        std::getline(simulation_input_file, output_file_path);
        std::getline(simulation_input_file, electrode_positions_line);
        std::getline(simulation_input_file, electrode_widths_line);
        std::getline(simulation_input_file, electrode_voltages_line);
        std::ofstream output_file(output_file_path);
        output_file << "Hello world!";
    }
    simulation_input_file.close();

    return 0;
}
