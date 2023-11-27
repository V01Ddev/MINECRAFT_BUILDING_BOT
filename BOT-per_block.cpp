#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;


int main()
{
    cout << "use the up arrow key to build up" << endl;
    cout << "use the down arrow key to build of to the side" << endl;
    cout << "use esc to exit out of the program" << endl;
    cout << "make sure to stop building before useing esc or else it won't stop" << endl;
    cout << "made by V01D" << endl;



    //asking for the number of blocks
    int num_of_blocks;
    cout << "enter the number of blocks you want to build --> ";
    cin >> num_of_blocks;


    //asking for the number of blocks
    int ver_or_hor;
    cout << "do you want to build horizontally or vertically? (1 for horizontal, 2 for vertical) --> ";
    cin >> ver_or_hor;

    Sleep(3000);


    //to build up 
    if (ver_or_hor == 1){

        
        cout<<"building stright up"<< endl;

            
        for (int i = 0; i <= ver_or_hor; i = i + 1){

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
            
        }

    }

    //to build to the side
    if (ver_or_hor == 2){

        cout<<"down arrow was pressed"<< endl;
        cout<<"building horizontally"<< endl;


        for (int i = 0; i <= ver_or_hor; i = i + 1){

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

        }
    
    }



}

