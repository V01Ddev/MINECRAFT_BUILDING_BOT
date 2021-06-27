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





def main():

    print("""
    1 --> build vertically
    2 --> build horizontally
    """)

    choice = int(input("in what direction do you want to build? --> "))

    blocks = int(input("how many blocks do you want to build? --> "))

    print("ok starting in 5 secs")

    time.sleep(5)

    if choice == 1:
        for i in range(blocks):
            vertical()
            print(f"block N.O {i}")

    elif choice == 2:
        for i in range(blocks):
            horizontal()
            print(f"block N.O {i}")

    else:
        print("invalid input.")


if __name__ == "__main__":
    main()
