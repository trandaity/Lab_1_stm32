/*
 * traffic_light.h
 *
 *  Created on: Nov 4, 2022
 *      Author: trand
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#define INIT 1
#define RED 2
#define YELLOW 3
#define GREEN 4

extern int status;
extern int counter;
void trafficLightFSM();

#endif /* INC_TRAFFIC_LIGHT_H_ */
