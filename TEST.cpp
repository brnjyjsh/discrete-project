#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fName;
	string lName;

	int totalscore;

 	cout << "Enter Your First Name : ";
 	cin >> fName;
 	cout << "Enter Your Last Name : ";
 	cin >> lName;
 	cout << "Welcome " << fName << " " << lName;
 	cout << "\n Use the Rules of Implication and Identify the corresponding numbers used : ";
	cout << "\n Example : 3.) Number : 1 Rule : SIMP    4.) Number : 13 Rule : ADD";
 	cout << "\n Modus Ponens = MP ";
 	cout << "\n Modus Tollents = MT ";
	cout << "\n Hypothetical Syllogism = HS ";
	cout << "\n Disjunctive Syllogism = DS ";
	cout << "\n Simplication = SIMP ";
	cout << "\n Conjunction = CONJ ";
 	cout << "\n Addition = ADD ";
 	cout << "\n Distribution Ponens = DIST ";
 	cout << "\n Implication = IMPL ";
 
 	{
 	
 	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score1 = 0;
 	
 	cout<<"\n";
 	cout<<"\n";
 	cout<<"\nTEST 1";
 	cout << "\n 1.) M -> N ";
 	cout << "\n 2.) M -> O /: M -> (N ^ O)";
 	cout << "\n 3.) 7M v N "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
	
	{
	if (num == 1)
	score1 = score1 +1;
	} 
	
	{
	if (rule == "IMPL")	
	score1 = score1 +1;
	}
	
	cout << "\n 4.) 7M v o "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
	
	{
	if (num2 == 2)
	score1 = score1 +1;
	} 
	{
	if (rule2 == "IMPL")
   	score1 = score1 +1;
	}
	
	cout << "\n 5.)(7M v N) ^(7M v O)"; cout << " Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
	
    {
	if (num3 == 34)
	score1 = score1 +1;
	} 
	{
	if (rule3 == "CONJ")
	score1 = score1 +1;
	}
    
	cout << "\n 6.) 7M v (N v O)"; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
	
    {
	if (num4 == 5)
	 score1 = score1 +1;
	} 
	{
	if (rule4 == "DIST")
	score1 = score1 +1;
	}
	
	cout << "\n 7.) M -> (N v O)"; cout << "Number : " ; cin >>  num5; cout << "Rule : "; cin >> rule5;
   
	{
	if (num5 == 6)
	score1 = score1 +1;
	} 
	{
	if (rule5 == "IMPL")
	score1 = score1 +1;
	}

    cout <<"\n" << " Your score for TEST 1 is: " << score1;
    totalscore = score1 + totalscore;
}
{

	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score2 = 0;
	
	
	
	cout<<"\n";
  	cout<<"\n";
  
 	cout<<"\nTEST 2";
 	cout << "\n 1.) A -> B ";
 	cout << "\n 2.) 7A -> C v D)";
 	cout << "\n 3.) 7B";
 	cout << "\n 4.) 7C /:D";
 	cout << "\n 5.) 7A"; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 	
	{
	if (num == 13)
	score2 = score2  +1;
	} 
	{
	if (rule == "MT")
	score2 = score2 +1;
	}

 	cout << "\n 6.) C v D "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;

 	{
 	if (num2 == 25)
	score2 = score2 +1;
  	} 
	{
	if (rule2 == "MP")
	  score2 = score2 +1;
	}
	
	cout << "\n 7.) D "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;

	{
	if ( num3 == 69)
	score2 = score2 +1;
	} 
  	{
  	if (rule3 == "DS")
  	score2 = score2 +1;

  
   cout <<"\n" << " Your score for TEST 2 is: " << score2;
   totalscore = score2 + totalscore;
}

{
	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score3 = 0;
	
	cout<<"\n";
	cout<<"\n";
 	cout<<"\nTEST 3";
 	cout << "\n 1.) S ";
 	cout << "\n 2.) 7S /:T";
 	cout << "\n 3.) S v T"; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 	{
	if (num == 1)
 	score3 = score3 +1;
	} 
  	{
  	if (rule == "ADD")
	score3 = score3 +1;
	}
  
  	cout << "\n 4.) T "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 
 	{
 	if (num2 == 23)
 	score3 = score3 +1;
  	} 
  	{
	if (rule2 == "MP")
  	score3 = score3 +1;
  

  
    cout <<"\n" << " Your score for TEST 3 is: " << score3;
    totalscore = score3 + totalscore;
}
{
	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score4 = 0;
	
	cout<<"\n";
	cout<<"\n";
 	cout<<"\nTEST 4";
 	cout << "\n 1.) 7M -> Q ";
 	cout << "\n 2.) R -> 7T";
 	cout << "\n 3.) 7M v R /:Q v 7T";
	cout << "\n 4.) (7M ->Q) ^ (R->7T) "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 	{
	if (num == 12)
	score4 = score4 +1;
	} 
 	{
  	if (rule == "CONJ")
  	score4 =  score4 +1;
	}
	
  	cout << "\n 5.) Q v 7T"; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
  
 	{
 if (num2 == 43)
 score4 = score4 +1;
  } 
  {
  if (rule2 == "CD")
  score4 = score4 +1;
	}
	 cout <<"\n" << " Your score for TEST 4 is: " << score4;
	 totalscore = score4 + totalscore;
	
}
{
	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score5 = 0;
	
	cout<<"\n";
	cout<<"\n";
	cout<<"\nTEST 5";
 	cout << "\n 1.) A v B ";
	 cout << "\n 2.) 7C -> 7A";
	 cout << "\n 3.) C -> D";
 cout << "\n 4.) 7D /: B";
 cout << "\n 5.) 7C "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 {
 if (num == 34)
 score5 = score5 +1;
  } 
  {
  if (rule == "MT")
  score5 = score5 +1;
}
  cout << "\n 6.) 7A "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 {
 if (num2 == 25)
 score5 = score5 +1;
  } 
  {
  if (rule2 == "MP")
  score5 = score5 +1;
}
 cout << "\n 7.) B "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {
 if (num3 == 16)
 score5 = score5 +1;
  } 
  {
  if (rule3 == "DS")
  score5 = score5 +1;
}
	cout <<"\n" << " Your score for TEST 5 is: " << score5;
	totalscore = score5 + totalscore;

}

{
	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score6 = 0;
	
	cout<<"\n";
cout<<"\n";
cout<<"\nTEST 6";
 cout << "\n 1.) x -> (y ^ z) ";
 cout << "\n 2.) y -> k";
 cout << "\n 3.) w";
 cout << "\n 4.) w -> x /: k";
 cout << "\n 5.) x "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 {if (num == 34)
 score6 = score6 +1;
  } 
  {if (rule == "MP")
  score6 = score6 +1;
}
  cout << "\n 6.) y ^ z "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 {if (num2 == 15)
 score6 = score6 +1;
  } 
  {if (rule2 == "MP")
  score6 = score6 +1;
}
 cout << "\n 7.) y "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {if (num3 == 6)
 score6 = score6 +1;
  } 
  {if (rule3 == "SIMP")
  score6 =score6 +1;
}
 cout << "\n 8.) k "; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
 {if (num4 == 27)
 score6 = score6 +1;
  } 
  {if (rule4 == "MP")
  score6 = score6 +1;
}
cout <<"\n" << " Your score for TEST 6 is: " << score6;
totalscore = score6 + totalscore;

}
{
	int num,num2,num3,num4,num5;
	string rule,rule2,rule3,rule4,rule5;
	int score7 = 0;
	
	cout<<"\n";
cout<<"\n";
cout<<"\nTEST 7";
 cout << "\n 1.) x -> y ";
 cout << "\n 2.) (7x v w) -> k";
 cout << "\n 3.) 7y ^ z /: k v T";
 cout << "\n 4.) 7y "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 {if (num == 3)
 score7 = score7 +1;
  } 
  {if (rule == "SIMP")
  score7 = score7 +1;
}
  cout << "\n 5.) 7X "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 {if (num2 == 14)
 score7 = score7+1;
  } 
  {if (rule2 == "MT")
  score7 = score7 +1;
}
 cout << "\n 6.) 7y v w "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {if (num3 == 5)
 score7 = score7 +1;
  } 
  {if (rule3 == "ADD")
  score7 = score7 +1;
}
 cout << "\n 7.) k "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {if (num3 == 62)
 score7 = score7 +1;
  } 
  {if (rule3 == "MP")
  score7 =score7 +1;
}
cout << "\n 8.) k V T "; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
 {if (num4 == 7)
 score7 = score7 +1;
  } 
  {if (rule4 == "ADD")
  score7 = score7 +1;
}
cout <<"\n" << " Your score for TEST 7 is: " << score7;
totalscore = score7 + totalscore;
}
{
	int num,num2,num3,num4,num5,num6,num7,num8;
	string rule,rule2,rule3,rule4,rule5,rule6,rule7,rule8;
	int score8 = 0;
	
	cout<<"\n";
cout<<"\nTEST 8";
 cout << "\n 1.) A -> (B ^ C) ";
 cout << "\n 2.) A ^ C /: 7B ";
 cout << "\n 3.) A "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 {if (num == 2)
 score8 = score8 +1;
  } 
  {if (rule == "SIMP")
  score8 = score8 +1;
}
  cout << "\n 4.) 7(B ^ C) "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 {if (num2 == 13)
 score8 = score8 +1;
  } 
  {if (rule2 == "MP")
  score8 = score8 +1;
}
 cout << "\n 5.) 7B v 7C "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {if (num3 == 4)
 score8 = score8 +1;
  } 
  {if (rule3 == "DM")
  score8 = score8 +1;
}
 cout << "\n 6.) 7C v 7B "; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
 {if (num4 == 5)
 score8 = score8 +1;
  } 
  {if (rule4 == "COMM")
  score8 = score8 +1;
}
cout << "\n 7.) C ^ A "; cout << "Number : " ; cin >>  num5; cout << "Rule : "; cin >> rule5;
 {if (num5 == 2)
 score8 = score8 +1;
  } 
  {if (rule5 == "COMM")
  score8 = score8 +1;
}
cout << "\n 8.) C "; cout << "Number : " ; cin >>  num6; cout << "Rule : "; cin >> rule6;
 {if (num6 == 7)
 score8 = score8 +1;
  } 
  {if (rule6 == "SIMP")
  score8 = score8 +1;
}
cout << "\n 9.) 77C "; cout << "Number : " ; cin >>  num7; cout << "Rule : "; cin >> rule7;
 {if (num7 == 8)
 score8 = score8 +1;
  } 
  {if (rule7 == "DN")
  score8 = score8 +1;
}
cout << "\n 10.) 7B "; cout << "Number : " ; cin >>  num8; cout << "Rule : "; cin >> rule8;
 {if (num8 == 69)
 score8 = score8 +1;
  } 
  {if (rule8 == "DS")
  score8 = score8 +1;
}
cout <<"\n" << " Your score for TEST 8 is: " << score8;
totalscore = score8 + totalscore;
}
{
	int num,num2,num3,num4;
	string rule,rule2,rule3,rule4;
	int score9 = 0;
	
	cout<<"\n";
cout<<"\n";
cout<<"\nTEST 9";
 cout << "\n 1.) F -> G ";
 cout << "\n 2.) F v H ";
 cout << "\n 3.) 7G ";
 cout << "\n 4.) H -> (G -> I) /: F -> I";
 cout << "\n 5.) 7F "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 {if (num == 13)
 score9 =score9 +1;
  } 
  {if (rule == "MT")
  score9 =score9 +1;
}
  cout << "\n 6.) H "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 {if (num2 == 25)
 score9 = score9 +1;
  } 
  {if (rule2 == "DS")
  score9 = score9 +1;
}
 cout << "\n 7.) G -> I "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {if (num3 == 46)
 score9 = score9 +1;
  } 
  {if (rule3 == "MP")
  score9 = score9 +1;
}
 cout << "\n 8.) F -> I "; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
 {if (num4 == 17)
 score9 = score9 +1;
  } 
  {if (rule4 == "HS")
  score9 = score9 +1;
}
cout <<"\n" << " Your score for TEST 9 is: " << score9;
totalscore = score9 + totalscore;

}
{
	int num,num2,num3,num4,num5,num6,num7,num8;
	string rule,rule2,rule3,rule4,rule5,rule6,rule7,rule8;
	int score10 = 0;
	
	cout<<"\n";
cout<<"\n";
cout<<"\nTEST 10";
 cout << "\n 1.) (7M ^ 7N ) -> {(7M v H)->(K ^ L)}";
 cout << "\n 2.) 7M ^ (C -> D) ";
 cout << "\n 3.) 7N ^ (F <-> G) /: K ^ 7N ";
 cout << "\n 4.) 7M "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule;
 {if (num == 2)
 score10 = score10 +1;
  } 
  {if (rule == "SIMP")
  score10 =score10  +1;
}
  cout << "\n 5.) 7N "; cout << "Number : " ; cin >>  num2; cout << "Rule : "; cin >> rule2;
 {if (num2 == 3)
 score10 = score10 +1;
  } 
  {if (rule2 == "SIMP")
  score10 = score10 +1;
}
 cout << "\n 6.) 7M ^ 7N "; cout << "Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
 {if (num3 == 45)
 score10 = score10  +1;
  } 
  {if (rule3 == "CONJ")
  score10 = score10 +1;
}
 cout << "\n 7.) (7M v H ) -> (K ^ L)"; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
 {if (num4 == 16)
 score10 = score10 +1;
  } 
  {if (rule4 == "MP")
  score10 = score10 +1;
}
cout << "\n 8.) 7M v H "; cout << "Number : " ; cin >>  num5; cout << "Rule : "; cin >> rule5;
 {if (num5 == 7)
 score10 = score10 +1;
  } 
  {if (rule5 == "MT")
  score10 =score10 +1;
}
cout << "\n 9.) K ^ L "; cout << "Number : " ; cin >>  num6; cout << "Rule : "; cin >> rule6;
 {if (num6 == 78)
 score10 = score10 +1;
  } 
  {if (rule6 == "MP")
  score10 = score10  +1;
}
cout << "\n 10.) K "; cout << "Number : " ; cin >>  num7; cout << "Rule : "; cin >> rule7;
 {if (num7 == 9)
 score10 = score10  +1;
  } 
  {if (rule7 == "SIMP")
  score10 = score10 +1;
}
cout << "\n 11.) K ^ 7N "; cout << "Number : " ; cin >>  num8; cout << "Rule : "; cin >> rule8;
 {if (num8 == 105)
 score10 = score10 +1;
  } 
  {if (rule8 == "CONJ")
  score10 = score10 +1;
}
    cout <<"\n" << " Your score for TEST 10 is: " << score10;
    totalscore = score10 + totalscore;
}	
}
}
cout <<"\n" << " Your TOTAL SCORE is: " << totalscore;
}



