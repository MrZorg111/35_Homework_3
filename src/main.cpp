#include <iostream>
#include <filesystem>

auto recursiveGetFileNamesByExtension = [](std::filesystem::path _path, const std::string _extension){
    for(auto& p: std::filesystem::recursive_directory_iterator(_path)) {
        if(is_regular_file(p) && p.path().extension().compare(_extension)) {
            std::cout << p.path().filename() << std::endl;
        }
    }
};



int main() {
    auto path("P:\\SkillBox"), extansion(".txt");

    recursiveGetFileNamesByExtension(path, extansion);


return 0;
}