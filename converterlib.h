float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float inches_to_meaters(void)
{
    float inches = get_float("number of inches: \n");
    float meather = inches * 0.0254;
    printf("\n The number of meaters is %.2f\n", inches);
    return inches;
}
