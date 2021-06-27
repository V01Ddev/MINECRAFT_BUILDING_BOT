from pynput import keyboard
import pydirectinput
import time


##horizontal

def horizontal():

    def edge_moving():
        pydirectinput.keyDown('ctrl')
        pydirectinput.keyDown('s')

        time.sleep(.7)

        pydirectinput.keyUp('s')
        time.sleep(.2)
        pydirectinput.keyUp('ctrl')
        

    def building():
        pydirectinput.rightClick()

    
    ##using functions 
    edge_moving()
    building()




##vertical

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




##running 


break_program = False

break_program2 = False

def on_press(key):
    
    global break_program
    global break_program2
    

    ##first program
    if key == keyboard.Key.left and break_program:
        print('left arrow pressed')
        break_program = False

    if key == keyboard.Key.right:
        print('right arrow pressed')
        break_program = True


    ##second program
    if key == keyboard.Key.down and break_program2:
        print('up arrow pressed')
        break_program2 = False

    if key == keyboard.Key.up:
        print("down arrow pressed")
        break_program2 = True


print("this program may slow oen your key boardinput as it is listing to start")

print("\nPress left arrow key to stop the horizontal building bot.")
print("Press right arrow key to start the horizontal building bot.\n")


print("\nPress down arrow key to stop the vertical building bot.")
print("Press up arrow key to start the vertical building bot.")


listener =  keyboard.Listener(on_press=on_press)
listener.start()
while True:
    if break_program:
        horizontal()

    if break_program2:
        vertical()