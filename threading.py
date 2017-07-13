import threading
#import RPi.GPIO as GPIO
#import time

#GPIO.setmode(GPIO.BCM)

def setup(trigger, echo):
    """assigning different GPIO pins through threads"""
    # trigger = GPIO_TRIGGER
    # echo = GPIO_ECHO
    # GPIO.setup(GPIO_TRIGGER, GPIO.OUT)
    # GPIO.setup(GPIO_ECHO, GPIO.IN)
    print 'Trigger: %s' % trigger
    print 'Echo: %s' % echo
    return

threads = []
for i in range(3):
    t = threading.Thread(target=setup, args=(i+3,i+6))
    threads.append(t)
    t.start()
