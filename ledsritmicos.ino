int sensor = A0; //Lee los datos dados por el sensor en la entrada analógica .
int led = 8; //Es el valor que tiene la entrada digital para el primer LED.
int led2 = 7; //Es el valor que tiene la entrada digital para el segundo LED.
int led3 = 6; //Es el valor que tiene la entrada digital para el tercer LED.
int led4 = 5; //Es el valor que tiene la entrada digital para el cuarto LED.
int led5 = 4; //Es el valor que tiene la entrada digital para el quinto LED.
int led6 = 3; //Es el valor que tiene la entrada digital para el sexto LED.
int led7 = 2; //Es el valor que tiene la entrada digital para el séptimo LED.

//Se indica qué configuración va a tener cada variable.
  void setup() {
//Se indica que cada led es de tipo salida.
   pinMode(led, OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5,OUTPUT);
   pinMode(led6, OUTPUT);
   pinMode(led7, OUTPUT);
   Serial.begin(9600); //Es la velocidad con que se establece la comunicación entre la placa y la computadora.
  }

//Se inicia el ciclo que repetirá 
   void loop() {

    int vol = analogRead(sensor); //Variable que toma los datos dados por el sensor en la entrada analógica.
    Serial.println(vol);//Muestra los valores que toma la variable vol, lo que nos permite ajustar el sensor y los rangos.
    
//Iniciamos los LEDs en apagado.
   digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
   
  //Colocamos los condicionales que indican la acción que hará cada LED en cada rango determinado.
  //Asignamos el primar valor de 410 ya que es un valor que detecta de buena forma sonidos cercanos y no se perturba por sonidos lejanos.
  if (vol>=410&&vol<=420){
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW); 
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW); 
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    delay(20);
    }
  if (vol>=430 && vol<=440){
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW); 
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    delay(20);
    }
    if (vol>=450&&vol<=460){
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW); 
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    delay(20);
    }
  if (vol>=470&&vol<=480){
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW); 
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    delay(20);
    }
  if (vol>=490&&vol<=500){
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH); 
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    delay(20);
    }
  if (vol>=510&&vol<=520){
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH); 
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
    delay(20);
    }
  if (vol>=530){
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH); 
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    delay(20);
    }
  }
