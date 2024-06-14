#include <iostream>
#include <string>

int main(){
    wchar_t kanji = L'夢';
    std::cout<< kanji << std::endl;
    kanji = L'日';
    std::cout<< kanji << std::endl;
    kanji = L'月';
    std::cout<< kanji << std::endl;
    wchar_t kanji2[] = L"日月木金土水";
    for(int i = 0; i < 7; i++){
        std::cout << kanji2[i] << std::endl;
    }
    std::cout << kanji2[3]<<std::endl;
    std::string k = std::to_string(wchar_t(kanji2[0]));
    std::cout << k << std::endl;
}