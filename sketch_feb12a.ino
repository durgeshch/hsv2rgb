const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  
}

void input(){
  while (Serial.available() > 0) {
    int h = Serial.parseInt();
    float s = Serial.parseFloat();
    float v = Serial.parseFloat();
  }  
}

void hsv2rgb(int h,float s,float v) {
  float c,x,m,r1,b1,g1;
  c=v*s;
  x=c*(1-abs((h/60)%2-1));
  m=v-c;
  int i=floor(h/60);
  switch(i){
    case 0:
     r1=c;
     b1=x;
     g1=0;
     break;
    case 1:
     r1=x;
     b1=c;
     g1=0; 
     break;
    case 2:
     r1=0;
     b1=c;
     g1=x;
     break;
    case 3:
     r1=0;
     b1=x;
     g1=c;
     break;
    case 4:
     r1=x;
     b1=0;
     g1=c;
     break;
    case 5:
     r1=c;
     b1=0;
     g1=x;
     break;
  }
 int val[]={(r1+m)*255,(b1+m)*255,(g1+m)*255};
}

