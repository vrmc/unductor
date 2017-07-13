import serial

ser = serial.Serial('/dev/tty.usbserial', 9600)
while True:
    control = raw_input()
    ser.write(control)
    print control

    
