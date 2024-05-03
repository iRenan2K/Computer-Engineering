def converter_tempo(t0):            # "/" returns a floating-point number, "//" returns a integer
    d = t0 // (3600 * 24)       
    rem_t0 = t0 % (3600*24)         # rem_t0 is how many seconds remained from days ("d") calculation
    h = rem_t0 // 3600              
    min = (rem_t0 % 3600) // 60
    sec = (rem_t0 % 3600) % 60

    return d, h, min, sec           # returns a tuple: (d, h, min, sec)

while (t0 := int(input("\nEnter the time, in seconds: "))) < 0:     # input() returns a string, so use t0 = int(input(...))
    print("Error: Please enter a non-negative value!")              # ":=" is the walrus operator, it allows assigning a value to a variable while an expression is evaluated

d, h, min, sec = converter_tempo(t0)       # The values are unpacked from the tuple returned by the function

print("\n%d day(s), %02d:%02d:%02d" % (d, h, min, sec))     # HH:MM:SS time format