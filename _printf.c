#include "main.h"

/**
 * _printf - Fonction pour formater et imprimer du texte.
 * @format: Une chaîne de caractères contenant les spécificateurs de format.
 * @...: Les arguments variables à formater et à imprimer.
 *
 * Return: Le nombre total de caractères imprimés, ou -1 en cas d'erreur.
 */

int _printf(const char *format, ...)
{
    int counter = 0; /* Compteur pour le nombre total de caractères imprimés */
    va_list args; /* Liste des arguments variables */

    if (format == NULL)
        return -1;

    va_start(args, format); /* Initialisation de la liste d'arguments variables */

    while (*format != '\0')
    {
        if (*format != '%') /* S'il s'agit d'un caractère normal */
        {
            print_character(*format); /* Imprime le caractère */
            format++;
            counter++;
        }
        else
        {
            format++;
            switch (*format)
            {
            case 'c': /* S'il s'agit d'un caractère */
            {
                print_character(va_arg(args, int)); /* Imprime le caractère passé en argument */
                counter++;
                break;
            }

            case 's': /* S'il s'agit d'une chaîne de caractères */
            {
                int len = print_string(va_arg(args, char *)); /* Imprime la chaîne de caractères et récupère sa longueur */
                counter += len;
                break;
            }

            case '%': /* S'il s'agit d'un caractère '%' */
                print_character('%'); /* Imprime le caractère '%' */
                counter++;
                break;

            case 'd': /* S'il s'agit d'un entier décimal */
            case 'i': /* S'il s'agit d'un entier décimal */
            {
                int len1 = print_integer(va_arg(args, int)); /* Imprime l'entier décimal et récupère sa longueur */
                counter += len1;
                break;
            }

            default:
                break;
            }
            format++;
        }
    }

    va_end(args); /* Nettoyage de la liste d'arguments variables */
    return counter; /* Retourne le nombre total de caractères imprimés */
}
