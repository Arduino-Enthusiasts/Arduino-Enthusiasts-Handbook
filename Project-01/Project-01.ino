bool a = false;
bool b = false;
bool c = false;
bool d = false;
bool e = false;

int buttonPin = 13

void setup()
{
  for(int i = 2; i < 7; i++) {
  	pinMode(i, OUTPUT);
  }
  pinMode(buttonPin, INPUT);
  delay(500);
}

void loop()
{
  if(digitalRead(buttonPin) == HIGH) {
        a = false;
       	b = false;
       	c = false;
       	d = false;
       	e = false;
    applyValues();
    delay(1000);
  } else {
    increaseCount();
    applyValues();
  }
  for(int i = 0; i<1000;i+=20) {
    if(digitalRead(buttonPin) == HIGH) {
      a = false;
      b = false;
      c = false;
      d = false;
      e = false;
      applyValues();
      delay(1000-i);
    } else {
      delay(20);
    }
   }
}

void increaseCount() {
  if(a) {
  	a = false;
    if(b) {
   		b = false;
      	if(c) {
        	c = false;
          	if(d) {
            	d = false;
              	if(e) {
                	e = false;
                } else {
                	e = true;
                }
            } else {
            	d = true;
            }
        }else {
        	c = true;
      	}
    } else {
    	b = true;
    }
  } else {
  	a = true;
  }
}

void applyValues() {
  if(a) {digitalWrite(6, HIGH);} else {digitalWrite(6, LOW);}
  if(b) {digitalWrite(5, HIGH);} else {digitalWrite(5, LOW);}
  if(c) {digitalWrite(4, HIGH);} else {digitalWrite(4, LOW);}
  if(d) {digitalWrite(3, HIGH);} else {digitalWrite(3, LOW);}
  if(e) {digitalWrite(2, HIGH);} else {digitalWrite(2, LOW);}
}
