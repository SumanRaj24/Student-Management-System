#include<iostream>
using namespace std;
string arr1[30],arr2[12],arr3[20],arr4[20],arr5[10],arr6[20];
int total=0;
//------Enter data function------
void EnterData()
{
    int choice;
    cout<<"How many students do you want to enter :";
    cin>>choice;
    if(total==0)
    {	
	    total=total+choice;
	    for(int i=0;i<choice;i++)
	    {
	        cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
	        cout<<"Enter Name-:";
	        cin>>arr1[i];
	        cout<<"Enter RollNo-:";
	        cin>>arr2[i];
	        cout<<"Enter Course Name-:";
	        cin>>arr3[i];
	        cout<<"Enter Collage Name-:";
	        cin>>arr4[i];
	        cout<<"Enter Contact Number-:";
	        cin>>arr5[i];
            cout<<"Emter Email Id-:";
            cin>>arr6[6];

	    }
    }
    else
    {
    	for(int i=total;i<total+choice;i++)
	    {
	        cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
	        cout<<"Enter Name:";
	        cin>>arr1[i];
	        cout<<"Enter RollNo";
	        cin>>arr2[i];
	        cout<<"Enter Course";
	        cin>>arr3[i];
	        cout<<"Enter Collage";
	        cin>>arr4[i];
	        cout<<"Enter Contact";
	        cin>>arr5[i];
            cout<<"Emter Email Id";
            cin>>arr6[6];
	    }
      total=total+choice;	
	}
}
//----------Show data--------
void ShowData()
{
	if(total==0)
	{
		cout<<"No Data is Entered Please The Data"<<endl;
    }
	else{
		   
	    for(int i=0;i<total;i++)
	    {
	        cout<<"Data of Studend :"<<i+1<<endl<<endl;
	        cout<<"Name:" <<arr1[i]<<endl;
	        cout<<"RollNo:" <<arr2[i]<<endl;
	        cout<<"Course:" <<arr3[i]<<endl;
	        cout<<"Collage:" <<arr4[i]<<endl;
	        cout<<"Contact:" <<arr5[i]<<endl;
            cout<<"Email Id:" <<arr6[i]<<endl;
            
	    }
   }
}
//---------------Search data Function ------
void SearchData()
{
	if(total==0)
	{
		cout<<"No Data is Entered plese Enter The Data"<<endl;
    }
    else
    {
        string rollno;
        cout<<"Enter rollno of student which you want to search :";
        cin>>rollno;
        for(int i=0;i<total;i++)
        {
            if(rollno==arr2[i])
            {
            cout<<"Data of Studend :"<<i+1<<endl<<endl;
            cout<<"Name:" <<arr1[i]<<endl;
            cout<<"RollNo:" <<arr2[i]<<endl;
            cout<<"Course:" <<arr3[i]<<endl;
            cout<<"Collage:" <<arr4[i]<<endl;
            cout<<"Contact:" <<arr5[i]<<endl;
            cout<<"Email Id:"<<arr6[i]<<endl;
            }
           
        } 
    }
    cout<<"Search RollNo is Not Found.. "<<endl; 
}
//-----------Update data function----------
void UpdateData()
{
	if(total==0)
	{
		cout<<"No Data is Entered Plese Enter The Data"<<endl;
    }
    else
    {
        string rollno;
        cout<<"Enter Rollno of Student Which you want to search :";
        cin>>rollno;
        for(int i=0;i<total;i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"--Previous Data------------"<<endl;
            cout<<"Data of Studend :"<<i+1<<endl<<endl;
            cout<<"Name:" <<arr1[i]<<endl;
            cout<<"RollNo:" <<arr2[i]<<endl;
            cout<<"Course:" <<arr3[i]<<endl;
            cout<<"Collage:" <<arr4[i]<<endl;
            cout<<"Contact:" <<arr5[i]<<endl;
            cout<<"Email Id:"<<arr6[i]<<endl;
            cout<<"\n------Enter New Data------";
            cout<<"\nEnter The Name -: ";
            cin>>arr1[i];
            cout<<"\nEnter RollNo -: ";
            cin>>arr2[i];
            cout<<"\nEnter Course Name -: ";
            cin>>arr3[i];
            cout<<"\nEnter Collage Name -: ";
            cin>>arr4[i];
            cout<<"\nEnter Contect Number -: ";
            cin>>arr5[i];
            cout<<"\nEnter Email Id -: "<<endl;
            cin>>arr6[i];
            }
            cout<<"Search RollNo is Not Found.. "<<endl;
        }
    }
}
//--------------Delete Recourd function-------
void DeleteRecord()
{
	if(total==0)
	{
		cout<<"No Data is Entered Please Enter The Data"<<endl;
    }
    else
	{
	    int a;
		cout<<"Press 1 to delete full record"<<endl;
		cout<<"Press 2 to delete specific record"<<endl;
		cin>>a;
		if(a==1)
		{
			total=0;
			cout<<"All Record is Data Delete"<<endl;
		}
		else
		{
			string rollno;
			cout<<"Enter rollno which you want to delete"<<endl;
			cin>>rollno;
			for(int i=0;i<total;i++)
			{
				if(rollno==arr2[i])
				{
					for(int j=1;j<total;j++)
					{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
						arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
                        arr6[j]=arr6[j+1];
					}
					total--;
					cout<<"Your Required Recored id deleted ..!!"<<endl;
				}
			}
            cout<<"RollNo is Not Found Please Try Again ..."<<endl;
	    }
	}	

}

//--------------main function---------
int main()
{
    int value;
    cout<<"Hello Gays Welcome To My Student Management System ...!!"<<endl<<endl;
    while(true)
    {
        
        cout<<"\n\nPress 1 to Enter The Data"<<endl;
        cout<<"Press 2 to Show Data"<<endl; 
        cout<<"Press 3 to Search Data"<<endl;    
        cout<<"Press 4 to Update The Data"<<endl;
        cout<<"Press 5 to Delete The Record Data"<<endl;
        cout<<"Press 6 to Exit Data"<<endl; 
        cin>>value;
        switch(value)
        {
            case 1:
                 EnterData();
                 break;
            case 2:
                 ShowData();
                 break;
            case 3:
                 SearchData();
                 break;
            case 4:
                 UpdateData();
                 break;
            case 5:
                 DeleteRecord(); 
                 break;
            case 6:
                 exit(0);
                 break;
            default:
                 cout<<"Invalid Your Input Please Try Again Enter Your Number"<<endl;
                 break;                           
        }
    }   
}