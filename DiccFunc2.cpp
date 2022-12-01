void Diccionario(char* archNombre, char palabras[][TAMTOKEN])
{

	strcpy(palabras[0], "Diccionario");
	int NumElementos = 1;

	FILE* archivo;

	fopen_s(&archivo, archNombre, "r");
	if (archivo != NULL)
	{
		char textoEnBruto[700];

		while (!feof(archivo))
		{
			for (int i = 0; i != NumElementos; i++)
			{
				fscanf(archivo, "%s", textoEnBruto[i]);
			}
			fclose(archivo);
		}

		int caracterarchNombre, numpalabra = 0, j = 0;
		char palabrasinorden[][TAMTOKEN]{ 'hola','loli','A' };
		char arrayAxiliar[TAMTOKEN];
		struct PALABRA_CON_FREC
		{
			char laPalabra[TAMTOKEN];
			int frecuencia = 1;
		}unaPalabra;
		while(archNombre[caracterarchNombre] != '\0')
		{
			caracterarchNombre = 0;
			while (caracterarchNombre != ' ' && caracterarchNombre != '\0' && caracterarchNombre != '	' && caracterarchNombre != ',' && caracterarchNombre != '.' && caracterarchNombre != '(' && caracterarchNombre != ')' && caracterarchNombre != '¿' && caracterarchNombre != '?' && caracterarchNombre != '!' && caracterarchNombre != '¡')
			{
				palabrasinorden[numpalabra][caracterarchNombre++] = archNombre[caracterarchNombre];
			}
			caracterarchNombre = '\0';
			numpalabra++;
			if (archNombre[caracterarchNombre] != '\0')
			{
				caracterarchNombre++;
			}
		}
		for (int i = 0; i < caracterarchNombre; i++)
		{
			for (int posicionDelantera = 1; posicionDelantera < caracterarchNombre; posicionDelantera++)
			{
				if (strcmp(palabrasinorden[i], palabrasinorden[posicionDelantera]) == 0)
				{
					palabrasinorden[posicionDelantera][0] = '\0';
					unaPalabra.frecuencia++;
				}
				else if (strcmp(palabrasinorden[i], palabrasinorden[posicionDelantera]) > 0)
				{
					strcpy(arrayAxiliar, palabrasinorden[i]);
					strcpy(palabrasinorden[i], palabrasinorden[posicionDelantera]);
					strcpy(palabrasinorden[posicionDelantera], arrayAxiliar);
				}
			}
		}

	}
}