#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;

int main(){
    cout << "this is a minecraft spreed bridge cheat" << endl;


    while (true)
    {

        //to kill the hack
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            cout << "hack terminated" << endl;
            return 0;
        }

        //speed building 

        if (GetAsyncKeyState(VK_DOWN)){
            Sleep(600);
            cout<<"down arrow was pressed"<< endl;
            cout<<"building horizontally"<< endl;

            bool exit =  false;

            while (exit == false){


                cout <<"building horizontally"<< endl;
    
                

                //moving back 
                SHORT KeyS;
                UINT mappedKeyS;
                INPUT inputKeyS;
                KeyS = 0x53;
                mappedKeyS = MapVirtualKey(LOBYTE(KeyS), 0);
                inputKeyS.type = INPUT_KEYBOARD;
                inputKeyS.ki.dwFlags = KEYEVENTF_SCANCODE;
                inputKeyS.ki.wScan =  mappedKeyS;
                SendInput(1, &inputKeyS, sizeof(inputKeyS));
        

                // start crouch

                SHORT KeyCtr;
                UINT mappedKeyCtr;
                INPUT inputKeyCtr;
                KeyCtr = 0xA2;
                mappedKeyCtr = MapVirtualKey(LOBYTE(KeyCtr), 0);
                inputKeyCtr.type = INPUT_KEYBOARD;
                inputKeyCtr.ki.dwFlags = KEYEVENTF_SCANCODE;
                inputKeyCtr.ki.wScan =  mappedKeyCtr;
                SendInput(1, &inputKeyCtr, sizeof(inputKeyCtr));

                Sleep(300);

                //placing block
                INPUT MouseLeft = { 0 };
                MouseLeft.type = INPUT_MOUSE; 
                MouseLeft.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
                SendInput(1, &MouseLeft, sizeof(MouseLeft));

                Sleep(50);

                MouseLeft.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
                SendInput(1, &MouseLeft, sizeof(MouseLeft));


                inputKeyCtr.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
                SendInput(1, &inputKeyCtr, sizeof(inputKeyCtr));

                Sleep(150);


 
                if (GetAsyncKeyState(VK_DOWN)){

                    Sleep(500);
                    exit = true;

                    MouseLeft.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
                    SendInput(1, &MouseLeft, sizeof(MouseLeft));


                    inputKeyS.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
                    SendInput(1, &inputKeyS, sizeof(inputKeyS));
                }           
            }
        }
    }
}
