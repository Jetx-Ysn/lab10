#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double sum=0,sum2=0;
    int count=0;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum2 += atof(textline.c_str()) * atof(textline.c_str());
        count++;
    }
    double u,x;
    u = sum/count;
    x = sqrt((sum2/count)-pow(u,2));
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << u << "\n";
    cout << "Standard deviation = " << x;
    
    return 0;

}