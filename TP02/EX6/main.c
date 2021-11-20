# include "header.h"

// before running you must have gnuplot setup on your device
int main()
{
    float y[max];
    for (int i = 0; i < 10; ++i)
    {
      // we can try other fuctions such as newton and dichotomie2 but for this try we're using normal dichotomie
        y[i] = Dichtomie(f, 0, 20, i);
    }
    FILE *gnuplot = popen("gnuplot", "w");
    if (!gnuplot)
    {
        perror("popen");
        exit(EXIT_FAILURE);
    }

    fprintf(gnuplot, "plot '-' u 1:2 t 'alphaN' w lp\n");
    for (int i = 0; i < 10; ++i)
    {
        fprintf(gnuplot, "%d %lf\n", i, y[i]);
    }
    fprintf(gnuplot, "e\n");
    fprintf(stdout, "Click Ctrl+d to quit...\n");
    fflush(gnuplot);
    getchar();

    pclose(gnuplot);
    exit(EXIT_SUCCESS);
    return 0;
}
