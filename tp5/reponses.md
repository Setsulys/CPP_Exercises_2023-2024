## Exercice 1 - l-value ou r-value ? (30 min)

1. Identifiez si les expressions ci-dessous sont des l-values ou des r-values et justifiez.  

a. `i` est un `int`  
```cpp
4                                   r-value
4 + i                               r-value
i                                   l-value
i = 4                               l-value
i == 4                              r-value
```

b. `vec` est un `std::vector<char>`
```cpp
vec[5]                              r-value
vec                                 l-value
vec.pop_back()                      l-value
std::vector { 'a', 'b', 'c' }       r-value
vec.push_back('d')                  r-value
std::move(vec)                      l-value
```

c. `ptr` est un pointeur de `int`
```cpp          
ptr + 3                             l-value
*(ptr + 3)                          l-value
*ptr + 3                            l-value
```

d. `str` est une `std::string`
```cpp
std::string { "aaaa" }              r-value
str                                 l-value
str + "aaaa"                        r-value
str += "aaaa"                       l-value
"aaaa"                              r-value
```

2. Supposons que vous ayiez l'instruction : `Class inst { expr }`.  
Quelles sont les deux conditions pour que le constructeur de copie soit appelé ?  
> il faut qu'un objet soit instancié et initialisé a partir du meme type

Même question pour le constructeur de déplacement ?
> il faut qu'un objet soit instancié et initialisé a partir du meme type