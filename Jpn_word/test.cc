#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "word.h"
#include <unordered_map>
#include <vector>

TEST_CASE("testing the word object"){
    //This will check the value for 1 kanji
    word<wchar_t,std::string> w1;
    w1.set_kanji(L'夢');
    size_t val = w1.get_value();
    CHECK(val == 22818);
    //We want to see if we get the same value
    std::unordered_map<size_t,word<wchar_t,std::string>> list{};
    wchar_t kanji[] = L"日月木金土水";
    std::vector<std::string> meaning{"day","month","tree","gold","ground","water"};
    for(int i = 0; i < 6;i++){
        size_t s = kanji[i];
        list[kanji[i]] = word(kanji[i],"",meaning[i]);
    }
    int i = 5;
    for(auto get: list){
        CHECK(get.first == size_t(kanji[i]));
        i--;
    }
    //Check if we get the correct kanji Character/meaning 
    size_t s = kanji[0];
    word copy = list[s];
    CHECK(copy.get_kanji() == kanji[0]);
    CHECK(copy.get_kanji() != kanji[1]);
    CHECK(copy.get_value() == s);
    CHECK(copy.get_meaning()==meaning[0]);

    //We are passing one as a wide char and the other is a string
    word w3(L'金',"金","");
    CHECK(w3.get_value() == 37329);
    CHECK(w3.get_see_kanji()=="金");
    CHECK(w3.get_kanji() == L'金');

}