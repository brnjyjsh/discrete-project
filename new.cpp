#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fName;
	string lName;
	int num,num2,num3,num4,num5;
	int a,a2,b,b2,c,c2,d,d2,e,e2,f,f2,g,g2,h,h2,i,i2,j,j2,k,k2,l,l2,m,m2,n,n2,o,o2,p,p2,q,q2,r,r2,s,s2,t,t2,u,u2,v,v2,w,w2;
	string rule,rule2,rule3,rule4,rule5;
	string rule6,rule7,rule8,rule9,rule10,rule11,rule12,rule13,rule14,rule15,rule16,rule17,rule18,rule19,rule20,rule21,rule22,rule23,rule24,rule25,rule26,rule27,rule28,rule29;
	string rule30,rule31,rule32;
	string rule33,rule34,rule35,rule36,rule37,rule38,rule39,rule40,rule41,rule42,rule43,rule44;
	int score1 = 0,score2 = 0,score3 = 0,score4 = 0,score5 = 0,score6 = 0,score7 = 0,score8 = 0,score9 = 0,score10 = 0;
	int totalscore1,totalscore2,totalscore3,totalscore4,totalscore5,totalscore6,totalscore7,totalscore8,totalscore9,totalscore10,totalscoreall;
	




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
 
 cout<<"\n";
 cout<<"\n";
 cout<<"\nTEST 1";
 cout << "\n 1.) M -> N ";
 cout << "\n 2.) M -> O /: M -> (N ^ O)";
 cout << "\n 3.) 7M v N "; cout<<"\n"<< "Number : " ; cin >>  num; cout << "\nRule : "; cin >> rule;
 if (num == 1)
 score1= score1 +1;
  
  if (rule == "IMPL")
  score1 =score1 +1;
  
  
 cout << "\n 4.) 7M v O "; cout << "\nNumber : " ; cin >>  num2; cout << "\nRule : "; cin >> rule2;
 {if (num2 == 2)
 score1= score1+1;
  } 
  {if (rule2 == "IMPL")
   score1 = score1+1;
  
  }
  
   cout << "\n 5.)(7M v N) ^(7M v O)"; cout << " Number : " ; cin >>  num3; cout << "Rule : "; cin >> rule3;
    {if (num3 == 3)
 score1= score1+1;
  } 
  {if (rule3 == "CONJ")
   score1 =score1 +1;
  
  }
     cout << "\n 6.) 7M v (N v O)"; cout << "Number : " ; cin >>  num4; cout << "Rule : "; cin >> rule4;
     {
	 if (num4 == 5)
 score1=score1 +1;
  } 
  {if (rule4 == "DIST")
   score1 =score1 +1;
  
  }
  cout << "\n 7.) M -> (N v O)"; cout << "Number : " ; cin >>  num5; cout << "Rule : "; cin >> rule5;
   {
   if (num5 == 6)
 score1=score1+1;
  } 
  {if (rule5 == "IMPL")
   score1 =score1 +1;
   
   cout<<"SCORE : "<<score1<<endl;

  
  }
  cout<<"\n";
  cout<<"\n";
  
 cout<<"\nTEST 2";
 cout << "\n 1.) A -> B ";
 cout << "\n 2.) 7A -> C v D)";
 cout << "\n 3.) 7B";
 cout << "\n 4.) 7C /:D";
 cout << "\n 5.) 7A"; cout << "Number : " ; cin >>  a; cout << "Rule : "; cin >> rule6;
 {if (a == 13)
 score2 = +1;
  } 
  {if (rule6 == "MT")
	score2 = +1;
}
  cout << "\n 6.) C v D "; cout << "Number : " ; cin >>  a2; cout << "Rule : "; cin >> rule7;
 {if (a2 == 25)
	score2 = +1;
  } 
  {if (rule7 == "MP")
  score2 = +1;
}
  cout << "\n 7.) D "; cout << "Number : " ; cin >>  b; cout << "Rule : "; cin >> rule8;
 {if (b == 69)
 score2 = +1;
  } 
  {if (rule8 == "DS")
  score2 = +1;
  
  totalscore2 = score2;
  
   cout<<"SCORE : "<<totalscore2<<endl;
}

cout<<"\n";
cout<<"\n";
 cout<<"\nTEST 3";
 cout << "\n 1.) S ";
 cout << "\n 2.) 7S /:T";
 cout << "\n 3.) S v T"; cout << "Number : " ; cin >>  b2; cout << "Rule : "; cin >> rule9;
 {if (b2 == 1)
 score3 = +1;
  } 
  {if (rule9 == "ADD")
	score3 = +1;
}
  cout << "\n 4.) T "; cout << "Number : " ; cin >>  c; cout << "Rule : "; cin >> rule10;
 {if (c == 23)
 score3 = +1;
  } 
  {if (rule10 == "MP")
  score3 = +1;
  
  totalscore3 = score3;
  
   cout<<"SCORE : "<<totalscore3<<endl;
}

cout<<"\n";
cout<<"\n";
 cout<<"\nTEST 4";
 cout << "\n 1.) 7M -> Q ";
 cout << "\n 2.) R -> 7T";
 cout << "\n 3.) 7M v R /:Q v 7T";
 cout << "\n 4.) (7M ->Q) ^ (R->7T) "; cout << "Number : " ; cin >>  c2; cout << "Rule : "; cin >> rule11;
 {if (c2 == 12)
 score4= +1;
  } 
  {if (rule11 == "CONJ")
  score4 = +1;
}
  cout << "\n 5.) Q v 7T"; cout << "Number : " ; cin >>  d; cout << "Rule : "; cin >> rule12;
 {if (d == 43)
 score4=  +1;
  } 
  {if (rule12 == "CD")
  score4 =  +1;
  
  totalscore4 = score4;
   cout<<"SCORE : "<<totalscore4<<endl;
}
cout<<"\n";
cout<<"\n";
cout<<"\nTEST 5";
 cout << "\n 1.) A v B ";
 cout << "\n 2.) 7C -> 7A";
 cout << "\n 3.) C -> D";
 cout << "\n 4.) 7D /: B";
 cout << "\n 5.) 7C "; cout << "Number : " ; cin >>  d2; cout << "Rule : "; cin >> rule13;
 {if (d2 == 34)
 score5= +1;
  } 
  {if (rule13 == "MT")
  score5 = +1;
}
  cout << "\n 6.) 7A "; cout << "Number : " ; cin >>  e; cout << "Rule : "; cin >> rule14;
 {if (e == 25)
 score5= +1;
  } 
  {if (rule14 == "MP")
  score5 = +1;
}
 cout << "\n 7.) B "; cout << "Number : " ; cin >>  e2; cout << "Rule : "; cin >> rule15;
 {if (e2 == 16)
 score5= +1;
  } 
  {if (rule15 == "DS")
  score5 = +1;
  
  totalscore5 = score5;
  
   cout<<"SCORE : "<<totalscore5<<endl;
}
cout<<"\n";
cout<<"\n";
cout<<"\nTEST 6";
 cout << "\n 1.) x -> (y ^ z) ";
 cout << "\n 2.) y -> k";
 cout << "\n 3.) w";
 cout << "\n 4.) w -> x /: k";
 cout << "\n 5.) x "; cout << "Number : " ; cin >>  f; cout << "Rule : "; cin >> rule16;
 {if (f == 34)
 score6= +1;
  } 
  {if (rule16 == "MP")
  score6 = +1;
}
  cout << "\n 6.) y ^ z "; cout << "Number : " ; cin >>  f2; cout << "Rule : "; cin >> rule17;
 {if (f2 == 15)
 score6= +1;
  } 
  {if (rule17 == "MP")
  score6 = +1;
}
 cout << "\n 7.) y "; cout << "Number : " ; cin >>  g; cout << "Rule : "; cin >> rule18;
 {if (g == 6)
 score6=+1;
  } 
  {if (rule18 == "SIMP")
  score6 = +1;
}
 cout << "\n 8.) k "; cout << "Number : " ; cin >>  g2; cout << "Rule : "; cin >> rule19;
 {if (g2 == 27)
 score6= +1;
  } 
  {if (rule19 == "MP")
  score6 = +1;
  
  totalscore6 = score6;
  
   cout<<"SCORE : "<<totalscore6<<endl;
}

cout<<"\n";
cout<<"\n";
cout<<"\nTEST 7";
 cout << "\n 1.) x -> y ";
 cout << "\n 2.) (7x v w) -> k";
 cout << "\n 3.) 7y ^ z /: k v T";
 cout << "\n 4.) 7y "; cout << "Number : " ; cin >>  h; cout << "Rule : "; cin >> rule20;
 {if (h == 3)
 score7= +1;
  } 
  {if (rule20 == "SIMP")
  score7 = +1;
}
  cout << "\n 5.) 7X "; cout << "Number : " ; cin >>  h2; cout << "Rule : "; cin >> rule21;
 {if (h2 == 14)
 score7= +1;
  } 
  {if (rule21 == "MT")
  score7 = +1;
}
 cout << "\n 6.) 7y v w "; cout << "Number : " ; cin >>  i; cout << "Rule : "; cin >> rule22;
 {if (i == 5)
 score7= +1;
  } 
  {if (rule22 == "ADD")
  score7 = +1;
}
 cout << "\n 7.) k "; cout << "Number : " ; cin >>  i2; cout << "Rule : "; cin >> rule23;
 {if (i2 == 62)
 score7= +1;
  } 
  {if (rule23 == "MP")
  score7 = +1;
}
cout << "\n 8.) k V T "; cout << "Number : " ; cin >>  j; cout << "Rule : "; cin >> rule24;
 {if (j == 7)
 score7= +1;
  } 
  {if (rule25 == "ADD")
  score7 = +1;
  
  totalscore7 = score7;
  
   cout<<"SCORE : "<<totalscore7<<endl;
}


cout<<"\n";
cout<<"\nTEST 8";
 cout << "\n 1.) A -> (B ^ C) ";
 cout << "\n 2.) A ^ C /: 7B ";
 cout << "\n 3.) A "; cout << "Number : " ; cin >>  num; cout << "Rule : "; cin >> rule25;
 {if (num == 2)
 score8= +1;
  } 
  {if (rule25 == "SIMP")
  score8= +1;
}
  cout << "\n 4.) 7(B ^ C) "; cout << "Number : " ; cin >>  k; cout << "Rule : "; cin >> rule26;
 {if (k == 13)
 score8= +1;
  } 
  {if (rule26 == "MP")
  score8 = +1;
}
 cout << "\n 5.) 7B v 7C "; cout << "Number : " ; cin >>  k2; cout << "Rule : "; cin >> rule27;
 {if (k2 == 4)
 score8= +1;
  } 
  {if (rule27 == "DM")
  score8 = +1;
}
 cout << "\n 6.) 7C v 7B "; cout << "Number : " ; cin >>  l; cout << "Rule : "; cin >> rule28;
 {if (l == 5)
 score8= +1;
  } 
  {if (rule28 == "COMM")
  score8 = +1;
}
cout << "\n 7.) C ^ A "; cout << "Number : " ; cin >>  l2; cout << "Rule : "; cin >> rule29;
 {if (l2 == 2)
 score8= +1;
  } 
  {if (rule29 == "COMM")
  score8 = +1;
}
cout << "\n 8.) C "; cout << "Number : " ; cin >>  m; cout << "Rule : "; cin >> rule30;
 {if (m == 7)
 score8= +1;
  } 
  {if (rule30 == "SIMP")
  score8 = +1;
}
cout << "\n 9.) 77C "; cout << "Number : " ; cin >>  m2; cout << "Rule : "; cin >> rule31;
 {if (m2 == 8)
 score8= +1;
  } 
  {if (rule31 == "DN")
  score8 =+1;
}
cout << "\n 10.) 7B "; cout << "Number : " ; cin >>  n; cout << "Rule : "; cin >> rule32;
 {if (n == 69)
 score8= +1;
  } 
  {if (rule32 == "DS")
  score8 = +1;
  
  totalscore8 = score8;
  
   cout<<"SCORE : "<<totalscore8<<endl;
}

cout<<"\n";
cout<<"\n";
cout<<"\nTEST 9";
 cout << "\n 1.) F -> G ";
 cout << "\n 2.) F v H ";
 cout << "\n 3.) 7G ";
 cout << "\n 4.) H -> (G -> I) /: F -> I";
 cout << "\n 5.) 7F "; cout << "Number : " ; cin >>  n2; cout << "Rule : "; cin >> rule33;
 {if (n2 == 13)
 score9= +1;
  } 
  {if (rule33 == "MT")
  score9 = +1;
}
  cout << "\n 6.) H "; cout << "Number : " ; cin >>  o; cout << "Rule : "; cin >> rule34;
 {if (o == 25)
 score9= +1;
  } 
  {if (rule34 == "DS")
  score9 = +1;
}
 cout << "\n 7.) G -> I "; cout << "Number : " ; cin >>  o2; cout << "Rule : "; cin >> rule35;
 {if (o2 == 46)
 score9= +1;
  } 
  {if (rule35 == "MP")
  score9 = +1;
}
 cout << "\n 8.) F -> I "; cout << "Number : " ; cin >>  p; cout << "Rule : "; cin >> rule36;
 {if (p == 17)
 score9= +1;
  } 
  {if (rule36 == "HS")
  score9= +1;
  
  totalscore9 = score9;
  
   cout<<"SCORE : "<<totalscore9<<endl;
}



cout<<"\n";
cout<<"\n";
cout<<"\nTEST 10";
 cout << "\n 1.) (7M ^ 7N ) -> {(7M v H)->(K ^ L)}";
 cout << "\n 2.) 7M ^ (C -> D) ";
 cout << "\n 3.) 7N ^ (F <-> G) /: K ^ 7N ";
 cout << "\n 4.) 7M "; cout << "Number : " ; cin >>  p2; cout << "Rule : "; cin >> rule37;
 {if (p2 == 2)
 score10 = +1;
  } 
  {if (rule37 == "SIMP")
  score10 = +1;
}
  cout << "\n 5.) 7N "; cout << "Number : " ; cin >>  q; cout << "Rule : "; cin >> rule38;
 {if (q == 3)
 score10 = +1;
  } 
  {if (rule38 == "SIMP")
  score10 = +1;
}
 cout << "\n 6.) 7M ^ 7N "; cout << "Number : " ; cin >>  q2; cout << "Rule : "; cin >> rule39;
 {if (q2 == 45)
 score10 = +1;
  } 
  {if (rule39 == "CONJ")
  score10 =  +1;
}
 cout << "\n 7.) (7M v H ) -> (K ^ L)"; cout << "Number : " ; cin >>  r; cout << "Rule : "; cin >> rule40;
 {if (r == 16)
 score10= score10 +1;
  } 
  {if (rule40 == "MP")
  score10 = score10 +1;
}
cout << "\n 8.) 7M v H "; cout << "Number : " ; cin >>  r2; cout << "Rule : "; cin >> rule41;
 {if (r2 == 7)
 score10=  +1;
  } 
  {if (rule41 == "MT")
  score10 = +1;
}
cout << "\n 9.) K ^ L "; cout << "Number : " ; cin >>  s; cout << "Rule : "; cin >> rule42;
 {if (s == 78)
 score10= +1;
  } 
  {if (rule42 == "MP")
  score10 =  +1;
}
cout << "\n 10.) K "; cout << "Number : " ; cin >>  s2; cout << "Rule : "; cin >> rule43;
 {if (s2 == 9)
 score10 = +1;
  } 
  {if (rule43 == "SIMP")
  score10 = +1;
}
cout << "\n 11.) K ^ 7N "; cout << "Number : " ; cin >>  t; cout << "Rule : "; cin >> rule44;
 {if (t == 105)
 score10 = +1;
  } 
  {if (rule44 == "CONJ")
  score10 = +1;
  
  totalscore10 = score10;
  
   cout<<"SCORE : "<< totalscore10 <<endl;
}

 
 
 	
 	totalscoreall = score1+score2+score3+score4+score5+score6+score7+score8+score9+score10;

	
      cout <<"\n" <<fName << " " << lName << " Your score is : " << totalscoreall;
	
	
	
	
	
}
