
from flask import Flask, render_template, redirect, request


app = Flask(__name__)
app.config['SECRET_KEY'] = 'GYMBLE'


valor = app.routeID('display')



def appendToDisplay(input):
    valor.value +=input
    
    return valor
    
def clearDisplay():
    
    valor.value =""
    
    return valor

def calculate():
    try:
        valor.value=eval(valor.value)
        
    except:
        valor.value="ERRo"
        
    
    return valor
