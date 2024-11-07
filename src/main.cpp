#include <iostream>
#include <filesystem>

auto recursiveGetFileNamesByExtension = [](std::filesystem::path _path, const std::string _extension){
    for(auto& p: std::filesystem::recursive_directory_iterator(_path)) {
        if(is_regular_file(p.path()) && !p.path().extension().compare(_extension)) {
            std::cout << p.path().filename() << std::endl;
        }
    }
};



int main() {
    const auto path("P:\\SkillBox"), extension = ".txt";

    recursiveGetFileNamesByExtension(path, extension);


return 0;
}