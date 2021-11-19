#include <iostream>

using namespace std;
 
int main() {
    int StartHour, StartMin, EndHour, EndMin, Hour, Min;
    cin >> StartHour >> StartMin >> EndHour >> EndMin;
    
    if(EndHour >= StartHour && EndMin > StartMin){
        Hour = EndHour - StartHour;
        Min = EndMin - StartMin;
    }
    else if(EndHour > StartHour && EndMin < StartMin){
        Min = (EndMin + 60) - StartMin;
        Hour = (EndHour - 1) - StartHour;
    }
    else if(EndHour < StartHour && EndMin > StartMin){
        Hour = (EndHour + 24) - StartHour;
        Min = EndMin - StartMin;
    }
    else if(EndHour < StartHour && EndMin < StartMin){
        Hour = (EndHour + 24 - 1) - StartHour;
        Min = (EndMin + 60) - StartMin;
    }
    else if(EndHour == StartHour && EndMin == StartMin){
        Hour = 24;
        Min = 0;
    }
    
    cout << "O JOGO DUROU "<< Hour <<" HORA(S) E " << Min << " MINUTO(S)" <<endl;
    
    return 0;
}