"""
Created by: James Couse
Created on: Oct 23 2023
This module turns the builtin LED on and off.
"""

import time
import board
import digitalio

delay == 1

led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(delay)
    led.value = False
    time.sleep(delay)
    delay += 1