#pragma once
#include <string>

template<typename data1,typename data2>
class word{
    public:
        //default
        word(data1 k = L' ', std::string s = "" ,data2 engl = ""){
            this->kanji_ = k;
            this->see_kanji_ = s;
            this->engl_ = engl;
        }
        void set_kanji(data1 k){
            this->kanji_ = k;
        }
        //getting the value of the character
        size_t get_value(){
            return kanji_;
        }
        data1 get_kanji(){
            return this->kanji_;
        }
        std::string get_see_kanji(){
            return see_kanji_;
        }
        data2 get_meaning(){
            return this->engl_;
        }
    private:
        //storing a wide chacater
        data1 kanji_;
        std::string see_kanji_;
        data2 engl_;
};