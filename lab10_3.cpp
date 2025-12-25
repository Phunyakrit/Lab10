#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
int  count = 0;
float sum = 0;
float sum_of_square = 0;
string textline;
ifstream source("score.txt");

while (getline(source, textline)){
float num = atof(textline.c_str());
sum += num;
sum_of_square += pow(num, 2);
count++;
}
cout << "Number of data = " << count << endl;
cout << setprecision(3);
float mean = sum / count;
    float sd = sqrt((sum_of_square / count) - pow(mean, 2));
cout << "Mean = " << mean << endl;
cout << "Standard deviation = " << sd << endl;
source.close();
    return 0;    
}