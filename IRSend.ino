#Include <IRremoteESP8266.H>

Irsend IRsend ( 14 ); // send pin

Void Setup ()
{
  irsend.begin ();
  Serial.Begin ( 115200 );
}

Void Loop () {
   // NEC format 
  Serial.Println ( "NEC" );
  Irsend.SendNEC ( 0X02FD58A7 , 32 );
  Delay ( 200 );
}
