#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int berat_badan;
    float tinggi_badan_cm, tinggi_badan_m, BMI;
    
    cout << "\t" << "BMI CALCULATOR" << endl;
    cout << "-----------------------------" << endl;
    
    cout << " " << endl;
    cout << "   BMI" << "\t\t" << "Keterangan" << endl;
    cout << "-----------" << "\t" << "-----------" << endl;
    cout << " >18.5" << "\t\t" << "Kekurangan berat badan" << endl;
    cout << " 18.5 - <25" << "\t" << "Ideal" << endl;
    cout << " 25 - <30" << "\t" << "Kelebihan berat badan" << endl;
    cout << " >30" << "\t\t" << "Obesitas" << endl;
    cout << "-----------------------------" << endl;
    cout << " " << endl;
    
    cout << "Input berat badan (kg): ";
    cin >> berat_badan;
    cout << "Input tinggi badan (cm): ";
    cin >> tinggi_badan_cm;
    
    tinggi_badan_m = float(tinggi_badan_cm/100);
    
    BMI = berat_badan / (tinggi_badan_m*tinggi_badan_m);
    cout << " " << endl;
    cout << "Berat badan: " << berat_badan << " kg" << endl;
    cout << "Tinggi badan: " << tinggi_badan_cm << " cm" << endl;
    cout << "BMI: " << setprecision(3) << BMI << endl;
    
    if (BMI < 18.5 && BMI > 0)
        cout << "Keterangan BMI: Kekurangan berat badan" << endl;
    else if (BMI >= 18.5 && BMI <25 && BMI > 0)
        cout << "Keterangan BMI: Berat badan ideal" << endl;
    else if (BMI >= 25 && BMI < 30 && BMI > 0)
        cout << "Keterangan BMI: Kelebihan berat badan" << endl;
    else if (BMI >= 30 && BMI > 0)
        cout << "Keterangan BMI: Obesitas" << endl;
    else
        cout << "Input tidak valid" << endl;
    
    return 0;
}
