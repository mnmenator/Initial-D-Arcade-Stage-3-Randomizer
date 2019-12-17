#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
  srand ( time(NULL) );
  int car =  rand() % 35 + 1;
  switch(car){
    case 1: cout << "86 Trueno" << endl; 
            break;
    case 2: cout << "86 Levin" << endl;
            break;
    case 3: cout << "MR-2" << endl;
            break;
    case 4: cout << "MR-S" << endl;
            break;
    case 5: cout << "Altezza RS-2000" << endl;
            break;
    case 6: cout << "85" << endl;
            break;
    case 7: cout << "Celica" << endl;
            break;
    case 8: cout << "EK9" << endl;
            break;
    case 9: cout << "S2000" << endl;
            break;
    case 10: cout << "Integra Type-R" << endl;
            break;
    case 11: cout << "EG6" << endl;
            break;
    case 12: cout << "FD" << endl;
            break;
    case 13: cout << "FC" << endl;
            break;
    case 14: cout << "Roadster RS" << endl; 
            break;
    case 15: cout << "Roadster S Special" << endl;
            break;
    case 16: cout << "RX-7 Spirit R" << endl;
            break;
    case 17: cout << "RX-8" << endl;
            break;
    case 18: cout << "Lan Evo 3" << endl;
            break;
    case 19: cout << "Lan Evo 4" << endl;
            break;
    case 20: cout << "Lan Evo 5" << endl;
            break;
    case 21: cout << "Lan Evo 6" << endl;
            break;
    case 22: cout << "Lan Evo 7" << endl;
            break;
    case 23: cout << "Skyline R32" << endl;
            break;
    case 24: cout << "Skyline R34" << endl;
            break;
    case 25: cout << "Silvia K (S-13)" << endl;
            break;
    case 26: cout << "Silvia K (s-14)" << endl;
            break;
    case 27: cout << "Silvia Spec-R" << endl; 
            break;
    case 28: cout << "180SX" << endl;
            break;
    case 29: cout << "Sileighty" << endl;
            break;
    case 30: cout << "Silvia Q's" << endl;
            break;
    case 31: cout << "Skyline GT-25 Turbo" << endl;
            break;
    case 32: cout << "Impreza" << endl;
            break;
    case 33: cout << "Worse Impreza" << endl;
            break;
    case 34: cout << "Cappuccino" << endl;
            break;
    case 35: cout << "Bunta" << endl;
            break;
  }
  
  int track = rand() % 100 + 1;
  if(track <= 7)
    cout << "Myogi" << endl;
  else if(track >= 8 && track <= 17)
    cout << "Usui" << endl;
  else if(track >= 18 && track <= 30)
    cout << "Akagi" << endl;
  else if(track >= 31 && track <= 43)
    cout << "Akina" << endl;
  else if(track >= 44 && track <= 48)
    cout << "Irohazaka" << endl;
  else if(track >= 49 && track <= 61)
    cout << "Akina Snow" << endl;
  else if(track >= 62 && track <= 74)
    cout << "Happogahara" << endl;
  else if(track >= 75 && track <= 87)
    cout << "Shomaru" << endl;
  else
    cout << "Tsuchisaka" << endl;
    
  int song = rand() % 11 + 1;
  switch(song){
    case 1: cout << "Speedy Speed Boy" << endl; 
            break;
    case 2: cout << "Remember Me" << endl;
            break;
    case 3: cout << "Save Me" << endl;
            break;
    case 4: cout << "Over the Rainbow" << endl;
            break;
    case 5: cout << "Stop your Self Control" << endl;
            break;
    case 6: cout << "Crazy for Love" << endl;
            break;
    case 7: cout << "Express Love" << endl;
            break;
    case 8: cout << "Blackout" << endl;
            break;
    case 9: cout << "Fall in the Web of Desire" << endl;
            break;
    case 10: cout << "Pamela" << endl;
            break;
    case 11: cout << "Fight for Love Tonight" << endl;
            break;
  }
  
  int direction = rand() % 2 + 1;
  if(direction == 1){
    if(track <= 17)
      cout << "Counter Clockwise" << endl;
    else if(track >= 62)
      cout << "Outbound" << endl;
    else
      cout << "Downhill" << endl;
  }
  else{
    if(track <= 17)
      cout << "Clockwise" << endl;
    else if(track >= 62)
      cout << "Inbound" << endl;
    else
      cout << "Uphill" << endl;
  }
  if(track < 49 || track > 61){
    int conditions = rand() % 4 + 1;
    if(conditions == 1){
      cout << "Wet" << endl;
    }
    else{
      cout << "Dry" << endl;
    }
    if(track < 62 || track > 74){
      int time = rand() % 2 + 1;
      if(time == 1){
        cout << "Day" << endl;
      }
      else{
        cout << "Night" << endl;
      }
    }
  }
}