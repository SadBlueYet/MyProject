#include "graphicsFoonctions.h"
#include <utility>
std::pair<double, double> sinGraph(std::string str){
    std::string stringValue = "";
    std::pair<double, double> value;
    int counter = 0;
    for (int i = 0; i < str.length(); i++){
        if (isdigit(str[i]) || str[i] == '.') stringValue += str[i];
        if (str[i] == '-') counter++;
        if (str[i] == '+') counter--;
        if (str[i] == '=') {
            value.first = stod(stringValue);
            stringValue = "";
            if (counter == -1) value.first /= -1;
        }
    }
    value.second = stod(stringValue);
    return value;
}
