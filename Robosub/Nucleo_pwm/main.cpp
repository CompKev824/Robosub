#include "mbed.h"
PwmOut mypwm1(D9);
PwmOut mypwm2(D10);

DigitalOut myled(LED1);

int main() {
    
    mypwm1.period_ms(20);
    mypwm1.pulsewidth_us(1500);
    wait(3);
    mypwm1.pulsewidth_us(1400);
    printf("pwm set to %.2f %%\n", mypwm1.read() * 100);
    
    mypwm2.period_ms(20);
    mypwm2.pulsewidth_us(1500);
    wait(3);
    mypwm2.pulsewidth_us(1400);
    printf("pwm set to %.2f %%\n", mypwm2.read() * 100);
    
    
    while(1) {
        myled = !myled;
        wait(1);
    }
}
