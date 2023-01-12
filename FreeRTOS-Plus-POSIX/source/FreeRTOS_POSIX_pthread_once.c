#include "pthread.h"
#include "errno.h"

int
pthread_once (pthread_once_t * once_control, void (*init_routine) (void))
{
  if (once_control == NULL || init_routine == NULL)
    {
      return EINVAL;
    }

  (*init_routine)();

  return 0;
}                               /* pthread_once */
