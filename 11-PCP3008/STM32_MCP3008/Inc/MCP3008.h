/*
 * MCP3008.h
 *
 *  Created on: 26 mars 2023
 *      Author: Pc_MAGH
 */

#ifndef MCP3008_MCP3008_H_
#define MCP3008_MCP3008_H_

#include "main.h"

typedef struct {
  GPIO_TypeDef* CS_PORT;
  uint16_t CS_PIN;
  SPI_HandleTypeDef* hspi;
}MCP3008_SPI;

void MCP3008_Init(MCP3008_SPI* spi, SPI_HandleTypeDef* hspi, GPIO_TypeDef* CS_PORT, uint16_t CS_PIN);
uint16_t MCP3008_Read_Channel(MCP3008_SPI* spi, uint8_t channel);

#endif /* MCP3008_MCP3008_H_ */
