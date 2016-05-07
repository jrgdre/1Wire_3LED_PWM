/* ========================================
 * TLC59731
 * A little demo that shows how to control 
 * the brightness of 3 LEDs 
 * with the one wire PWM controller IC.
 * ========================================
*/
#include <project.h>

// timing is everything here
#define DELAY     1u // width a pulse on the wire (read: 1 unit!), period is 2 units
#define T_CYCLE_0 4u // time to wait for the cycle to complete (before the next bit can be sent) if a 0 was send (4 units)
#define T_CYCLE_1 1u // time to wait for the cycle to complete (before the next bit can be sent) if a 1 was send (1 unit)

void sendBit(uint8_t bit)
{
    // start next cycle
    Pin_1_Write(1u);   
    CyDelayUs(DELAY); // the pulse on the wire does not really have a width of 1us, since the write operation needs time too
    Pin_1_Write(0u);
    CyDelayUs(DELAY);
    
    if(bit)
    {   // write "1" data bit
        Pin_1_Write(1u);
        CyDelayUs(DELAY); // Bit 29 is a 1
        Pin_1_Write(0u);
        CyDelayUs(T_CYCLE_1);
    }
    else
    {   // for "0" data bit simply let timeout the cylce
        CyDelayUs(T_CYCLE_0);
    }
}

void sendByte(uint8_t byte)
{
    sendBit(byte & (1<<7));
    sendBit(byte & (1<<6));
    sendBit(byte & (1<<5));
    sendBit(byte & (1<<4));
    sendBit(byte & (1<<3));
    sendBit(byte & (1<<2));
    sendBit(byte & (1<<1));
    sendBit(byte & (1<<0));
}

int main()
{
    uint8_t on  = 1;  // 0 = all off, 1 = all on
    
//                         0x3A (GS write) , 3x 8bit LED value
//  uint8_t all_on[32]  = {0,0,1,1,1,0,1,0 , 1,0,0,0,0,0,0,1 , 1,0,0,0,0,0,0,1 , 1,0,0,0,0,0,0,1 }; 
    uint8_t all_on[4]   = {0x3A, 0x81, 0x81, 0x81}; 
    
//                         0x3A (GS write) , 3x 8bit LED value
//  uint8_t all_off[32] = {0,0,1,1,1,0,1,0 , 0,0,0,0,0,0,0,0 , 0,0,0,0,0,0,0,0 , 0,0,0,0,0,0,0,0 };
    uint8_t all_off[4]  = {0x3A, 0x00, 0x00, 0x00};
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    uint8_t idx = 0;  
    uint8_t val = 0;
    
    // establish the cycle time, 
    // by writing the 1st SID Rising Edge (see datasheet)
    Pin_1_Write(1u);   
    CyDelayUs(DELAY);
    Pin_1_Write(0u);
    CyDelayUs(DELAY);
    CyDelayUs(T_CYCLE_0);
    
    // write the field values
    for (idx = 0; idx < 4; idx++)
    {
        val = on ? all_on[idx] : all_off[idx];
        sendByte(val);
    }

    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
