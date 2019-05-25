#include
#include
int main()
{
        const char* dzien;
        const char* dzien2;
        const char* rok;
        const char* rok2;
        const char* rok3;
        const char* rok4;
        int d, m, r, p, jednosci, dziesiatki, setki, tysiace;

        const char* miesiac;
        printf("Podaj swoj dzien narodzin\n");
        scanf("%d", &d);
        printf("Podaj swoj miesiac narodzin\n");
        scanf("%d", &m);
        printf("Podaj swoj rok narodzin\n");
        scanf("%d", &r);

        if (m > 12 || m < 1 || r < 1 || r>9999)
        {
                printf("Nieprawidlowa data\n");
                return 0;
        }
        if ((d < 1 || d>31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||
m == 10 || m == 12))
        {
                printf("Nieprowidlowa data\n");
                return 0;
        }
        if ((d < 1 || d>30) && (m == 4 || m == 6 || m == 9 || m == 11))
        {
                printf("Nieprowidlowa data\n");
                return 0;
        }
        if ((d < 1 || d>29) && (m == 2))
        {
                printf("Nieprowidlowa data\n");
                return 0;
        }
        if (d == 29 && m == 2 && (r % 400 != 0 || (r % 4 != 0 && r % 100 == 0)))
        {
                printf("Nieprowidlowa data\n");
                return 0;
        }
        p = d % 10;
        d = d / 10;
        jednosci = r % 10;
        r = r / 10;
        dziesiatki = r % 10;
        r = r / 10;
        setki = r % 10;
        r = r / 10;
        tysiace = r % 10;
        switch (p)

        {
        case 1:dzien = "pierwszego "; break;
        case 2:dzien = "drugiego "; break;
        case 3:dzien = "trzeciego "; break;
        case 4:dzien = "czwartego "; break;
        case 5:dzien = "piatego "; break;
        case 6:dzien = "szostego "; break;
        case 7:dzien = "siodmego "; break;
        case 8:dzien = "osmego "; break;
        case 9:dzien = "dziewiatego "; break;
        case 0:dzien = ""; break;
        default:dzien = ""; break;
        }
        if (d == 1)
        {
                switch (p)
                {
                case 0:dzien = "dziesiatego "; break;
                case 1:dzien = "jedenastego "; break;
                case 2:dzien = "dwunastego "; break;
                case 3:dzien = "trzynastego "; break;
                case 4:dzien = "czternatego "; break;
                case 5:dzien = "pietnastego "; break;
                case 6:dzien = "szesnatego "; break;
                case 7:dzien = "siedemnastego "; break;
                case 8:dzien = "osiemnastego "; break;
                case 9:dzien = "dziewietnastego "; break;
                default:dzien = ""; break;
                }
        }
        {
                switch (d)
                {
                case 2:dzien2 = "dwudziestego "; break;
                case 3:dzien2 = "trzydziestego "; break;
                case 0:dzien2 = ""; break;
                default:dzien2 = ""; break;
                }
        }
        switch (m)
        {
        case 1:miesiac = "stycznia "; break;
        case 2:miesiac = "lutego "; break;
        case 3:miesiac = "marca "; break;
        case 4:miesiac = "kwietnia "; break;
        case 5:miesiac = "maja "; break;
        case 6:miesiac = "czerwca "; break;
        case 7:miesiac = "lipca "; break;
        case 8:miesiac = "sierpnia "; break;
        case 9:miesiac = "wrzesnia "; break;
        case 10:miesiac = "pazdziernika "; break;
        case 11:miesiac = "listopada "; break;
        case 12:miesiac = "grudnia "; break;
        default:printf("Nieprawidlowa data"); return;
        }
        switch (jednosci)

        {
        case 1:rok = "pierwszego "; break;
        case 2:rok = "drugiego "; break;
        case 3:rok = "trzeciego "; break;
        case 4:rok = "czwartego "; break;
        case 5:rok = "piatego "; break;
        case 6:rok = "szostego "; break;
        case 7:rok = "siodmego "; break;
        case 8:rok = "osmego "; break;
        case 9:rok = "dziewiatego "; break;
        case 0:rok = ""; break;
        default:rok = ""; break;
        }
        if (dziesiatki == 1)
        {
                switch (jednosci)
                {
                case 0:rok = "dziesiatego "; break;
                case 1:rok = "jedenastego "; break;
                case 2:rok = "dwunastego "; break;
                case 3:rok = "trzynastego "; break;
                case 4:rok = "czternatego "; break;
                case 5:rok = "pietnastego "; break;
                case 6:rok = "szesnatego "; break;
                case 7:rok = "siedemnastego "; break;
                case 8:rok = "osiemnastego "; break;
                case 9:rok = "dziewietnastego "; break;
                default:dzien = ""; break;
                }
        }

        switch (dziesiatki)

        {
        case 2:rok2 = "dwudziestego "; break;
        case 3:rok2 = "trzydziestego "; break;
        case 4:rok2 = "czterdziestego "; break;
        case 5:rok2 = "piecdziesiatego "; break;
        case 6:rok2 = "szescdziesiatego "; break;
        case 7:rok2 = "siedemdziesiatego "; break;
        case 8:rok2 = "osiemdziesiatego "; break;
        case 9:rok2 = "dziewiecdziesiatego "; break;
        case 0:rok2 = ""; break;
        default:rok2 = ""; break;
        }
        switch (setki)
        {
        case 1:rok3 = "sto "; break;
        case 2:rok3 = "dwiescie "; break;
        case 3:rok3 = "trzysta "; break;
        case 4:rok3 = "czerysta "; break;
        case 5:rok3 = "piecset "; break;
        case 6:rok3 = "szescset "; break;
        case 7:rok3 = "siedemset "; break;
        case 8:rok3 = "osiemset "; break;
        case 9:rok3 = "dziewiecset "; break;
        case 0:rok3 = ""; break;
        default:rok3 = ""; break;
        }
        if (dziesiatki == 0 && jednosci == 0)
        {
                switch (setki)

                {
                case 1:rok3 = "setnego "; break;
                case 2:rok3 = "dwusetnego "; break;
                case 3:rok3 = "trzechsetnego "; break;
                case 4:rok3 = "czterchsetnego "; break;
                case 5:rok3 = "piecsetnego "; break;
                case 6:rok3 = "szescsetnego "; break;
                case 7:rok3 = "siedemsetnego "; break;
                case 8:rok3 = "osiemsetnego "; break;
                case 9:rok3 = "dziewiecsetnego "; break;
                case 0:rok3 = ""; break;
                default:rok3 = ""; break;
                }
        }
        switch (tysiace)

        {
        case 1:rok4 = "tysiac "; break;
        case 2:rok4 = "dwa tysiace "; break;
        case 3:rok4 = "trzy tysiace "; break;
        case 4:rok4 = "cztery tysiace "; break;
        case 5:rok4 = "piec tysiecy "; break;
        case 6:rok4 = "szesc tysiecy "; break;
        case 7:rok4 = "siedem tysiecy "; break;
        case 8:rok4 = "osmiem tysiecy "; break;
        case 9:rok4 = "dziewiec tysiecy "; break;
        case 0:rok4 = ""; break;
        default:rok4 = ""; break;
        }
        if (setki == 0 && dziesiatki == 0 && jednosci == 0)
        {
                switch (tysiace)
                {
                case 1:rok4 = "tysiecznego "; break;
                case 2:rok4 = "dwutysiecznego "; break;
                case 3:rok4 = "trzytysiecznego "; break;
                case 4:rok4 = "czterotysiecznego "; break;
                case 5:rok4 = "pieciotysiecznego "; break;
                case 6:rok4 = "szesciotysiecznego "; break;
                case 7:rok4 = "siedmiotysiecznego "; break;
                case 8:rok4 = "osmiotysiecznego "; break;
                case 9:rok4 = "dziewieciotysiecznego "; break;
                }
        }


        printf("Urodziles sie %s%s%s%s%s%s%sroku\n", dzien2, dzien,
        miesiac, rok4, rok3, rok2, rok);
        return 0;
}
