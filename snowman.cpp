# include <iostream>
# include <string>
#include "snowman.hpp"
#include<array>
const int Ten = 10;
const int length = 8;
const int five = 5;
std::string ans {};
std::string snowMan {};
using namespace std;
using namespace ariel;

namespace ariel{
    
    string hat(int x){

            ans = "";
            if(x == 1){
                ans += "_===_";
            }
            if(x == 2){
                ans += "___\n.....";
            }
            if(x == 3){
                ans += "_\n/_\\";
            }
            if(x == 4){
                ans += "___\n(_*_)";
            }
            return ans;
    }

    string nose_mouth(int x){
            ans = "";
            if(x == 1){
                ans += ",";
            }
            if(x == 2){
                ans += ".";
            }
            if(x == 3){
                ans += "_";
            }
            if(x == 4){
                ans += " ";
            }
            return ans;
    }

    string LEye(int x){
            ans = "";
            if(x == 1){
                ans += ".";
            }
            if(x == 2){
                ans += "o";
            }
            if(x == 3){
                ans += "O";
            }
            if(x == 4){
                ans += "-";
            }
            return ans;
    }

    string REye(int x){
            ans = "";
            if(x == 1){
                ans += ".";
            }
            if(x == 2){
                ans += "o";
            }
            if(x == 3){
                ans += "O";
            }
            if(x == 4){
                ans += "-";
            }
            return ans;
    }

    string LArm(int x){
            ans = "";
            if(x == 1){
                ans += "<";
            }
            if(x == 2){
                ans += "\\";
            }
            if(x == 3){
                ans += "/";
            }
            if(x == 4){
                ans += " ";
            }
            return ans;
    }

    string RArm(int x){
            ans = "";
            if(x == 1){
                ans += ">";
            }
            if(x == 2){
                ans += "/";
            }
            if(x == 3){
                ans += "\\";
            }
            if(x == 4){
                ans += " ";
            }
            return ans;
    }

    string torso(int x){
            ans = "";
            if(x == 1){
                ans += " : ";
            }
            if(x == 2){
                ans += "] [";
            }
            if(x == 3){
                ans += "> <";
            }
            if(x == 4){
                ans += "   ";
            }
            return ans;
    }

    string base(int x){
            ans = "";
            if(x == 1){
                ans += " : ";
            }
            if(x == 2){
                ans += "\" \"";
            }
            if(x == 3){
                ans += "___";
            }
            if(x == 4){
                ans += "   ";
            }
            return ans;
    }

    std::string snowman(int arr){
        int arrayCopy = arr;
        int i = 0;
        while(arrayCopy != 0){
            int m = arrayCopy%Ten;
            i++;
            if(i > length){
                throw out_of_range{"the length of the number should be 8!"};
            }
            if (m < 1){
                throw out_of_range{"the nbumer must be more than 0"};
            }
            if(m > 4){
                throw out_of_range{"the nbumer must be less than 4"};
            }
        arrayCopy = arrayCopy / Ten;
    }
    if(i != length){
        throw out_of_range{"the length of the number should be 8!"};
    }

    int a = arr;
    snowMan = "";
    array<int,length> ar {0,0,0,0,0,0,0,0};

    
    for(int i = length - 1; i >=0; i--){
        ar.at(i) = a % Ten;
        a = a/Ten;
    }

    string str1 = hat(ar[0]);
    string str2 = nose_mouth(ar[1]);
    string str3 = LEye(ar[2]);
    string str4 = REye(ar[3]);
    string str5 = LArm(ar[4]);
    string str6 = RArm(ar[five]);
    string str7 = torso(ar[five + 1]);
    string str8 = base(ar[length - 1]);

    
    if(ar[4] == 2 && ar[five] == 2){
     snowMan += str1 + "\n" + str5 + "(" + str3 + str2 + str4 + ")" +
     str6 + "\n(" + str7 + ")\n" + "(" + str8 + ")";
    }
    if(ar[4] == 2 && ar[five] != 2){
        snowMan += str1 + "\n" + str5 + "(" + str3 + str2 + str4 + ")\n"
        + "(" + str7 + ")" + str6 + "\n(" + str8 + ")";
    }
    if(ar[4] != 2 && ar[five] == 2){
        snowMan += str1 + "\n" + "(" + str3 + str2 + str4 + ")" +
        str6 + "\n" + str5 + "(" + str7 + ")\n" + "(" + str8 + ")";
    }
    if(ar[4] != 2 && ar[five] != 2){
        snowMan += str1 + "\n" + "(" + str3 + str2 + str4 + ")\n" +
        str5 + "(" + str7 + ")" + str6 + "\n(" + str8 + ")";
    }
    

        return snowMan;  
}

}