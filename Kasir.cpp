#include <iostream>
using namespace std;

int main()
{
bool running; // Kondisi kasir run atau tidak
int tehkotak=0,telur=0,indomie=0,chitato=0;
long long total=0;
        cout << "1. Teh Kotak || 4000" << endl;
        cout << "2. Telur || 2000" << endl;
        cout << "3. Indomie || 3000" << endl;
        cout << "4. Chitato || 5000" << endl;
        cout << "5. Berhenti" << endl;
        running = true;
while(running){
        int i;
        cin >> i;
        switch(i){
            case 1:
            tehkotak++;
            total += 4000;
            break;
            case 2:
            telur++;
            total += 2000;
            break;
            case 3:
            indomie++;
            total+= 3000;
            break;
            case 4:
            chitato++;
            total += 5000;
            break;
            case 5:
            running = false;
            break;
        }

    }
if(tehkotak != 0){
    cout << "Banyaknya Teh Kotak: "<< tehkotak << endl;
}
if(telur != 0){
    cout << "Banyaknya Telur: "<< telur << endl;
}
if(indomie != 0){
    cout << "Banyaknya Indomie: "<< indomie << endl;
}
if(chitato != 0){
    cout << "Banyaknya Chitato: "<< chitato << endl;
}
cout << "Total harga yang harus dibayar: " << total << endl;
return 0;
}
