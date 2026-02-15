#include <fstream>
#include <string>
#include <iostream>
#include <iterator>

int main(int argc, char **argv)
{
    std::string filename;
    std::string changed_filename;
    std::string s1;
    std::string s2;

    if (argc != 4)
    {
        std::cout << "Error: missing arguments" << std::endl;
        return 1;
    }
    filename = argv[1];
    changed_filename = argv[1];
    changed_filename.append(".replace");
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty())
    {
        std::cout << "Error: string to replace (in the file given) cannot be empty" << std::endl;
        return 1;
    }
    std::ifstream file(argv[1]);
    if (!file)
    {
        std::cout << "Couldn't open input file." << std::endl;
		return (1);
    }
    std::string content = std::string(
        std::istreambuf_iterator<char>(file),
        std::istreambuf_iterator<char>()
    );

    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos)
    {  
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.size();
    }
    result += content.substr(pos);
    std::ofstream output_file(changed_filename);
    if (!output_file)
    {
        std::cout << "Couldn't create output file." << std::endl;
        return 1;
    }
    output_file << result;

    std::cout << result ;
    return 0;
}
