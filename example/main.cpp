#include "parser.hpp"
#include "evaluator.hpp"
#include "iostream"
using namespace std;
int main(){
	MFparser *parser;//parser
	MFfunction *function;//evaluator
	vector<long double> temp;//as we know already that the temp.txt has exactly 5 undefined variable
	temp.push_back(87.21);
	temp.push_back(81.78);
	temp.push_back(8.85);
	temp.push_back(96.32);
	temp.push_back(81.11);
	parser=new MFparser;
	function=new MFfunction;
	parser->MFopen("temp.txt");// function file
	parser->MFlexicalanalzye();//lexical analysis
	parser->debugprintL();//just an sample output of lexial analysis
	parser->MFsyntaxanalysis();//syntax analysis
	parser->MFsemanticanalysis();//semantic analysis
	parser->MFerror();//print error
	vector<vector<Lexem> > result=parser->MFgetparseroutput();//storing the output of the parser Lexem is a structure whicch is already defined
	function->MFgetparseroutput(result);// initializing the evaluator
	vector<string> unin=function->MFundefinedvar();//get the name of the uninitialized variables
	for(int i=0;i<unin.size();i++) cout<<endl<<endl<<unin[i]<<endl;
	cout<<endl<<endl<<function->MFevaluate(temp)<<endl;//evaluate
	delete parser;
	delete function;
	return 0;
}
