import pyautogui
import pydirectinput
import time 

def vertical():

    
    def jumping():
        pydirectinput.keyDown('space')
        pydirectinput.keyUp('space')


    def building():
        pydirectinput.rightClick() 


    ##using functions 
    jumping()
    time.sleep(.1)
    building()

vertical()