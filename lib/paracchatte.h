#include <stdio.h>
#include <stdlib.h>
#define cmd "open"

void openBrowser(char*url){
      char command[256];
      snprintf(command, sizeof(command), "%s %s", cmd, url);

      int result = system(command);

      if (result == 0) {
        printf("browser opened successfully\n");
    } else {
        printf("Failed to open the  browser.\n");
    }

    

}


