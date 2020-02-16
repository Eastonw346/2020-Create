#include <kipr/wombat.h>

int main()
{
    printf("Move\n");
    
    create_connect();
    
    create_drive_direct(100,100);
    msleep(4000);
    
    create_stop();
    
    create_disconnect();
    
    return 0;
}
