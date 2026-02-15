#include <iostream>
#include <string>

using namespace std;

int main(){
    string SIR1, SIR2 = "STEP 2025"; 
    string SIR3 = SIR2; 
     
    string SIR4(3, '$'), SIR5("STEP 2025 ESS2421ro", 5, 4); 
     
    cout << "SIR4 = " << SIR4 << endl << "SIR5 = " << SIR5 << endl;   
    
    SIR1 = "STEP";
    cout << "SIR1 = " << SIR1 << endl;
    
    SIR1 = SIR2 + SIR4; 
    cout << "SIR1 = " << SIR1 << endl;
    
    SIR1 = SIR2 + SIR4;    
    cout << "SIR1 = " << SIR1 << endl;
	 
    SIR1 += SIR2 + SIR4; 
    cout << "SIR1 = " << SIR1 << endl; 
    
    SIR1 = "STEP";
    for(int i = 0; i < SIR1.length(); i++)
        cout << "SIR1[" << i << "] = " << SIR1[i] << ", " << SIR1.at(i) << endl; 
    
    cout << "SIR1 = " << (SIR1.empty() ? SIR1.length() : SIR1.length()) << endl;

    return 0;
}