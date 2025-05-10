#include <fstream>
#include <iostream>

int main() {
    std::string output_file_path;
    std::string container;
 
    std::ifstream simulation_input_file("/Users/alekseidushanin/Documents/GitHub/LFI_KT/miniproject/dataset/sim_input.txt");
    if (simulation_input_file.is_open())
    {
        std::getline(simulation_input_file, output_file_path);
        
        std::vector<double> electrode_positions;  // Positions along x-axis in micrometers
        std::vector<double> electrode_voltages;  // Voltages in volts
        std::vector<double> electrode_widths;
        
        for (int i = 0; i < 5; i++) {
            std::getline(simulation_input_file, container);
            std::cout << container << std::endl;
            electrode_positions.push_back(stod(container));
        }

        std::getline(simulation_input_file, container);

        for (int i = 0; i < 5; i++) {
            std::getline(simulation_input_file, container);
            electrode_widths.push_back(stod(container));
        }

        std::getline(simulation_input_file, container);

        for (int i = 0; i < 5; i++) {
            std::getline(simulation_input_file, container);
            electrode_voltages.push_back(stod(container));
        }

        std::ofstream output_file(output_file_path);
        output_file << "Hello world!";

        for (int i = 0; i < 5; i++) {
            std::cout << electrode_positions[i] << electrode_widths[i] << electrode_voltages[i] << std::endl;
        }
    }
    simulation_input_file.close();

    return 0;
}
