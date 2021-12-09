#include <stdio.h>
#include <stdlio.h>

int main (int argc, char *argv []) {
  int day_of_week;
  if (argc !=2) { exit(-1);}
  day_of_week = atoi(argv[1]) % 7; /*0, 1, 2, 3, 4, 5, 6 */
  switch (day_of_week) {
    case 0: printf ("Domenica🇮🇹\n"); break;
    case 1: printf ("Lunedì\n"); break;
    case 2: printf ("Martedì\n"); break;
    case 3: printf ("Mercoledì\n"); break;
    case 4: printf ("Giovedì\n"); break;
    case 5: printf ("Venerdì\n"); break;
    case 6: printf ("Sabato\n"); break;
  }
  do {
    printf ("%i\n", day_of_week);
  } while (day_of_week)
  return 0;
}
