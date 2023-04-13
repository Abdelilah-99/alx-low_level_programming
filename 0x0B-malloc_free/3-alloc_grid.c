#include "main.h"
/**
 * alloc_grid - had lprogramme biih bach
 * na3raf ay point f 2d array
 * n3rf chnuu ndiir fiiha nabdaw ba3da f
 * lallocation d les pointer
 * f lawal drna wa7ad l allocation l 2d T
 * bach na3tiiw l kolla row memoire
 * dak chii 3lach drabna f height muraha darna lallo l P dakchi bach ndiru
 * lkulla point f 2d array memoire w
 * bchkell totall ya3ni kull int f 2d drabnaha
 * f 3addad d col and row
 * db khassna n7addadu l position w linitialisation d kull collum matalan
 * kfch n3rfuu  row lawal sala [0][j] [1][j] [2][j] [3][j] kfch na3tiw
 * l T pointer l kull badya d row hya
 * lii darna b diik relation
 * T[i] = P + i *width ghady nab9aw nat7arkuu b kull 6 bute 4 d lmerrat
 * w kull merra t incrementa l i htta twssel 4 w j tawssel 6
 * wraha darna nested loop rah bayan 3lach
 * w darna l9ima d kull blassa kattssawi 0
 * @width: howa row l3ard hhh
 * @height: howa l col toll
 * Return: kulch machru7 lfuu9
*/
int **alloc_grid(int width, int height)
{
	int **T;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);
	T =malloc(height * sizeof(int *));
	if (T == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
		T[i] =malloc(width * sizeof(int));
		if (T[i] == NULL)
		for (j = 0; j < i; j++)
				free(T[i]);
			free(T);
			return (NULL);
		for (j = 0; j < width; j++)
			T[i][j] = 0;
	}
	return (T);
}
