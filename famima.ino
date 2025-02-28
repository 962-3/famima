#define echoPin 4 // Echo Pin
#define trigPin 3 // Trigger Pin
#define SENSOR 8

const int noteD = 587;  // レ
const int noteC = 527;  //ド
const int noteF4s =  739;//ファs
const int noteE = 659;//ミ
const int noteG =  783;//ソ
const int noteB =  987;//シ
const int noteA =  880;//ラ
const int noteDo =  1174;//レ オクターブ上
double Duration = 0; //受信した間隔
double Distance = 0; //距離


const int speakerPin = 2;  // スピーカー接続ピン

void setup() {
  pinMode(SENSOR, INPUT);
  Serial.begin(9600);
  pinMode(speakerPin, OUTPUT);
}

  if (digitalRead(SENSOR)) {
    playNote(noteB, 300
void loop() {
  // 音符とリズムに従って再生する
); // シ
    playNote(noteG, 300); // ソ
    playNote(noteD, 300); // レ
    playNote(noteG, 300); // ソ
    playNote(noteA, 300); // ラ
    playNote(noteDo, 300); // レ オクターブ上
    delay(250);            // 休符

    playNote(noteD, 300);  // レ
    playNote(noteA, 300);  // ラ
    playNote(noteB, 300);  // シ
    playNote(noteA, 300);  // ラ
    playNote(noteD, 300);  // レ
    playNote(noteG, 300);  // ソ
    digitalWrite(13, HIGH);
    delay(5000);
    digitalWrite(13, LOW);
  }
}

// 音を鳴らす関数
void playNote(int frequency, int duration) {
  tone(speakerPin, frequency, duration);
  delay(duration);
  noTone(speakerPin);
  delay(10); // 音の切り替え時の小さな休止
}
