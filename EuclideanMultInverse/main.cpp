#include <iostream>
#include <vector>
using namespace std;


void Euclidean(int a0, int a1){
    
    vector<int> a{a0,a1};
    vector<int> x{1,0};
    vector<int> y{0,1};    
    vector<int> q{0,0};
    
    for (int i = 2; i > 0; i++) {
        

        q.push_back( a.at(i-2)/a.at(i-1) );
        a.push_back( a.at(i-2) - ( q.at(i) * a.at(i-1) ) );
        x.push_back( x.at(i-2) - ( q.at(i) * x.at(i-1) ) );
        y.push_back( y.at(i-2) - ( q.at(i) * y.at(i-1) ) );

        
        if(a.at(i) == 1)
        {
//            cout << "a0 is: " << a.at(i) << endl;
//            cout << "x0 is: " << x.at(i) << endl;
            cout << "y0 (inverse) is: " << y.at(i) << endl;
            return;
        }
    }
}
int main() {

    int a0, a1 = 0;
    cout << "Enter a modulous and number:\n";
    cin >> a0 >> a1;
    Euclidean(a0, a1);
    
    return 0;
}
