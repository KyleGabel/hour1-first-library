float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float km_to_ft (void)
{
    float km = get_float("Number of Kilometers: ")
    float ft = km * 3280.8;
    printf("\nThe number of inches is %.3f\n", ft);
    return ft;
}
//m to ft

float m_to_ft(void)
{
    float meters = get_float("Meters: ");
    float feet = meters*3.28084;
    printf("\nFeet:%f\n", feet);
    return in;
}
float cm_to_mi(void)
{
    float cm = get_float("Number of centimeters:");
    float mi = cm / 160934.4;
    printf("\nThe number of miles is %.2f\n", mi);
    return mi;
}
