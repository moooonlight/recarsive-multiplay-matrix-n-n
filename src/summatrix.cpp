#include<iostream>
#include<vector>
using namespace std ;
vector< vector<int> > recarsive(vector< vector<int> >, vector< vector<int> > , int , int  , int , int);
vector< vector <int> > sumarray(vector<vector<int> > , vector<vector<int> > , int ,int , int , int );
vector< vector<int> > merge( vector<vector<int> > , vector<vector<int> > , vector<vector<int> > , vector<vector<int> > , int , int , int  ,int );

int main()
{
	int r1, c1, r2, c2;
	int x;
	vector <vector <int> >vec(r1 ,vector<int>(c1 ,0));
	vector< vector<int> > A;

	cout<<"enter your row A"<<" ";
	cin>>r1;
	cout<<"enter your column A"<<" ";
	cin>>c1;
	for(int i=0 ; i<r1 ; i++)
	{
		vector<int> row;
		for(int j=0; j<c1 ; j++)
		{
			cout<<"enter your number A"<<" ";
			cin>>x;
			row.push_back(x);

		}
		A.push_back(row);
	}
	cout<<"A is "<<endl;
	for(int i=0 ; i<r1 ; i++)
	{
		for(int j=0; j<c1 ; j++)
		{
			cout<<A.at(i).at(j)<<" ";
		}
		cout<<endl;
	}

	vector< vector<int> >B;

	cout<<"enter your row B"<<" ";
	cin>>r2;
	cout<<"enter your column B"<<" ";
	cin>>c2;
	for(int i=0 ; i<r2 ; i++)
	{
		vector<int> row;
		for(int j=0; j< c2 ; j++)
		{
			cout<<"enter your number B"<<" ";
			cin>>x;
			row.push_back(x);
		}
		B.push_back(row);
	}

	cout<<"B is "<<endl;
	for(int i=0 ; i<r1 ; i++)
	{
		for(int j=0; j<c1 ; j++)
		{
			cout<<B.at(i).at(j)<<" ";
		}
		cout<<endl;
	}


	vec = recarsive(A, B, r1 , r2 ,  c1 , c2);

	cout<<" mul is"<< "=" <<endl;

	for(int i=0 ;i< r1 ; i++)
	{
		for(int j=0 ; j<c1 ;j++)
		{
			cout<<vec.at(i).at(j)<<" ";

		}
		cout<<endl;
	}

}
vector<vector<int> > recarsive(vector<vector<int> > A,vector<vector<int> > B, int r1 ,int r2 ,int c1, int c2)
{

   int rr1 , rr2 , cc1 , cc2;
   rr1=r1/2;
   rr2=r2/2;
   cc1=c1/2;
   cc2=c2/2;

   vector<vector<int> > VEC (r1,vector <int> (c1, 0));


   vector<vector<int> > vec1 (rr1,vector <int> (cc1, 0));
   vector<vector<int> > vec2 (rr1,vector <int> (cc1, 0));
   vector<vector<int> > vec3 (rr1,vector <int> (cc1, 0));
   vector<vector<int> > vec4 (rr1,vector <int> (cc1, 0));

   vector<vector<int> > A1 (rr1,vector <int> (cc1, 0));
   vector<vector<int> > A2 (rr1,vector <int> (cc1, 0));
   vector<vector<int> > A3 (rr1,vector <int> (cc1, 0));
   vector<vector<int> > A4 (rr1,vector <int> (cc1, 0));

   vector<vector<int> > B1 (rr2,vector <int> (cc2, 0));
   vector<vector<int> > B2 (rr2,vector <int> (cc2, 0));
   vector<vector<int> > B3 (rr2,vector <int> (cc2, 0));
   vector<vector<int> > B4 (rr2,vector <int> (cc2, 0));

   cout << " A1 ="<<" ";
   for(int i=0 ; i < rr1; i++)
   {
	   for(int j=0; j<cc1; j++)
	   {
		   A1.at(i).at(j)=A.at(i).at(j);
	   }
   }

   for(int i=0 ; i< rr1; i++)
   {
	   for(int j=0; j<cc1; j++)
	   {
		   cout<< A1.at(i).at(j)<<" ";
	   }
	   cout<<endl;
   }

   cout<<"A2"<<" ";

   for(int i=0 ; i< rr1; i++)
   {
	   for(int j=cc1 , k=0 ; j < c1 && k < cc1 ;j++ ,k++)
	   {
		   A2.at(i).at(k)=A.at(i).at(j);
	   }
   }


   for(int i=0 ; i< rr1; i++)
   {
	   for(int k=0 ; k < rr1 ; k++ )
	   {
		   cout<< A2.at(i).at(k)<<" ";
	   }
	   cout<< endl;
   }

   cout<<"A3"<<" ";
   for(int i=rr1 , k=0; i< r1 &&  k < cc1 ; i++ ,k++)
   {
	   for(int j=0 ; j < cc1  ; j++)
	   {
		   A3.at(k).at(j)= A.at(i).at(j);
	   }
   }

   for(int i=0 ; i < cc1 ; i++ )
   {
	   for(int k=0 ; k < cc1 ; k++ )
	   {
		   cout<< A3.at(i).at(k)<<" ";
	   }
	   cout<<endl;
   }


   cout<<"A4"<<" ";
   for(int i=rr1 , w=0 ; i <= r1 && w < rr1; i++ ,w++)
   {
	   for(int j=cc2 , k=0 ; j < c1 && k < cc1 ; j++,k++ )
	   {
		   A4.at(w).at(k)= A.at(i).at(j);
	   }

   }

   for(int w=0 ; w < rr1 ; w++)
   {
	   for(int k=0 ; k < cc1; k++)
	   {
		   cout<< A4.at(w).at(k)<<" ";

	   }
	   cout<< endl;
   }


   cout<<"B1"<<" ";
   for(int i=0 ; i < rr2 ; i++)
   {
	   for(int j=0; j < cc2 ; j++)
	   {

		   B1.at(i).at(j)=B.at(i).at(j);
	   }
   }

   for(int i=0 ; i < rr2; i++ )
   {
	   for( int k=0 ; k < cc2 ; k++ )
	   {
		   cout<< B1.at(i).at(k)<<" ";

	   }
	   cout<< endl;
   }

   cout<<"B2"<<" ";
   for(int i=0 ; i< rr2; i++)
   {
	   for(int j=cc2 , k=0 ; j<c2 && k< cc2 ; j++ , k++)
	   {

		   B2.at(i).at(k)=B.at(i).at(j);
	   }
   }

   for(int i=0 ; i< cc2 ; i++ )
   {
	   for(int k=0 ; k < cc2 ; k++)
	   {
		   cout<< B2.at(i).at(k)<<" ";

	   }
	   cout<< endl;
   }

   cout<<"B3"<<" ";

   for(int i=rr2 , k=0 ; i< r2 && k< cc2 ; i++ , k++)
   {
	   for(int j=0; j<cc2 ; j++)
	   {

		   B3.at(k).at(j)=B.at(i).at(j);
	   }

   }


   for(int i=0 ; i < cc2 ; i++)
   {
	   for(int k=0 ; k < cc2 ; k++)
	   {
		   cout<< B3.at(i).at(k)<<" ";
	   }
	   cout<< endl;
   }

   cout<<"B4"<<" ";
   for(int i=rr2 , w=0 ; i<= r2 && w < cc2 ; i++ , w++)
   {
	   for(int j=cc2 , k=0 ; j < c2 && k< cc2 ; j++ ,k++)
	   {

		   B4.at(w).at(k)=B.at(i).at(j);
	   }

   }

   for(int w=0 ; w < cc2 ; w++)
   {
	   for(int k=0 ; k < cc2 ; k++)
	   {
		   cout<< B4.at(w).at(k)<<" ";
	   }
	   cout<< endl;
   }

	if(rr1==1 && rr2==1 && cc1==1 && cc2==1)
	{
		cout<<"to ifam"<< endl;
		VEC.at(0).at(0) = A1.at(0).at(0) * B1.at(0).at(0) + A2.at(0).at(0) * B3.at(0).at(0) ;

		VEC.at(0).at(1) = A1.at(0).at(0) * B2.at(0).at(0) +  A2.at(0).at(0) * B4.at(0).at(0) ;

		VEC.at(1).at(0) = A3.at(0).at(0) * B1.at(0).at(0) + A4.at(0).at(0) * B3.at(0).at(0) ;

		VEC.at(1).at(1) = A3.at(0).at(0) * B2.at(0).at(0) +  A4.at(0).at(0) * B4.at(0).at(0);


	}

	else
	{
      
      vec1= sumarray( recarsive(A1 ,B1 ,rr1 ,rr2 ,cc1 ,cc2) , recarsive(A2 ,B3 ,rr1 ,rr2 ,cc1 ,cc2),rr1 ,rr2 ,cc1 ,cc2);



      vec2= sumarray(recarsive(A1 ,B2 ,rr1 ,rr2 ,cc1,cc2)  ,  recarsive(A2 ,B4 ,rr1 ,rr2 ,cc1 ,cc2), rr1,rr2,cc1,cc2);

      vec3= sumarray( recarsive(A3 ,B1 ,rr1 ,rr2 ,cc1 ,cc2) , recarsive(A4 ,B3 ,rr1 ,rr2 ,cc1 ,cc2),rr1 ,rr2 ,cc1 ,cc2);

      vec4= sumarray(recarsive(A3 ,B2 ,rr1 ,rr2 ,cc1 ,cc2) ,  recarsive(A4 ,B4 ,rr1 ,rr2 ,cc1 ,cc2), rr1 ,rr2 ,cc1 ,cc2);
     
      VEC = merge(vec1 , vec2 , vec3 , vec4 , r1 ,  c1 , rr1 , cc1  );

	}
	return VEC;
}



vector<vector<int> > sumarray(vector<vector<int> > array1 , vector<vector<int> > array2, int rr1, int rr2, int cc1, int cc2)
{
	vector<vector<int> > add (rr1,vector <int> (cc1, 0));
	for(int i=0; i < rr1; i++)
	{
		for(int j=0; j < cc1; j++)
		{

			add.at(i).at(j) = array1.at(i).at(j) + array2.at(i).at(j);
		}
	}
	return add;

}


vector< vector<int> > merge( vector<vector<int> > vec1 , vector<vector<int> > vec2, vector<vector<int> > vec3 , vector<vector<int> >vec4 , int r1 , int c1 , int rr1 ,int cc1)
{
	vector<vector<int> > VEC (r1,vector <int> (c1, 0));

	for(int i=0 ; i < rr1 ; i++ )
	{
		for(int j=0 ; j< cc1 ; j++)
		{
			VEC.at(i).at(j) = vec1.at(i).at(j);
		}
	}
	for(int i=0; i < rr1 ; i++ )
	{
		for(int j=cc1 , k=0  ; j< c1 && k < cc1  ; j++ , k++)
		{
			VEC.at(i).at(j)=vec2.at(i).at(k);
		}

	}
	for(int i=rr1 , k=0 ; i < r1 && k < rr1 ; i++ , k++ )
	{
		for(int j=0 ; j< cc1 ; j++)
		{
			VEC.at(i).at(j)=vec3.at(k).at(j);
		}
	}
	for(int i=rr1 , k=0 ; i < r1 && k < rr1  ; i++  , k++ )
	{
		for(int j=cc1 , w=0  ; j< c1 && w < cc1  ; j++ , w++)
		{
			VEC.at(i).at(j)=vec4.at(k).at(w);
		}
	}

	cout<< "vec in merge is"<< endl;
	for( int i=0 ; i < r1 ; i++ )
	{
		for(int j=0 ; j < c1 ; j++)
		{
			cout<< VEC[i][j]<<" ";
		}
		cout<< endl;
	}
	return VEC;

}






