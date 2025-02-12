#include <vector>
#include <string>
#ifndef FIGURE_H
#define FIGURE_H 

class Figure{
    public:
        std::string type = "null";
        std::vector<float> vertices;
        std::vector<unsigned int> indices;

        /// @brief Loads the type of the figure specified on the file
        /// @param file Input stream of the file already opened
        void loadType(std::ifstream&);

        /// @brief Loads the vectors from the file to memory
        /// @param file Input stream of the file already opened
        void loadVectors(std::ifstream&);

        /// @brief Writes the figure type to a file
        /// @param file Output stream of a file already opened
        void saveType(std::ofstream&);

        /// @brief Writes the figure vectors to a file
        /// @param file Output stream of a file already opened
        void saveVectors(std::ofstream&);
};

#endif