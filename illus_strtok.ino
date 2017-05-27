#include <string.h>
const char *gpsdata = "$GPGGA,021955.00,0536.59369,N,00015.81379,W,1,08,0.99,45.8,M,,*72";
char *str, *token, *saveptr;
String parsedData[14];
int i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("String Tokens:");
  for (i = 0, str = gpsdata;; i++, str = NULL) {
    token = strtok_r(str, ",", &saveptr);
    if(token == NULL) break;
    parsedData[i] = token; 
  }
  //  The data is parsed into an array
  //  you can perform simple array operationson it eg.
  Serial.println(parsedData[13]);
  // Or
  for(int j = 0; j < 14; j++){
    Serial.println(parsedData[j]);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
