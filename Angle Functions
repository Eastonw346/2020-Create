#include <kipr/wombat.h>

int main()
{
    printf("Angle Functions\n");
        create_connect();
    while (0==0)
    {
       
    while ((get_create_rbump()==0) && (get_create_lbump() ==0))
    {
      create_drive_direct(300,300);
    }
     
    create_stop();
    msleep(500);
    
    create_drive_direct(-400,-400);
    msleep(300);
    
   set_create_total_angle(0);
   while (get_create_total_angle() < 180)
   {
     create_drive_direct(-300,300); 
   }
      while ((get_create_rbump()==0) && (get_create_lbump() ==0))
      {
          create_drive_direct(300,300);
      }
    }
    create_stop();
    
    create_disconnect();
    return 0;
}
