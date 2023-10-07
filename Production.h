//
// Created by Rowwel Ponesto on 10/6/23.
//

#ifndef CS311_HOMEWORK2_PRODUCTION_H
#define CS311_HOMEWORK2_PRODUCTION_H

#include <iostream>

using namespace std;

class Production {
private:
    string lhs;
    vector<string> rhs_options;
    vector<double> trans_probs;
public:
    Production();
    Production(string);
    void add_rhs(string, double);
    string expand() const;
};


#endif //CS311_HOMEWORK2_PRODUCTION_H
