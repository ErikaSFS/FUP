As cadeias de caracteres da linguagem C podem formatar um novo tipo de dados,
porém criar tipos de dados mais sofisticados não é possível nesta linguagem,
as strings em C++ são objetos da classe string,
o que isso traz de novo para o tratamento de textos em programas?
A primeira coisa a notar quando criamos strings em C++ é a maneira de criá-las,
a classe disponibiliza uma série de construtores:



string a = ("Alice e Beto gostam de "),
       b = ("chocolate."),
       c = ("doce de leite."),
       d = ("pipoca."),
       e = (c);

cout << a + b << endl;
cout << a + c << endl;
cout << a + d << endl;
cout << a + e << endl;

Estas operações resultam em:

Alice e Beto gostam de chocolate. 
Alice e Beto gostam de doce de leite. 
Alice e Beto gostam de pipoca. 
Alice e Beto gostam de doce de leite.
