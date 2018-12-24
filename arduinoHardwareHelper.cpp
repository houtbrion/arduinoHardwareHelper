#include "arduinoHardwareHelper.h"

HardwareHelper::HardwareHelper(void){
  //int pmwPorts[] = PMW_PORTS;
  //numOfPorts= (sizeof(pmwPorts) / sizeof(pmwPorts[0]))
}

bool HardwareHelper::checkPMW(int port) {
  int pmwPorts[] = PMW_PORTS;
  size_t numOfPorts= (sizeof(pmwPorts) / sizeof(pmwPorts[0]));
  for (int i=0; i< numOfPorts;i++){
    if (port == pmwPorts[i]) return true;
  }
  return false;
}
