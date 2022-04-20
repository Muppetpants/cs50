# import <cs50.h>
# import <stdio.h>

int magic(int begin, int end);
int main(void)
{
//confirm min start
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

//collect end (need to add check
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

//call magic function
    int final = magic(start, end);
//print result
    printf("Years: %i\n", final);


}
//return output in years
int magic(int begin, int end)
{
    int population = 0;
    int years = 0;
    population = begin + (begin / 3) - (begin / 4);
    years++;
    while (population < end)
    {
        population = population + (population / 3) - (population / 4);
        years++;
    }
    return years;
}

