const int BTN_1 = 5;
const int BTN_2 = 6;
const int BTN_3 = 7;
const int BTN_4 = 8;
const int BTN_5 = 9;
const int BTN_6 = 10;
const int BTN_7 = 11;
const int BTN_8 = 12;
const int BTN_9 = 13;
int buttonState = 0;
const int BUTTONS[] = {BTN_1, BTN_2, BTN_3, BTN_4, BTN_5, BTN_6, BTN_7, BTN_8, BTN_9};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i <= 9; i++){
      pinMode(BUTTONS[i], INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  check_BTN();
  Serial.println("A");
}

void check_BTN(){
  for (int i = 0; i <= 9; i++){
      buttonState = digitalRead(BUTTONS[i]);
      switch (buttonState){
        case HIGH:
          Serial.println(BUTTONS[i]);
          break;
        case LOW:
          break;
        default:
          continue;
      }
  }
}
