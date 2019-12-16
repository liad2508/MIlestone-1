
// Parses the text we lexered beforehand until the index n.
#include "Command.h"
vector<std::__cxx11::string>* Command::parse(int n) {
    // The parsed data in a vector.
    vector<string>* parsed = new vector<string>;
    int i = 0;
    for(auto curr = (*this->interperted).begin(); i <= n; i++, curr++) {
        parsed->push_back(**curr);
    }
    return parsed;
}


vector<double> * Command::splitNums(char* data, char delimeter) {
    int i = 0;
    stringstream number;
    vector<double>* splitted = new vector<double>;
    while(data[i] != '\0') {

        // Parsing data until we reach ','
        while(data[i] != delimeter) {

            // Appending data to stream
            number << data[i];
            i++;
        }

        // Get the double value of the string in the stream
        splitted->push_back(stod(number.str()));
        i++;
    }
    return splitted;
}

void Command::UpdateVariables(map<std::__cxx11::string *, int> updatedVars,
        char SerOrCli) {
    locker.lock();

    // Update Server
    if (SerOrCli == 's') {

    }
    locker.unlock();
}