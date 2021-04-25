/*
 * DHT.h
 *
 *  Created on: Jun 28, 2020
 *      Author: Controllerstech.com
 */

#ifndef DHT_H_
#define DHT_H_

#include "main.h"

typedef struct
{
	float Temperature;
	float Humidity;
}DHT_DataTypedef;


void DHT_GetData (DHT_DataTypedef *DHT_Data);
void Set_Pin_Input (GPIO_TypeDef *, uint16_t );
void Set_Pin_Output (GPIO_TypeDef *, uint16_t );
#endif /* INC_DHT_H_ */
