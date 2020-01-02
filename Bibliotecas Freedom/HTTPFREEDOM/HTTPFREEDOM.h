#ifndef HTTPFREEDOM_h
#define HTTPFREEDOM_h

#include <Arduino.h> 

#include "ESP8266WiFi.h"
#include "WiFiClient.h"
#include "ESP8266WebServer.h"


class HTTPFREEDOM{
    public:
        void handleRoot(int endereco, int valor);

    private: 
    	std::unique_ptr<ESP8266WebServer> server;    

};

  


#endif