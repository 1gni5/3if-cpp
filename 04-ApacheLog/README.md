# README: Analyse de logs apache
## Instructions de compilation
```sh
$ make
$ bin/program logs/full.log
```
## Manuel d'utilisation
`Analog` est un programme qui permet l'analyse de logs Apache. Il permet de construire un graphe des documents consultés et leurs relations ou fournir un top 10 des documents les plus consultés. Ces 2 fonctions principales peuvent être modifié grâce à plusieurs options explicité ci-dessous.

### Comportement sans options:
Sans option spécifié, `Analog` affiche un top 10 des documents les plus consultés. Ce comportement peut-être modifié par les options **-e, -t et -i**.
> Cette option n'est pas compatible avec l'option **-g** qui produira un graphe sans afficher le top 10.

### Options disponibles
 - **Option -e**: Permet de filter les documents grâce à leur extensions, les fichier {jpg, js, css, png, ics} sont ignorés.
 - **Option -t <hour>**: Permet de filtrer les requêtes examinées en se limitant à un intervalle [hour; hour+1[.
 - **Option -g <filename>**: Change le fonctionnement de `Analog`, ne calcul pas le top 10 des documents, construit un graphe des documents et l'enregistre dans le fichier filename.
 - **Option -i**: Permet de filtrer les requêtes examinées en ignorant les requêtes qui ont abouties à une erreur (client ou serveur).
