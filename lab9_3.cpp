#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int i=0;
    double sum=0, d=0;
    string num;
    while(getline(source,num)){
        sum+=stod(num);
        d+=stod(num)*stod(num);
        i++;
    }
    double mean = (1.0/i)*sum;
    double strd = (1.0/i)*d-(mean*mean);

    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3) << "Mean = "<<mean<<endl;
    cout << setprecision(3) << "Standard deviation = "<<sqrt(strd)<<endl;
    source.close();
    return 0;

}
