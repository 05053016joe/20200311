const byte NUM = 8;
const byte led[] = { 8, 9, 10, 11, 12, 13, 14, 15};
const int delaytime = 100;
int i, j, k, x;


void setup() {
  Serial.begin(9600);
  delay(300);
  for (i = 0; i < NUM; i++)
  { pinMode(led[i], OUTPUT);
    digitalWrite(led[i], HIGH);
  }
}
void loop()
{
  for (x = 0; x < 2 ; x++) {
    for (i = 0; i < NUM  ; i++)
    { Serial.println(i);
      Serial.println(led[i]);
      digitalWrite(led[i], HIGH);
    }
    delay(delaytime);
    for (i = 0; i < NUM  ; i++)
    { Serial.println(i);
      Serial.println(led[i]);
      digitalWrite(led[i], LOW);
    }
  }
  delay(delaytime);
  for (j = 0; j < NUM ; j++)
  {
    digitalWrite(led[j], HIGH);
    delay(delaytime);
    digitalWrite(led[j], LOW);

  }
  delay(delaytime);
  for (x = 0; x < 2 ; x++) {
    for (i = 0; i < NUM  ; i++)
    { Serial.println(i);
      Serial.println(led[i]);
      digitalWrite(led[i], HIGH);
    }
    delay(delaytime);
    for (i = 0; i < NUM  ; i++)
    { Serial.println(i);
      Serial.println(led[i]);
      digitalWrite(led[i], LOW);
    }
  }
  delay(delaytime);
  for (k = NUM; k >= 0 ; k--)
  {

    digitalWrite(led[k], HIGH);
    delay(delaytime);
    digitalWrite(led[k], LOW);

  }
}
