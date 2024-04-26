import os 
import subprocess
from grafica import grafic_Ram


def ram_usage(opcion):
    """
    Funcion que muestra las opciones de la memoria ram
    """
    print(""" 
#                                       ____ #
# ,-.----.       ,---,                ,'  , `. #
# \    /  \     '  .' \            ,-+-,.' _ | #
# ;   :    \   /  ;    '.       ,-+-. ;   , || #
# |   | .\ :  :  :       \     ,--.'|'   |  ;| #
# .   : |: |  :  |   /\   \   |   |  ,', |  ': #
# |   |  \ :  |  :  ' ;.   :  |   | /  | |  || #
# |   : .  /  |  |  ;/  \   \ '   | :  | :  |, #
# ;   | |  \  '  :  | \  \ ,' ;   . |  ; |--' #
# |   | ;\  \ |  |  '  '--'   |   : |  | , #
# :   ' | \.' |  :  :         |   : '  |/ #
# :   : :-'   |  | ,'         ;   | |`-' #
# |   |.'     `--''           |   ;/ #
# `---'                       '---' #



       """)
    
    if opcion and opcion.upper()== "I":
       
        output = subprocess.getoutput('cat /proc/meminfo | grep "Mem" && cat /proc/meminfo | grep "Cache" ')
        print(output)

        MemTotal = int(subprocess.getoutput('cat /proc/meminfo | grep "MemTotal" | awk \'{print $2}\''))
        MemFree = int(subprocess.getoutput('cat /proc/meminfo | grep "MemFree" | awk \'{print $2}\''))
        MemAvailable = int(subprocess.getoutput('cat /proc/meminfo | grep "MemAvailable" | awk \'{print $2}\''))
        Cached= subprocess.getoutput('cat /proc/meminfo | grep "Cached" | awk \'{print $2}\' | head -n 1')
        SwapCached = int(subprocess.getoutput('cat /proc/meminfo | grep "SwapCached" | awk \'{print $2}\''))
        grafic_Ram(MemTotal, MemFree, MemAvailable, Cached, SwapCached)
        

    elif opcion and opcion.upper()== "M":
        os.system('sudo free -m | grep "caché" | awk \'{print$5}\' && sudo free -m | grep "Mem" | awk \'{print$6}\' '  )
    elif opcion and opcion.upper()== "E":
        os.system('sudo sync && sudo sysctl vm.drop_caches=1')
    elif opcion and opcion.upper()== "O":
        print("""
[opciones]
args:
                  

I     Muestra la informacion de la memoria Real
M     muestra informacion de la memoria cache
E     Elimina la memoria cache
O   Muestra las opciones
                  
ej:  py main.py -r i
     py main.py -r e
     py main.py -r m
              
                  """) 
    elif opcion is False:
            print("""
            |------------------------------------------|
            |(I)nformacion de la memoria real          |
            |(M)ostar informacion de la memoria cache  |
            |(E)liminar la memoria cache               |
            |(S)alir                                   |
            |------------------------------------------|

            """)

        


def vram_usage():
    """
    Funcion que muestra las opciones de la memoria virtual
    """
    print("""

#                                                      ____ #
#                ,-.----.       ,---,                ,'  , `. #
#        ,---.   \    /  \     '  .' \            ,-+-,.' _ | #
#       /__./|   ;   :    \   /  ;    '.       ,-+-. ;   , || #
#  ,---.;  ; |   |   | .\ :  :  :       \     ,--.'|'   |  ;| #
# /___/ \  | |   .   : |: |  :  |   /\   \   |   |  ,', |  ': #
# \   ;  \ ' |   |   |  \ :  |  :  ' ;.   :  |   | /  | |  || #
#  \   \  \: |   |   : .  /  |  |  ;/  \   \ '   | :  | :  |, #
#   ;   \  ' .   ;   | |  \  '  :  | \  \ ,' ;   . |  ; |--' #
#    \   \   '   |   | ;\  \ |  |  '  '--'   |   : |  | , #
#     \   `  ;   :   ' | \.' |  :  :         |   : '  |/ #
#      :   \ |   :   : :-'   |  | ,'         ;   | |`-' #
#       '---"    |   |.'     `--''           |   ;/ #
#                `---'                       '---' #




          """)
    while True:
        respuesta= input("""
                         
        |--------------------------------------|
        |                                      |
        |(I)nformacion de la memoria VIRTUAL   |
        |(S)alir                               |
        |                                      |                 
        |--------------------------------------|
                         
        --->""")
        if respuesta.upper()== "I":
            os.system('cat /proc/meminfo | grep  "Swap"')
        else:
            return
                         


def iout_options():
    """
    Funcion para mostrar discos montados en la maquina
    """
    print("""
#                                                     ,----.. #
#     ,---,        ,---,   .--.--.      ,----..      /   /   \ #
#   .'  .' `\   ,`--.' |  /  /    '.   /   /   \    /   .     : #
# ,---.'     \  |   :  : |  :  /`. /  |   :     :  .   /   ;.  \ #
# |   |  .`\  | :   |  ' ;  |  |--`   .   |  ;. / .   ;   /  ` ; #
# :   : |  '  | |   :  | |  :  ;_     .   ; /--`  ;   |  ; \ ; | #
# |   ' '  ;  : '   '  ;  \  \    `.  ;   | ;     |   :  | ; | ' #
# '   | ;  .  | |   |  |   `----.   \ |   : |     .   |  ' ' ' : #
# |   | :  |  ' '   :  ;   __ \  \  | .   | '___  '   ;  \; /  | #
# '   : | /  ;  |   |  '  /  /`--'  / '   ; : .'|  \   \  ',  / #
# |   | '` ,/   '   :  | '--'.     /  '   | '/  :   ;   :    / #
# ;   :  .'     ;   |.'    `--'---'   |   :    /     \   \ .' #
# |   ,.'       '---'                  \   \ .'       `---` #
# '---'                                 `---` #




          """)
    while True:
        response=  input("""
                        
|----------------------|
|(L)istar Discos       |
|(D)esmoontar discos   |
|(S)salir              |
|----------------------|
                            
---->       """)
        if response.upper()== "L":
            os.system('lsblk -o NAME,TYPE,SIZE,MOUNTPOINT |grep "sd"')
        elif response.upper()== "D":
            os.system('lsblk -o NAME,TYPE,SIZE,MOUNTPOINT |grep "sd"')
            disco= input("Escriba el nombre del disco a desmontar (ej.) sda o sde")
            os.system(f"sudo eject /dev/{disco}")
        elif response.upper()== "S":
            return
        else:
            print('Opcion incorrecta')