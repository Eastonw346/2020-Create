#include <kipr/wombat.h>

int main()
{
    create_connect();
    camera_open();
    while (a_button() == 0)
    {
   camera_update();
        msleep(500);
        if (get_object_count(0) > 0)
        {
            printf("I see Yellow/n");
        }
        else 
        {
           printf("PUT THE YELLOW IN MY VIEW/n");
        }
    }
    camera_close();
    
    return 0;
}
