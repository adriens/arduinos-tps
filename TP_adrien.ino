const int CONNEXION=17;
int my_delay=10;

void setup()
{
     Serial.begin(9600);// initialisation de la communication
     pinMode(CONNEXION,OUTPUT);
     Serial.println("Booting ...");// envoi d'un message
}

void loop()
{
    digitalWrite(CONNEXION,HIGH);
    delay(my_delay);
    digitalWrite(CONNEXION,LOW);
    delay(my_delay);
    my_delay = my_delay + 5;
    Serial.print("One more laps");
    Serial.println(my_delay);
}
