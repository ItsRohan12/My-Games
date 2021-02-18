import random
import time

print("A Dice Roller Game By Rohan")
print("Type 'y' to start: ", end = "")
s = str(input("")) #To get only String input 
print("\n")

while True:
  if s == 'y':
    number = random.randint(1, 6)
    
    time.sleep(1)
    
    print("\n")
    
    if number == 1:
      print("###########\n#         #\n#         #\n#    •    #\n#         #\n#         #\n###########")
    elif number == 2:
      print("###########\n#        •#\n#         #\n#         #\n#         #\n#•        #\n###########")
    elif number == 3:
      print("###########\n#        •#\n#         #\n#    •    #\n#         #\n#•        #\n###########")
    elif number == 4:
      print("###########\n#•       •#\n#         #\n#         #\n#         #\n#•       •#\n###########")
    elif number == 5:
      print("###########\n#•       •#\n#         #\n#    •    #\n#         #\n#•       •#\n###########")
    else:
      print("###########\n#•       •#\n#         #\n#•       •#\n#         #\n#•       •#\n###########")
    
  elif s == 'n':
    print("Alright Bye!")
    break
  else:
    print("Invalid Character!")
  print("Do You Want To Roll Again (y/n)?")
  s = str(input(""))