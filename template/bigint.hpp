#include <vector>
#include <string>
#include <iostream>
class BIGINT{
    private:
    std::vector<signed char>v;
    bool plusminus=false;//If minus, true.
    public:
    std::vector<signed char> RET_VECTOR(){
        return this->v;
    }
    int DIGIT(){
        return this->v.size();
    }
    BIGINT(std::string s){
        v.resize(s.size());
        for(int i=0;i<v.size();i++)v[i]=s[i];
    }
    template<class T>
    BIGINT(T a){
        std::string s=std::to_string(a);
        *this=BIGINT(s);
    }
    BIGINT operator=(BIGINT i){
        this->v=i.v;
        return *this;
    }
    template<class T>
    BIGINT operator=(T a){
        std::string s=std::to_string(a);
        *this=BIGINT(s);
        return *this;
    }
    BIGINT operator+(BIGINT a){
        std::vector<signed char>retvec;
       int _max_size=max(*this->v.size(),a.RET_VECTOR.size());
        for(int i=0;i<n;i++){
            //start making from here.
            //make an BIGGER check, and check whether the answer becomes plus either minus.
        }
    }
};
std::ostream& operator<<(std::ostream& o, BIGINT b){
    std::vector vec=b.RET_VECTOR();
    for(int i=0;i<vec.size();i++){
        o<<vec[i];
    }
    return o;
}