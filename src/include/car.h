#ifndef __CAR_H_
#define __CAR_H_

#include <stdio.h>
#include <pigpio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define GPIN23 23
#define GPIN24 24
#define GPIN25 25
#define GPIN6 6
#define GPIN13 13
#define GPIN19 19
#define GPIN2 2 //trigger
#define GPIN3 3 //echo


void car_init();
void sensor_init();
void sensor_rising_func(int gpio,int level,uint32_t tick);
void* sensor_thread(void* data);
void forward();
void backward();
void move_right();
void move_left();
void stop();

void forward_inf();
void move_car();

int danger; // flag about car_status

#endif


