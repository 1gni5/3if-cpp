#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

#include "LogReader.h"

typedef unordered_map<size_t, size_t> node;
typedef unordered_map<size_t, node> Graph;
typedef map<size_t, size_t> Hits;

typedef struct KeyStore {
	unordered_map<string, size_t> store;
	size_t seed;

	KeyStore(size_t s = 0): seed(s) {};
	inline size_t GetKey(string& url)
	{
		// La clé existe déjà
		if (store.find(url) != store.end())
		{
			return store[url];
		} else

		// La clé n'existe pas 
		{
			store[url] = seed;
			return seed++;
		}
	};
} KeyStore;

int main(int argc, char* argv[])
{
	// Vérification du nombre minimum d'arguments
	if (argc < 2)
	{
		cout << "Usage " << argv[0] << " fichier.log" << endl;
		return 1;
	}

	LogReader reader(argv[1]);
	
	// Vérification du fichier
	if (!reader.is_open())
	{
		cout << "Une erreur s'est produite lors de l'ouverture du fichier." << endl;
		return 1;
	}

	log current = reader.GetNextLog();
	KeyStore ks = KeyStore();
	Graph logGraph;
	Hits totalHits;
	while (!reader.eof())
	{
		// Récupère les clés des urls
		auto targetKey = ks.GetKey(current.target);
		auto originKey = ks.GetKey(current.origin);

		// La cible existe déjà dans le Graphe
		if (logGraph.find(targetKey) != logGraph.end())
		{
			node& hits = logGraph[targetKey];
			totalHits[targetKey]++;	
			
			// L'origine existe déjà dans le hits
			if (hits.find(originKey) != hits.end())
			{
				hits[originKey]++;
			} else
			// L'origine n'existe pas
			{
				hits[originKey] = 1;
			}

		} else
		// La cible n'existe pas 
		{
			logGraph[targetKey][originKey] = 1;
			totalHits[targetKey] = 1;
		}

		cout << "Cible: " << current.target << endl;
		cout << "Clé: " << targetKey << endl;
		cout << "Nb hits: " << totalHits[targetKey] << endl;

		current = reader.GetNextLog();
	}

	return 0;
}
