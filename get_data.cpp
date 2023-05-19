#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <MPU6050.h>
#include <SPI.h>
#include <SD.h>

// instância do sensor BMP280
Adafruit_BMP280 bmp;

// instância do sensor MPU6050
MPU6050 mpu;

// pino do chip select para o módulo SD
const int chipSelect = 4;

void setup() {
  Serial.begin(9600);

  // comunicação I2C
  Wire.begin();

  // conexão com o BMP280
  if (!bmp.begin(0x76)) {
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }

  // MPU6050
  mpu.initialize();

  // conexão com o MPU6050
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while(1);
  }

  // módulo SD
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    while(1);
  }
}

void loop() {
  // pressão atmosférica e temperatura do BMP280
  float pressure = bmp.readPressure();
  float temp = bmp.readTemperature();

  // dados do acelerômetro e do giroscópio do MPU6050
  int16_t ax, ay, az;
  int16_t gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // CSV
  File dataFile = SD.open("data.csv", FILE_WRITE);

  // insere dados no arquivo
  if (dataFile) {
    dataFile.print(pressure);
    dataFile.print(",");
    dataFile.print(temp);
    dataFile.print(",");
    dataFile.print(ax);
    dataFile.print(",");
    dataFile.print(ay);
    dataFile.print(",");
    dataFile.print(az);
    dataFile.print(",");
    dataFile.print(gx);
    dataFile.print(",");
    dataFile.print(gy);
    dataFile.print(",");
    dataFile.println(gz);

    dataFile.close();
  }

  delay(1000);
}
