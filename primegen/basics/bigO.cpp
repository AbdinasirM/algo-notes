#include <string>
#include <iostream>
using namespace std;



// This is O of n because there is one operation happening
int sum_char_codes(string n){
    int sum = 0;
    
    for (size_t i = 0; i <n.length();++i){
        sum+=static_cast<int>(n[i]);
    }

    return sum; //this produces 1(N) 

}


// This is O of n because there is one operation happening
int ssum_char_codes(string n){

    int sum = 0;    
    
    for (size_t i = 0; i <n.length();++i){
        sum+=static_cast<int>(n[i]);
    }

    for(size_t j=0; i< n.legth(); ++j){
        sum+=static_cast<int>(n[j]);
    }

    return sum; //this produces a 2n Which is basically O(n) because the leading coefecient doesnt matter

    
}


int main(){

int result = sum_char_codes("Hello");
cout<<result<<endl;


return 0;
}