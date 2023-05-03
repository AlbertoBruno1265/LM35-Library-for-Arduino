# LM35-Library-for-Arduino
A Library to use in arduino with LM35 temperature sensor.

## Abstract
Library created to facilitate the use of the LM35 temperature sensor.

## Operation
The LM35 temperature sensor has three pins: VCC(5V+), VOUT, GND.

As the temperature varies, the voltage of the VOUT pin varies by 10mV/°C, with this, we can do the calculation to transform voltage into temperature as follows:

```
Voltage = analogRead(VOUT_PIN) * (5.0 / 1023)
Temperature = Voltage / 0.01V
```

## Eletronic Circuit
![Eletronic Circuit](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/Eletronic%20Circuit/Eletronic_Circuit.png)


## Methods
| **Method**           | **Description**                                                                     | **Args**                                                                                                                                     |
| :--------------- | :------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------- |
| average_temperature(int opt, int times) | Calculates the average temperature on some scale and at a given amount of times | **opt**: An integer number to represents the temperature scale(0: Celsiu; 1: Fahrenheit; 2: Kelvin), **times**: The number of times the number will be checked
| get_temp_c() | Gets the temperature in Celsius scale | None
| get_temp_f() | Gets the temperature in Fahrenheit scale | None
| get_temp_k() | Gets the temperature in Kelvin scale | None
| port() | Returns the port where the sensor is installed | None

## How to install the library
**1 - Click on Code**

![1 - Click on Code.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/1%20-%20Click%20on%20Code.png)

**2 - Click on Download ZIP**

![2 - Click on Download ZIP.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/2-%20Click%20on%20Download%20ZIP.png)

**3 - Open Arduino IDE**

![3 - Open Arduino IDE.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/3-%20Open%20Arduino%20IDE.png)

**4 - Go to "Sketch"**

![4 - Go to Sketch.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/4%20-%20Go%20to%20Sketch.png)

**5 - Click on "Include Library"**

![5 - Click on Include Library.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/5%20-%20Click%20on%20Include%20Library.png)

**6 - Click on "Add .ZIP Library"**

![6 - Click on Add .ZIP Library.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/6%20-%20Click%20on%20Add%20.ZIP%20Library.png)

**7 - Click on "Downloads"**

![7 - Click on Downloads.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/7%20-%20Click%20on%20Downloads.png)

**8 - Select .ZIP Library**

![8 - Select .ZIP Library.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/8%20-%20Select%20.ZIP%20Library.png)

**9 - Success**

![9 - Success.png](https://github.com/AlbertoBruno1265/LM35-Library-for-Arduino/blob/main/docs/How%20Install/9%20-%20Success.png)

## My LinkedIn
Click [here](https://www.linkedin.com/in/alberto-bruno-silvestre-de-oliveira-b7a010259/) to acesse my LinkedIn
