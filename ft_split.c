/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:34:11 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/12 13:47:02 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h> // A SUPPRIMER POUR PRINTF MAIN

// Copie jusqu'à n caractères de src dans dest, en ajoutant '\0' à la fin.
static void	ft_strncpy(const char *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

// Compte le nombre de mots dans la chaîne str en utilisant le caractère c comme délimiteur.
static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

// Libère la mémoire allouée pour le tableau tab en cas d'erreur.
static char	**ft_clean(char **tab, int words_allocated)
{
	int	i;

	i = 0;
	while (i < words_allocated)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_filltab(const char *s, char **tab, char c)
{
	int	i;
	int	word_start;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[word_count] = malloc(sizeof(char) * (i - word_start + 1));
			if (!tab[word_count])
				return (ft_clean(tab, word_count));
			ft_strncpy(&s[word_start], tab[word_count], i - word_start);
			word_count++;
		}
		else
			i++;
	}
	tab[word_count] = NULL;
	return (tab);
}

// Fonction principale pour découper la chaîne en mots.
char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_countwords(s, c);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	return (ft_filltab(s, tab, c));
}

/*int	main(void)
{
	char	**result = ft_split("Yo le rap ici le rap", ' ');
	int		i = 0;

	if (!result)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]); // Libérer chaque mot
		i++;
	}
	free(result); // Libérer le tableau de chaînes
	return (0);
}*/

/*Voici un résumé étape par étape du fonctionnement du code `ft_split` et de ses fonctions associées :

1. **Vérification de la chaîne d'entrée** :

	- La fonction `ft_split` commence par vérifier si la chaîne `s` est valide (non NULL).
   Si `s` est NULL, la fonction retourne directement `NULL`.

2. **Comptage des mots** :

	- La fonction `ft_countwds` est appelée pour compter le nombre de mots dans la chaîne.
   Cela se fait en itérant sur chaque caractère et en détectant les séparateurs (le caractère `c`).
   - À chaque mot trouvé, le compteur `wds` est incrémenté.

3. **Allocation de mémoire pour le tableau de chaînes** :
   - Après avoir déterminé le nombre de mots avec `ft_countwds`,
	`ft_split` alloue un tableau de pointeurs `tab` pour stocker les mots extraits
   . La taille allouée est égale au nombre de mots plus un (pour le `NULL` final).

4. **Remplissage du tableau de chaînes** :

	- La fonction `ft_filltab` est ensuite appelée pour remplir ce tableau `tab` avec les mots extraits de la chaîne `s`.
   - Dans cette fonction,
	chaque mot est extrait en localisant les positions de début et de fin de chaque mot en sautant les séparateurs.
   - La mémoire est allouée pour chaque mot,
	et les mots sont copiés dans le tableau avec `ft_strncpy`.

5. **Gestion des erreurs d'allocation de mémoire** :
   - Si, à n'importe quelle étape de l'allocation des mots (dans `ft_filltab`),
	une allocation échoue (retour `malloc` échoué),
	`ft_clean` est appelée pour libérer toute la mémoire déjà allouée,
		et `ft_filltab` retourne `NULL`.

6. **Retour du tableau** :
   - Une fois que tous les mots sont extraits et stockés dans `tab`,
	`tab[word_count]` est mis à `NULL` pour marquer la fin du tableau de chaînes.

	- La fonction `ft_filltab` retourne alors le tableau `tab` rempli des mots extraits.

7. **Nettoyage final** :
   - Dans le `main`, après que `ft_split` ait été appelée,
	chaque mot est imprimé et la mémoire allouée pour chaque mot est libérée.
   - Une fois tous les mots libérés,
	la mémoire du tableau de pointeurs `tab` est aussi libérée.*/
