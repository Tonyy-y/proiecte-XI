STRUCTURA LINIARA


Se introduc de la tastatura nr a,b,c
sa se calculeze media aritmetica dintre a si b si dintre b si c.
Pentru calcularea celor doua medii se vor folosi doua variabile de memorie m1 si m2.

int a,b,c;
float m1,m2;
cin>>a>>b>>c;
 m1=(a+b)/2;
 m2=(b+c)/2;
 cout<<m1<<m2;

 problema 1)

 se citesc trei numere intregi de la tastura. sa se calculeze media aritmetica

  int a,b,c;
  float media;
  cin>>a>>b>>c;
  media=(a+b+c)/3;
  cout<<media;

  problema 2)

  se citesc dimensiunile pentru laturile unui triunghi . sa se calculeze aria si perimetrul triunghiului.


 float a,b,c,p,aria;
 cin>>a>>b>>c;
 p=(a+b+c)/2;
 aria=sqrt(p*(p-a)*(p-b)*(p-c));
 cout<< " Aria este: "<<aria;
 cout<< " Perimetrul este : "<<p;


 STRUCTURA ALTERNATIVA

    if conditie
        then
        instructiune 1;
    else
        instructiune 2;


    exemplu: se introduce de la tastatura un numar n. Sa se calculeze inversul acestui numar , inv, definit astfel:

        inv = {  1/n pt n!=0
                 0 pt n=0


    int n;
    float inv;
    cin>>n;
    if ( n!=0 )
    {
        inv =1/n;
        else
        inv=0;
    }
    cout<<inv;
return 0;

  Se introduc de la tastatura numerele intregi n,a,b si c. Sa se calculeze valoarea lui e
definit astfel :

    e= (a+b)/c pt n=1
       (b+c)/a pt n=2
       (c+a)/b pt n=3

    int n,a,b,c;
    float e;
    cin>>n>>a>>b>>c;
    if ( n==1 )
      {
        e=(a+b)/c;
        else
            if ( n==2 )
        {
            e=(b+c)/a;
            else
                if ( n==3 )
            {
                e=(c+a)/b;
            }
        }
    cout<<e;
return 0;


  Probleme propuse:

      1. Se citesc patru numere intregi de la tastatura : a,b,c si d. Determinati care dintre produsele axb si cxd
      este mai mare.



      int a,b,c,d;
      cin>>a>>b>>c>>d;

      if ( a*b == c*d )
      {
          cout<<"Produse egale";
          else
          {
            if (a*b > c*d)
            cout<<a*b<< " este produsul mai mare";
          else
            cout<<c*d<< " este produsul mai mare";
      }
      }

      2. Se citesc trei numere a,b,c . Aflati daca aceste numere pot reprezenta laturile unui triunghi. In caz afirmativ ,
      calculati aria si afisati ce tip de triunghi este .

      int a,b,c,p,s;
      cin>>a,b,c;
      if ( a< b+c && b< a+c && c< a+b && a>0 && b>0 && c>0)
      {
          p=(a+b+c)/2;
          s=sqrt(p*(p-a)*(p-b)*(p-c))
          cout<<s;
          if (a==b && b==c )
          {
            cout<< " Triunghi echilateral";}
          if ( a==b && b!=c )
          {
              cout<< " Triunghi isoscel ";
          }
          if ( a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
          {
              cout<< " Triunghi dreptunghic";
          }
          else
            cout<< " aceste numere nu reprezinta laturile unui triunghi";
      }

      3. Se citeste un numar intreg n care reprezinta un an calendaristic. Sa se verifice daca anul este bisect sau nu


      int n;
      cin>>n;
      if ( n%4 != 0)
      {
          cout<< "nebisect";
          else
            if ( n%100 == 0 && n%400 != 0)
           {
            cout<< " nebisect";
          else
            cout<<bisect;
      }
      }

4. Se citesc 3 numere reale. Sa se calculeze minimul si maximul modulelor lor.
{
  int a,b,c,min,max;
  cin>>a>>b>>c;
  min=abs(a);
  if ( abs(b)< min)
    min=abs(b);
    if ( abs(b)< min)
    min=abs(c);
  
  max=abs(a);
  if ( abs(b) >max)
  max=abs(b);
   if ( abs(b) > max)
   max=abs(c);

   cout<<min;
   cout<<max;
    return 0;

   }
   
5. Se citesc doua numere naturale a si b. Sa se afiseze cate numere pare sunt in 
intervalul [a,b].
{
int a,b,i,nr;
nr=0;
cin>>a>>b;
 for ( i=a; i<=b; i++)
 if ( i%2 == 0)
 nr++;
  cout<< " Nr pare din interval : "<<nr<<endl;
return 0;
}



STRUCTURA REPETITIVA 

 Exemplu:
  Sa se calculeze suma a n numere introduse de la tastatura. Se vor folosi 4 variabile de memorie: 
  n ( cate nr se citesc ), i ( contor ), s(suma) , a ( valoarea care se citeste de la tastatura ).
  Valoarea a se va adauga la suma pana cand i va fi mai mare decat n.

  int i,n;
  float a,s;
  {
   cin>>n;
   s=0;
   for ( i=1; i<=n; i++)
   {
    cin>>a;
    s= s+a;
   }
   cout<<s;
  }

Probleme propuse:

1. Se citesc de la tastatura n numere intregi. Sa se afle cate numere sunt negative.
{
  int n,v[],nr;
  cin>>n;
  for ( int  i=1; i<=n; i++)
  { 
    cin>>v[i];
    nr =0;
    if ( v[i] < 0)
    nr++;
  }
  cout<<nr;
}

2. Se citesc de la tastatura n numere intregi . Sa se calculeze media aritmetica a numerelor pare.

   int n,s,nr,a;
   cin>>n;
   s=0;
   nr=0;
   for ( i=1; i<=n; i++)
   {
    cin>>a;
    if ( a%2 == 0)
       s=s+a;
       nr++;
   }
   cout<<s/nr;

3. Sa se afiseze primele n nr naturale divizibile cu 5.

int n,i,a;
cin>>n;
a=0;
 for (i=1; i<=n; i++)
   a=a+5;
cout<<a;

    Instructiunea SWITCH 

    switch (expresie)
    {  
      case exp_1: instructiune_1 break;
      case exp_2: instructiune_2 break;
      ...........................
      case exp_n: instructiune_n break;
      [default:  instructiune_n + 1]
    }


Exemplu:
{ int a,b,n;
cout<<" n= ";cin>>n;
switch(n)
{ case 3: cout<<3<< " ";
  case 2: cout<<2<< " ";
  case 1: cout<<1<< " ";break;
  default: cout<< " Ati ales alt numar ";
}
 }

Exemplu 2: Programul citeste doua nr a si b si un caracter c. Daca pt c se citeste 1 sau 3, se afiseaza
suma calor doua numere. Daca pt c se citeste 2 sau 4, se afis dif dintre valoarea mai mare si val mai mica a celor doua numere.
In restul cazurilor, se afiseaza mesajul Alta optiune.*/













