#pragma once
#include <string>

template<typename data>
class word{
    public:
        //default
        word(){}
        word(data k, std::string s = ""){
            this->kanji_ = k;
            this->see_kanji_ = s;
        }
        void set_kanji(data k){
            this->kanji_ = k;
        }
        //getting the value of the character
        size_t get_value(){
            return kanji_;
        }
        data get_kanji(){
            return this->kanji_;
        }
        std::string get_see_kanji(){
            return see_kanji_;
        }
    private:
        //storing a wide chacater
        data kanji_;
        std::string see_kanji_;
};