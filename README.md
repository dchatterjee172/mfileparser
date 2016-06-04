##Math File Parser and Evaluator
This is parser and evaulator of mathematical expressions stored in a text file.
It has only two class **MFparser** which is used to parse and analyze the text file, and **MFfunction** which is used to evaluate the parsed expression.
#MFparser public member function:-
1. **MFparser(std::string);** :- Constructor, which takes the filename as argument filename must be of type string
2. **MFopen(std::string)** :- Opens the the file, mentioned through the passed filename and deletes previous records.
3. **MFfileopensuccess()** :- Checks if the file is opned succesfully. Returns true if the file is opened successfully.
4. **void MFlexicalanalzye()**:- Parses the file file and create lexem.
5. **bool MFsyntaxanalysis()**:- Checks if the file is syntactically correct. Returns true if the syntax is correct.
5. **bool MFsemanticanalysis()**:- Performs semantic analysis. Returns true if the file is semantically correct.
6. **bool bad()**:- Returns true if the file is syntactically or semantically incorrect or if the file is not yet analysed.
7. **void MFerror()** :- Prints the errors in the file in stdout.
8. **std::vector<std::vector<Lexem> > MFgetparseroutput()**:- Returns the output of the parser. Lexem is a user defined datatype included in parser.hpp. The return value will be the input of the MFfuntion class. Returns a empty vector of vector of type Lexem if the file is incorrect.
#MFfunction public member function:-
1. **MFgetparseroutput(std::vector<std::vector<Lexem> >)**:- This takes the output of the parser as argument as mentioned above.
2. **std::vector<std::string> MFundefinedvar()**:- Returns a vector of string which has the name of the variables which are undefined.
3. **long double MFevaluate(std::vector<long double>)**:- This will evaluate and return the final result. It takes a vector of long double type as argument which must have the value of the uninitialized variables in the same order in which **MFundefinedvar()** returns the name of the variables. If the anything goes wrong such as if the number of uninitialized variable is 2 and someone has provided only 1 value, then this will return **NAN**.
