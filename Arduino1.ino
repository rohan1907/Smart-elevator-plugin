#include<SoftwareSerial.h>
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#define TxD 8
#define RxD 9


SoftwareSerial bluetoothSerial(TxD, RxD);

int c;

void setup() {
  bluetoothSerial.begin(9600);
  Serial.begin (9600); // initialize serial communications:
  lcd.begin(16, 2);

  // Print a message to the LCD.
}

void loop () {

  // read the value of the potentiometer:
  if (bluetoothSerial.available()) {
    c = bluetoothSerial.read();
    delay(450);
    Serial.println(c);
    int num = c - 48;
    
    if(char(c)=='9'){
      lcd.clear();
      lcd.print("EMERGENCY!!!");
      delay(2000);
      lcd.clear();
    }
    if(char(c)=='1'||char(c)=='3'||char(c)=='4'||char(c)=='5'||char(c)=='6'||char(c)=='7'||char(c)=='8'){
      lcd.clear();
      lcd.print("F L O O R : ");
      lcd.print(char(c));
    delay(2000);
    lcd.clear();
    }
      if(char(c)=='0'){
        lcd.clear();
        lcd.print("GROUND FLOOR");
        delay(2000);
        lcd.clear();
      }
    }
  }
