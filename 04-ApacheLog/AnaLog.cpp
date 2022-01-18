#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#include "LogReader.h"

const size_t LIMIT_TOP_HITS = 10;

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
	inline string reverseFind(size_t key)
	{
		for (const auto& item : store)
		{
			if (item.second == key) 
				return item.first;
		}

		return "";
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

		current = reader.GetNextLog();
	}

	// Construction du top 10.
	vector<pair<size_t, size_t>> top;
	for (const auto& item : totalHits)
	{
		top.emplace_back(item);
	}
	
	// Tri les éléments sur le nombre de hits
	sort(top.begin(), top.end(), 
		[] (const auto& a, const auto&b) {return a.second > b.second;}
	);
	
	// Ne conserve que les 10 premiers éléments
	size_t offset = min(LIMIT_TOP_HITS, top.size());
	vector<pair<size_t, size_t>> top10 = {top.begin(), top.begin() + offset};

	for (const auto& item : top10)
	{
		cout << "[" << item.second << ": " << ks.reverseFind(item.first) << "]" << endl;
	}

	return 0;
}
