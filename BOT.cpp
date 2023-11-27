#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;


int main()
{
    cout << "use the up arrow key to build up" << endl;
    cout << "use the down arrow key to build off to the side" << endl;
    cout << "use esc to exit out of the program" << endl;
    cout << "make sure to stop building before using esc or else it won't stop" << endl;
    cout << "made by V01D" << endl;


    while (true){



        //to terminate the BOT
        if (GetAsyncKeyState(VK_ESCAPE)){
            cout<<"The BOT has been killed"<< endl;
            return 0;
        }



        //to build up 
        if (GetAsyncKeyState(VK_UP)){
            Sleep(500);
            cout<<"UP arrow was pressed"<< endl;
            cout<<"building stright up"<< endl;

            bool exit = false;
              
            while (exit == false){

                cout << "building verticallly" << endl;

                Sleep(500);

                //moving back
                SHORT key0;
                UINT mappedkey0;
                INPUT input0 = { 0 };
                key0 = 0x20;
                mappedkey0 = MapVirtualKey(LOBYTE(key0), 0);
                input0.type = INPUT_KEYBOARD;
                input0.ki.dwFlags = KEYEVENTF_SCANCODE;
                input0.ki.wScan = mappedkey0;
                SendInput(1, &input0, sizeof(input0));


                //placing block

                INPUT input1 = { 0 };
                input1.type = INPUT_MOUSE; 
                input1.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
                SendInput(1, &input1, sizeof(input1));

                
                if (GetAsyncKeyState(VK_UP)){
                    Sleep(500);
                    exit = true;

                    input0.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
                    SendInput(1, &input0, sizeof(input0));

                    input1.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
                    SendInput(1, &input1, sizeof(input1)); 
                }
                
            }

        }

        //to build to the side
        if (GetAsyncKeyState(VK_DOWN)){
            Sleep(500);
            cout<<"down arrow was pressed"<< endl;
            cout<<"building horizontally"<< endl;

            bool exit =  false;

            while (exit == false){

                cout <<"building horizontally"<< endl;


                //crouching 
                SHORT key2;
                UINT mappedkey2;
                INPUT input2;
                key2 = 0xA2;
                mappedkey2 = MapVirtualKey(LOBYTE(key2), 0);
                input2.type = INPUT_KEYBOARD;
                input2.ki.dwFlags = KEYEVENTF_SCANCODE;
                input2.ki.wScan =  mappedkey2;
                SendInput(1, &input2, sizeof(input2));
    
                
                //moving back 
                SHORT key3;
                UINT mappedkey3;
                INPUT input3;
                key3 = 0x53;
                mappedkey3 = MapVirtualKey(LOBYTE(key3), 0);
                input3.type = INPUT_KEYBOARD;
                input3.ki.dwFlags = KEYEVENTF_SCANCODE;
                input3.ki.wScan =  mappedkey3;
                SendInput(1, &input3, sizeof(input3));
 

                //placing block
                INPUT input4 = { 0 };
                input4.type = INPUT_MOUSE; 
                input4.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
                SendInput(1, &input4, sizeof(input4));
                Sleep(100);
                input4.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
                SendInput(1, &input4, sizeof(input4));

 
                if (GetAsyncKeyState(VK_DOWN)){
                    Sleep(500);
                    exit = true;
                    input2.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
                    SendInput(1, &input2, sizeof(input2));

                    input3.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
                    SendInput(1, &input3, sizeof(input3));

                }
            
            }
        
        }
 
    } 

}

