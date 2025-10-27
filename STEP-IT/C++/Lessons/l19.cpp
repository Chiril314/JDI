 
	#include <iostream>
	#include <iomanip>
	#include <cstdlib>
	#include <ctime>
	#include <conio.h>
		
	#include <cstring>
 	  	 
	using namespace std; 
   	 	 
	// Structuri de date  - unificarea mai multor VAR intr-o structura unica 
	  
	//  tip_date NUME_VAR_1;   =>    element_1  ;
	  
	  
//      {
//	  	   KEY1 : VALUE, 
//	  	...
//		   KEYn : VALUE
//	    }
  
  
    //  NR. de sub-structuri este nelimitat in fiecare structura 
  
//	  struct NUME_STRUCTURA
//	  {
//	  	tip_date NUME_VAR_1;   =>    element_1  ;
//	  	....
//	  	tip_date NUME_VAR_n;   =>    element_n  ;
//	  	
//	  	
//		  struct NUME_STRUCTURA_1
//		  {
//		  	tip_date NUME_VAR_1;   =>    element_1  ;
//		  	....
//		  	tip_date NUME_VAR_n;   =>    element_n  ;
//	
//		  }  nume_var_1  ,  ....  ,  nume_var_n   ;
//		  
//		  ......
//		  
//		  struct NUME_STRUCTURA_N
//		  {
//		  	tip_date NUME_VAR_1;   =>    element_1  ;
//		  	....
//		  	tip_date NUME_VAR_n;   =>    element_n  ;
//	
//		  }  nume_var_1  ,  ....  ,  nume_var_n   ;
//
//
//	  }  nume_var_1  ,  ....  ,  nume_var_n   ;

	  

    // declararea VAR tip date structura   =>    struct NUME_STRUCTURA nume_var_1, .... , nume_var_n  ; 
	  
	  
	// Accesul la elem. struct se realizeaza prin     PUNCT   .     =>  nume_var_1.element_1 
	
	
	// POINTER  =>  Accesul la elem. struct se realizeaza prin     ->     =>  nume_var_pointer_1->element_1 
	
	  struct STUDENT
      { 
	      struct NPP
	      {
	      	  char nume[20];
	      	 char prenume[20];
	      	 char patronim[20];
		  }npp; 
		   
	      char grupa[100];
	      int ani;
	      bool gen;
	      
	      struct NOTE
	      {
	      	 char dis[50];
	      	 int nota;
	      	 
		  }note[20];
		  
		  int NR_NOTE = 0 ; 
		   
	      double media = 0 ; 
	   
      };
      
      
	
	  void insertSTUDENT( STUDENT *stud , int *n )
      { 
      	 do
      	 {
      	 	 system("cls");
      	     cout<<"\n\t Studentul["<<*n+1<<"]"<<endl;
      	     
      	     cout<<" Enter nume     = "; cin>>stud[ *n ].npp.nume;
      	     cout<<" Enter prenume  = "; cin>>stud[ *n ].npp.prenume;
      	     cout<<" Enter patronim = "; cin>>stud[ *n ].npp.patronim;
      	     
      	     cout<<" Enter grupa    = "; cin>>stud[ *n ].grupa; 
      	 	 cout<<" Enter ani      = "; cin>>stud[ *n ].ani; 
      	 	 cout<<" Enter gen      = "; cin>>stud[ *n ].gen;
      	 	 
      	 	 do
      	 	 {
      	 	 	  cout<<"\n Enter  dis["<< stud[ *n ].NR_NOTE+1 <<"] = "; cin>>stud[ *n ].note[ stud[ *n ].NR_NOTE ].dis; 
      	 	 	  cout<<" Enter nota["<< stud[ *n ].NR_NOTE+1 <<"] = "; cin>>stud[ *n ].note[ stud[ *n ].NR_NOTE ].nota; 
      	 	       
      	 	      stud[ *n ].media += stud[ *n ].note[ stud[ *n ].NR_NOTE ].nota;
					  
      	 	      stud[ *n ].NR_NOTE+=1;
					  
				  cout<<" ++++++++ > NEW NOTA ?  ESC - EXIT , ANY KEY ... " <<endl; 
      	 	
		      }while( _getch() != 27 );	
			 
      	 	  stud[ *n ].media /= stud[ *n ].NR_NOTE; 
      	 	 
      	 	 
			   *n+=1;
      	 	
      	 	cout<<"---> NEW STUDENT ?  ESC - EXIT , ANY KEY ... "<<endl; 
      	 	
		 }while( _getch() != 27 );
      	
	   }
	   
       void showSTUDENT( STUDENT *stud , int *n )
	   {
	      
	      system("cls");
	      
	      if( *n == 0 ){ 	cout<<"\n\n\t Nu sunt studenti "<<endl; 	system("pause"); return;  } 
	      
	      cout<<endl;
	      cout<<setw(10)<<"ID"
		      <<setw(15)<<"NUME"
			  <<setw(10)<<"GEN"
			  <<setw(12)<<"GRUPA"
			  <<setw(10)<<"MEDIA"<<endl;
			  
	      for(int i=0; i < *n ; i++ )
	      {
	      cout<<setw(10)<<i+1
		      <<setw(15)<<stud[i].npp.nume
			  <<setw(10)<<( stud[i].gen ? "M" : "F")
			  <<setw(12)<<stud[i].grupa
			  <<setw(10)<<stud[i].media <<endl;
		  }
	      
	      cout<<endl;
	      system("pause");
	   }
	  
	  
	  int meniu()
	  { 
	  		system("cls");
	  		cout<<"\n\n\t   MENIU        "<<endl;
	  		cout<<"\t  1. Insert Student "<<endl;
	  		cout<<"\t  2. Show Student   "<<endl;
	  		cout<<"\t  3. Edit Student   "<<endl;
	  		cout<<"\t  4. Find Student   "<<endl;
	  		cout<<"\tESC. EXIT           "<<endl;
	  		
		    return _getch(); 	
	  }
	  
	int main()
	{  
	
	
      	
//      	int *v = new int[10];
//      	
//      	v[0] = 123; 
//      	
//      	cout<<" v[0] = "<< v[0] <<endl;
//      	
//      	*( v + 0 ) = 123 ; 
//      	cout<<" *( v + 0 ) = "<< *( v + 0 ) <<endl;
//      	
//      	
//      	
//      	STUDENT *s = new STUDENT[10];
//      	
//      	s[0].ani = 123 ; 
//      	cout<<" s[0].ani = "<< s[0].ani <<endl;
//      	
//      	( s + 0 )->ani = 123 ; 
//      	cout<<" ( s + 0 )->ani = "<< ( s + 0 )->ani <<endl;
//      	
//        return 0;
//	
	
	
	  STUDENT *stud = new STUDENT[100];
      int *NR_STUD = new int(0) ; 
      system("color B");
      while( 1 )
      { 
      	 switch( meniu() )
      	 {
      	 	case 27 : exit(0);
      	 	
      	 	case 49 : insertSTUDENT( stud , NR_STUD ); break;
      	 	case 50 : showSTUDENT( stud , NR_STUD );   break;
      	 	
		 }
       }
          
        
        
        // completam meniul 
        
        //  cout<<"\t  3. Edit Student   "<<endl;
	  	//	cout<<"\t  4. Find Student   "<<endl;
	  		
        
      
      
      
      
      
      
	
//  <cstring> <string.h>
//  STUDENT s;  
//  
//  strcpy( s.npp.nume , "Jora" ) ;  cout<<" s.npp.nume = "<<s.npp.nume<<endl; 
//  
//  strcpy( s.note[ s.NR_NOTE ].dis , "Python" );
//  s.note[ s.NR_NOTE ]. nota = 10; 
//  
//  s.NR_NOTE++;
//  
//  strcpy( s.note[ s.NR_NOTE ].dis , "C++" );
//  s.note[ s.NR_NOTE ]. nota = 10; 
//	
//  cout<<" s.note[0].dis = "<< s.note[0].dis <<endl; 
//  cout<<" s.note[0].nota = "<< s.note[0].nota <<endl; 	
//
//  cout<<" s.note[1].dis = "<< s.note[1].dis <<endl; 
//  cout<<" s.note[1].nota = "<< s.note[1].nota <<endl; 	


	
	

//      // struct STUD 
//      
//      struct STUDENT
//      {
//	  
//      char nume[100] = "";
//      char grupa[100];
//      int ani;
//      bool gen;
//      double media; 
//      
//      } stud[100] ;
//      
//      int n = rand()%10+10;
//      
//      
//      cout<<" sizeof( STUDENT ) = "<<sizeof( STUDENT )<<endl; 
//      
////      for(int i=0 ; i < n ; i++)
////      {
////          cout<<" Student["<<i+1<<" din "<<n<<"]"<<endl;
////          cout<<"  Nume = "; cin>>stud[i].nume;
////          cout<<"   Ani = "; cin>>stud[i].ani;
////          cout<<"   Gen = "; cin>>stud[i].gen;
////          cout<<" Media = "; cin>>stud[i].media;                      		  	
////	  }
//
//       
//      for(int i=0 ; i < n ; i++)
//      {
//          cout<<"INSERT Student["<<i+1<<" din "<<n<<"]"<<endl;
//          stud[i].nume[0] = 'a' + rand()%26 ;
//          stud[i].ani = rand()%50+15;
//          stud[i].gen = rand()%2;
//          stud[i].media = (rand()%10+1)*1.13;                      		  	
//	  }
//	  
//	  
//	  cout<<endl;
//	  for(int i=0 ; i < n ; i++)
//      {
//          cout<<" Student["<<i+1<<" din "<<n<<"]";
//          cout<<"\n  Nume = "<<stud[i].nume;
//          cout<<"\n   Ani = "<<stud[i].ani;
//          cout<<"\n   Gen = "<< (stud[i].gen ? "M" : "F" ) ;
//          cout<<"\n Media = "<<stud[i].media<<endl;                      		  	
//	  }
//	  cout<<endl;
//	  
//	  // 1.  contor M si contor F 
//	   
//	  struct CONTOR
//	  {
//	  	int cM = 0 ; 
//		int cF = 0 ; 
//		
//	  } C ; 
//	  
//	  for(int i=0 ; i < n ; i++)
//      {
//      	if( stud[i].gen ) C.cM++;
//      	 else  C.cF++;
//      	
//      }
//      
//      cout << " contor M = " << C.cM << endl;
//      cout << " contor F = " << C.cF << endl;
//	  
//	  
//	  
//	  // 2.  media ANI si media MEDIA  -  per GEN 
//	 
//	  
//	  struct MEDIA
//	  {
//	  	double mANI_0 = 0 ;
//	  	double mANI_1 = 0 ;
//	  	 
//	  	double mMEDIA_0 = 0 ;
//	  	double mMEDIA_1 = 0 ;
//	  } m ;
//	  
//	  
// 	  for(int i=0 ; i < n ; i++)
//      {
//      
//         if( stud[i].gen )
//		 {
//           	m.mANI_1 += stud[i].ani ;
//           	m.mMEDIA_1 += stud[i].media ; 
//			    
//		 }
//		 else
//		 {
//		 	m.mANI_0 += stud[i].ani ;
//           	m.mMEDIA_0 += stud[i].media ; 
//		 }
//      }
//
//			m.mANI_1   = m.mANI_1 / C.cM ;
//           	m.mMEDIA_1 = m.mMEDIA_1 / C.cM ; 
//            
//			m.mANI_0   /= C.cF ;
//           	m.mMEDIA_0 /= C.cF ; 
//   
//     cout<<endl;
//     cout<<" Media ani M = "<< m.mANI_1 <<endl;
//     cout<<" Media ani F = "<< m.mANI_0 <<endl;
//     
//     cout<<" Media media M = "<< m.mMEDIA_1 <<endl;
//     cout<<" Media media F = "<< m.mMEDIA_0 <<endl;
//     
//     cout<<endl;
//     
//     
// 	 // 3.  show toti studentii cu numele X , X - enter user
//    
//     char nume[20];
//     
//     cout<<"\n Enter nume = "; cin>>nume;
//     cout<<endl; 
//      bool FKey = 1; 
//      for(int i=0 ; i < n ; i++)
//      {
////      	nume like '%ana%'   ANA , ANA-MARIA , MARIA-ANA
////      	nume like 'ana%'    ANA , ANA-MARIA
////      	nume like '%ana'    ANA , MARIA-ANA
////     	    nume = 'ANA'        ANA 
//
//      	if( strstr( stud[i].nume , nume ) )
//      	{
//      	  cout<<" Student["<<i+1<<"]";
//          cout<<"\n  Nume = "<<stud[i].nume;
//          cout<<"\n   Ani = "<<stud[i].ani;
//          cout<<"\n   Gen = "<< (stud[i].gen ? "M" : "F" ) ;
//          FKey = 0 ; 
//		}
//	     	
//      }
//      
//      if( FKey ) cout<<"\n NUMELE \""<<nume<<"\" nu a fost gasit"<<endl; 
//     
//      
// 
//  
//	  // 4.  edit studentul dupa ID , ID - numarul de ordine 
//	  
//	  int ID ;
//	  
//	  do
//	  {
//	  	cout<<" Alege Studentul dupa ID [1..."<<n<<"] = ";
//	  	cin>>ID;
//	  }while( ID < 1 || ID > n );
//	  
//	  
//	  ID--;
//	  
//          cout<<" Student["<<ID+1<<"]"<<endl;
//          cout<<"  Nume ("<<stud[ID].nume<<") = "; cin>>stud[ID].nume;
//          cout<<"   Ani ("<<stud[ID].ani<<") = "; cin>>stud[ID].ani;
//          cout<<"   Gen ("<<stud[ID].gen<<") = "; cin>>stud[ID].gen;
//          cout<<" Media ("<<stud[ID].media<<") = "; cin>>stud[ID].media; 
//
//
//	
	
		return  0 ;   
	}
	  
    




