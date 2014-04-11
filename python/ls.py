import os

os.system('ls')

tmp = os.popen('ls').readlines()
print tmp

