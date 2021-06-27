import pyautogui
import pydirectinput
import time

def horizontal():

    def edge_moving():
        pydirectinput.keyDown('ctrl')
        pydirectinput.keyDown('s')

        time.sleep(0.8)

        pydirectinput.keyUp('s')
        time.sleep(.3)
        pydirectinput.keyUp('ctrl')
        

    def building():
        pydirectinput.rightClick()


    time.sleep(3)
    print('starting...')
    
    ##using functions 
    edge_moving()
    time.sleep(1)
    building()
    