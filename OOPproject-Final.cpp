#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<fstream>
using namespace std;

fstream regdata;
fstream cou;
static   const char *name;
static int counts;

long int receipt();
//
//void back(){
//	goto trys;
//};
void test(int, int, int a[],string dish[]);
void edit(int i,string dish[],int price[]);
void exit(){
    exit(0);}



void cls(){
	system("cls");
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

class restaurant{
	protected:
	int totalstock;
	int employees;
	float stockcost;
	float totalcash;
 	public:
		int n,n1,b;
		restaurant(){
		totalstock=50;
		employees=50;
		stockcost=15.76;	
		totalcash=1000.50;
		}
		int price[20];
		string dish[20];
		int i;
		int t;
		
		virtual void show()=0;
		
	void set_totalcash(float cash){
		totalcash=cash;
	}
	void get_totalcash(){
		cout<<"Total cash in the vault: "<<totalcash<<endl;
	}
		public:
	void rethek(){
		cout<<"Welcome to Rethek's dessert'.\nKindly select your desired option.\n[1]:EXCLUSIVIE DESSERTSS\n[2]:CAKES \n[3]:CUPCAKE \n";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                          \tEXCLUSIVE DESSERT\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Creme Brulee\nRS:300\n\n[2]:Nutella Sundae\nRS: 350\n\n[3]:Red Velvet Sundae\nRS 450\n\n[4]:Summer Berry Grunt\nRS:80 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		    int a[]={300,350,450,80};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="CremeBrulee";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
				dish[i]="NutellaSundae";
				i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
				dish[i]="RedVelvetSundae";
				i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
				dish[i]="SummerBerryGrunt";
				i+=1;
			}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                            CAKES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Cadbury Dairy Milk\t\nRs: 1000\n\n[2]:Mousse Cake\nRs: 1100\n\n[3]:Maltesers\nRS: 1200\n\n[4]:Belgian Chocolate Cake\n RS: 1600\n\n[5]:Chocolate Heaven\n RS 250\n\n[6]:Kit Kat Cake\n RS:1100";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		  int a[]={1000,1100,1200,1600,2500,1100};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="CadburyDairyMilk";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="MouseCake";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Maltesers";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="BelgianChocolateCake";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="ChocolateHeaven";
		    	i+=1;
			}
			else if(n1==6)
			{
				price[i]=a[5];
				t+=a[5];
		    	dish[i]="KitKatCake";
		    	i+=1;
			}
		 }     
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tCUPCAKES       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Classic Chocolate\nRs: 120\n\n[2]:Cream Cheese\nRs: 110\n\n[3]:Original Malt\nRS: 120\n\n[4]:Salted Caramel\n RS: 100\n\n[5]:Belgian Malt\n RS 150";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={120,110,120,100,500};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="ClassicChocolate";
		    	i+=1;
		    
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="CreamCheese";
		    	i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="OriginalMalt";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="OriginalCaramel";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="BelgianMalt";
		    	i+=1;
			}
		
	}		int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			restaurant::rethek();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::rethek();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}
}
	
	void sarah()
	{
		cout<<"welcome to Sarah's resturant.\nKindly select your desired option.\n[1]:EXCLUSIVIE DISCOUNT DEALS\n[2]VEG DEALS \n[3]BAR \n[4]FAST FOOD";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tEXCLUSIVE DEALS\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]DEAL 1: Zinger with 250 ml softdrink\ntRS:300\n\n[2]DEAL2:Zinger, chicken piece, fries and softdrink\ntRS: 350\n\n[3] DEAL 3: 2 Zinger, fries and 500ml softdrink\nRS 450 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
			int a[]={300,350,1200,450};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Deal1";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Deal2";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Deal3";
		    	i+=1;
}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST DEALS\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Egg Sandwich with Spread Cheese with coffee\t\nRs: 60\n\n[2]:Chicken Mayo Garlic Wrap With Coffe\nRs: 110\n\n[3]:Falafel Wrap With Coffee\nRS: 100\n\n[4]:Chicken Strip Wrap With Coffee\n RS: 400\n\n[5]:Chicken Kabab Wrap With Coffee\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n"	;
		    cin>>n1;
		    		  int a[]={60,110,100,500,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="EggSandwich";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="CickenMayoGarlicWrap";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="FalafelWrap";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Chickenstripwrap";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="ChickenKababWrap";
		    	i+=1;
			}
		 }     
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tBARBEQUE  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Malai Tikka\t\nRs: 160\n\n[2]:Beef Seekh Kabab\nRs: 110\n\n[3]:Chicken Seekh Kabba\nRS: 100\n\n[4]:Grilled Chicken With 300 ml pepsi\n RS: 400\n\n[5]:Chicken Tikka With 300 ml pepsi\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={160,110,100,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="MalaiTikka";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="BeefSeekhKebab";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="ChickenSeekhKebab";
		    	i+=1;
			
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="GrilledChicken";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="ChickenTikka";
		    	i+=1;
			}
		
		}
		if(n==4){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tFASTFOOD  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:4 Zing burgers, 4 regular fries & 1.5 litre soft drink\nRs: 600\n\n[2]:4 GMC burgers, 4 regular fries & 1.5 litre soft drink\nRs: 510\n\n[3]:3 Breast Pieces with regular fries & hot garlic mayo sauce\nRS: 100\n\n[4]:Beef Zinger Burger With 300 ml pepsi\n RS: 400\n\n[5]:Grilled Chicken Burger With 300 ml pepsi\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
				  int a[]={600,510,100,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="4ZingburgersDeal";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="4GMCBurgerDeal";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="3ChickenBreastPiecesDeal";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="BeefZingerBurgerDeal";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="GrilledChickenDeal";
		    	i+=1;
			}
		}
				int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			restaurant::sarah();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::sarah();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}
		}
		void umaima(){
			cout<<"welcome to Umaima's Kabab House.\nKindly select your desired option.\n[1]:KARHAI SPECIALITIES\n[2]:BBQ DISHES \n[3]:KATAKAT SPECIALITES \n[4]:BEVERAGES";
		cin>>n;
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tKARHAI SPECIALITIES\n----------------------------------------------------------------------------------------------";
			cout<< "\n[1]:KATAT MIX PLATE\nRS:2300\n\n[2]:BRAIN MASALA\nRS: 1350\n\n[3]:KIDNEY MASALA\nRS 450\n\n[4]:KAPOORA MASALA\n RS:1350 \n\n[5]:KAPOORA MASALA WITH BUTTER \nRS: 1900 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		    		  int a[]={2300,1350,450,1350,1900};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	
		    	dish[i]="KatakatMixPlate";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="BrainMasala";
		    	i+=1; 
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="KidneyMasala";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="KapooraMasala";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="KapooraMasalaWithButter";
		    	i+=1;
			}
		}
		if(n==3){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBBQ DISHES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:UMAIMA SPECIAL KABAB BEEF\t\nRs: 260\n\n[2]:MALAI TIKKA\nRs: 120\n\n[3]:CHICKEN MALAI BOTI\nRS: 180\n\n[4]:MUTTON CHOPS\n RS: 400\n\n[5]:Chicken Kabab Wrap \n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={260,120,180,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="UmaimaSpecial";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="MalaiTikka";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="ChickenMalaiBoti";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="MuttonChops";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="KebabWrap";
		    	i+=1;
			}
		 }     
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           BEVERAGESS \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Pepsi\t\nRs: 60\n\n[2]:Marinda\nRs: 60\n\n[3]:7up\nRS: 60\n\n[4]:7up diet\n RS: 60\n\n[5]:mineral water\n RS 250";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		     int a[]={60,60,60,60,250};
		    if(n1==1){
		    price[i]=a[0];
		    t+=a[0];
		    dish[i]="Pepsi";
		    i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Miranda";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="7up";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="7upDiet";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="MineralWater";
		    	i+=1;
			}
		
		}
		if(n==1){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tKARHAI  SPECIALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Peshawari Karhai\nRs: 600\n\n[2]:Red Karhai\nRs: 510\n\n[3]:3White Karhain\nRS: 100\n\n[4]:Beef Karahi\nRS: 500\n\n[5]:Chicken Karhai\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		    		  int a[]={600,510,1000,500,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="PeshawariKarhai";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="RedKarhai";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="WhiteKarhai";
		    	i+=1;
			
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="BeefKarahai";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="ChickenKarahai";
		    	i+=1;
			}
		
		}		int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			restaurant::umaima();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::umaima();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}}
		
	void stovesandcloves(){
		cout<<"welcome to Stoves And Cloves resturant.\nKindly select your desired option.\n[1]:BREAKFAST \n[2]:STARTERS \n[3]:PIZZA \n[4]:DESSERT\n[5]:MAIN COURSE";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST      \n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Cheese & Mushroom Omelette\ntRS:450\n\n[2]:Pakistani Omelette\ntRS: 350\n\n[3]:Breakfast Burrito\nRS 450 \n\n[4]:STOVES AND CLOVES'S SPECIAL OMELETE\n\nRS:800";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER "	;
		    cin>>n1;
		    		  int a[]={450,3500,4500,800};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="CheeseAndMushroomOmelette";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="PakistaniOmelette";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="BreakfastBuritto";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="SpecialOmelette";
		    	i+=1;
			}
		
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tSTARTERS      \n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Ceasar Salad\t\nRs: 600\n\n[2]:Chicken Strips\nRs: 190\n\n[3]:Peri Bites\nRS: 180\n\n[4]:Fries\n RS: 190\n\n[5]:Fries with Dip\n RS 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={600,190,180,190,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="CeasarSalad";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="ChickenStrips";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="PeriBites";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Fries";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="FrieswithDip";
		    	i+=1;
			}
		 }     
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tDESSERTS       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Chocolate Decadence Cake Slice\t\nRs: 400\n\n[2]:Chocolate Malt Cake Slice\nRs: 310\n\n[3]:Chocolate Heaven Cake Slice\nRS: 140\n\n[4]:Red Velvet Cake Slice\n RS: 400\n\n[5]:New York Cheese Cake\n RS 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY"	;
		    cin>>n1;
		    		  int a[]={400,310,140,1600,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="ChocolateDecadence";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="ChocolateMaltCake";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="ChocolateHeaven";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="RedVelvetCake";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="NewyorkCheeseCake";
		    	i+=1;
			}
		
		}
		if(n==5){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tMAIN    COURSE\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Grilled Chicken Sandwich\nRs: 600\n\n[2]:Penne Arrabiata\nRs: 410\n\n[3]:Fettuccine Alfredo\nRS: 800\n\n[4]:Classic Beef Burger\n RS: 400\n\n[5]:Chicken Mushroom Burger\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY "	;
		    cin>>n1;
		    		  int a[]={600,410,800,400,550};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="GrilledChickenSandwich";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="PenneArrabiata";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="FetuccinneAlfredo";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="ClassicBeefBurger";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="MushroomBurger";
		    	i+=1;
			}
		
		}
		if(n==3){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tPIZZAS        \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Margherita\nRs: 600\n\n[2]:Chicken Tikka\nRs: 410\n\n[3]:Hot & Spicy\nRS: 800\n\n[4]:Pepperoni\n RS: 400\n\n[5]:Mediterranean Pizza\n RS 550";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY \n"	;
		    cin>>n1;
				  int a[]={600,410,800,400,550};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Margherita";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="ChickenTikka";
		    	i+=1;	
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="HotandSpicy";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Pepperoni";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="MediterraneanPizza";
		    	i+=1;
			}
		}
		int q;
		cls();
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items";
		cin>>q;
		cls();
		if(q==1)
		{
			restaurant::stovesandcloves();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"Rs:"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill ";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::stovesandcloves();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}}};


long int receipt(){
	
srand (time(NULL));

long int receipt=rand()%1000+1;
			return receipt;
}


class bill:public restaurant{
	public:
		int j;
		int total;
		
	public:
		void show(){cout<<"nothing";
		}
		bill(){
		}
		int operator+(int z)
		{
			return this->total+z;
		}
		
		void displaybill(int t,int i,int price[],string dish[])
		{
			cls();
			cout<<"\n\t\t\t------------------------------------------------";
			cout<<"\n\t\t\t------------------GetSetEat---------------------";
			cout<<"\n\t\t\t--------------Customer Receipt:"<<receipt()<<"----------------";
			cout<<"\n\t\t\tITEM:\t\t\t\tAMOUNT:\n";
			for(int j=0;j<i;j++)
			{
				cout<<endl<<"\t\t\tITEM "<<j+1<<": "<<dish[j]<<"\t\t\t"<<price[j];
				total=total+price[j];
			}
			cout<<"\n--------------------------------------------------";
			cout<<endl<<"QUANTITY \t\t\t\t"<<i<<endl;
			cout<<endl<<"TOTAL\t\t\t\t"<<t<<endl;
			regdata.open(name,ios::out|ios::app);
			regdata<<"\t\t\tBill Info\t"<<"Receipt:\t"<<receipt()<<endl;
			regdata<<"\t\tItems=\t"<<i<<"\t\tTotal purchase value=\t"<<t<<endl;
			regdata.close();	
		}
		void rider(int t)
		{
			srand(time(NULL));
			string guy[]={"Arkam","Hassan","Alex","Hina","Faisal","Kamra","Rohan","Rabia","Tariq","Tooba","Rethek"};
			int index=rand()%7;
			cout<<"\n\t\t\t\tThank you for choosing GetSetEat!\n";
			cout<<"\n\t\t\t\tPlease take notes the details provided below: \n";
			cout<<"\n\t\t\t\tReciept Number: "<<receipt()<<endl;
			cout<<"\n\t\t\t\tRider Name: "<<guy[index]<<endl;
			cout<<"\n\t\t\t\tRider Contact: 090078601"<<endl;
			cout<<"\n\t\t\t\tTotal Amount: "<<t<<endl;
			cout<<"\n\t\t\t\tMode Of Payment: Cash On Delivery"<<endl;
			cout<<"\n\t\t\t\tDelivery Time: 60 minutes"<<endl;
			}
	void feedback()
{
	regdata.open(name,ios::out|ios::app);
	int d;
	string str;
	system("pause");
	cls();
	cout<<"Do you wish to provide feedback: \n[1]Yes\n[2]No\n";
	cin>>d;
	if(d==2)
	{
		cout<<"GetSetEat wishes you a happy dinner! Thank You!\n";
		exit();
	}
	else if(d==1)
	{
		cout<<"Team GetSetEat will not take much of your time. Please answer the following questionaire: \n";
		cout<<"\nWas GetSetEat website user friendly enough?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the food upto mark?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the customer service helpful?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the delivery quick enough?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Would you choose GetSetEat again for ordering food?If no please explain.\n";
		getline(cin,str);
		regdata<<endl<<str;
	
		cout<<"Please add further comments or suggestions: \n";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Thank You for providing us with feedback. It is now stored in the GetSetEat database for future consideration.\n\t\t\t\t Happy Eating! \n";
		regdata.close();
		exit();
	}
}	
};


void edit(int i,string dish[],int price[]){
	int pos;
		
					
				
			cout<<"select the item you want to delete";
			cin>>pos;
			
   if(pos>i)
   {
   cout<<"\n\nThis value is out of range: select again";
   cin>>pos;
   
   }
   else
   {
   --pos;
   for(int k=pos;k<i;k++)
   {
    dish[k]=dish[k+1];
    price[k]=price[k+1];
   }
   cout<<"\n\nNew items in your cart: ";
   for(int k=0;k<i-1;k++)
   {
   cout<<"\n"<<dish[k]<<"\t"<<"Rs:"<<price[k]<<"\n\n";
  	
				}
			}
		}

		
		
		

void test(int t, int i,int a[],string dish[]){
	bill b;
	b.displaybill(t,i,a,dish);
	system("pause");
	cls();
	b.rider(t);
	b.feedback();
	
}



class admin:public restaurant{
	private:
	string aid;
	string apass;
	public:
	admin(){
	apass="1234";
	aid="1234";
	}
	void show(){
		cout<<"just for formality";
	}
bool login(string ai,string pa){
	if(ai=="1234" && pa=="1234"){	
	}
	}
void control_panel(){
	mark:
	system("pause");
	cls();
	cout<<endl<<"-------------------------------------------------------------"<<endl;
	cout<<"1:for editing stocks"<<endl<<"2:for checking stocks"<<endl;
	cout<<"3:for editing employee number"<<endl<<"4:for checking total employees"<<endl;
	cout<<"5: for checking total revenue";
	cout<<endl;
	int v;
	cin>>v;
	if(v==1){
	int tst;
	cout<<endl<<"Enter the total number of stock that you want to set"<<endl;
	cin>>tst;
	set_tstock(tst);
	admin::get_tstock();
	goto mark;
}
else if(v==2){
	get_tstock();
	goto mark;
}
else if(v==3){
	cout<<endl<<"Enter the updated amount of employees, current employees are"<<endl;
	int en;
	cin>>en;
	set_enumb(en);
	goto mark;
}
else if(v==4){
	cout<<endl<<"Current employeees are"<<endl;
	get_enumb();
	goto mark;
}
else if(v==5){
	get_totalcash();
	goto mark;
}
}

	void set_tstock(int tst){
		totalstock=totalstock+tst;
	}
	void get_tstock(){
		cout<<"Total stock of the restaurant="<<totalstock;
	}	
	
	void set_enumb(int en){
		employees=en;
	}
	void get_enumb(){
		cout<<"Total employees of the restaurant ="<<employees;
	}

};


class customer: protected restaurant{
	protected:
		string email_id,emailid,emaiid;
		string pass,pw,password;
		string pass2;
		
		int choice;
		string add;
		int n;
		string n1;
		
	public:
		void menu(){
			cls();
			cout<<"Enter area you wish to have food delivered to: \n";
			cin>>add;
			cout<<"redirecting..";
			delay(400);
			cls();
			cout<<"Please wait while we locate restaurants in "<<add<<endl;
			delay(800);
			cls();
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\tLOADING";
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t";
			for(int v=0;v<12;v++)
			{
				cout<<"\xdb";
				delay(400);
			}
			cls();
			cout<<"\nRestaurants found in "<<add<<"! Please choose your desired restaurant to view their menu: \n";
			cout<<"[1]Sara's Kitchen\n";
			cout<<"[2]Rethek Foods\n";
			cout<<"[3]Umaima Kebab House\n";
			cout<<"[4]Stoves and Cloves (HIGHLY RECOMMENDED)\n";
			cin>>n;
			if(n==1)
			{
				cls();
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
		      	cls();
		      	i=0;
		      	t-0;
			
			//	cout<<"Welcome to Sara's Kitchen!\n";
		         restaurant::sarah(); 	
			}
			
			else if(n==2)
			{
				cls();
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
			    cls();
			    i=0;
			    t=0;
			
				//cout<<"Welcome to Rethek Foods!\n";
			     restaurant::rethek();
			}
			else if(n==3)
			{
				cls();
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
			    cls();
			    i=0;
			    t=0;
			
			//	cout<<"Welcome to Umaima Kebab House!\n";
			restaurant::umaima();
			}
			else if(n==4)
			{
				cls();
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
			    cls();
			    i=0;
			    t=0;
			
			}
				//cout<<"Welcome to Stoves and Cloves!\n";
			restaurant::stovesandcloves();
			}	
		
		void show(){cout<<"same";}
		void SignIn(){
			string emaiid,p;
			cls();
			cout<<"Enter username or email address: \n";
			cin>>email_id;
			cout<<"Enter password: \n";
			cin>>pass;
			regdata.open(name,ios::in);
			regdata.seekg(0,ios::beg);
			while(!regdata.eof()){
				getline(regdata,emaiid);
				getline(regdata,pw);
				regdata.close();
			if((email_id==emaiid) && (pass==pw)){
		
				system("pause");
				
				customer::menu();
				
			}
			
			
			else
			{
			   	cout<<"\nAccess Denied!Do you wish to try again?\n[1]YES\n[2]NO\n";
			
				cin>>choice;
				if(choice==1)
				{
					cls();
					cout<<"Redirecting back to login page.. Please Wait!\n";
					cls();
					customer::SignIn();
				}
				else if(choice==2)
				{
					exit();
				}
			}
			regdata.close();}
		}
		void SignUp()
		{
			cls();
	int ph;
			cout<<"Enter your email address: \n";
			cin>>emailid;
			cout<<"enter phone number: \n";
			cin>>ph;
			cout<<"Enter a strong password: \n";
			cin>>password;
			cout<<"Enter a strong password again: \n";
			cin>>pass2;
			if(password==pass2)
			{	regdata.open(name,ios::app);
			regdata<<emailid<<"\n"<<password<<"\n";
				regdata.close();
				cout<<"Your Sign Up was successful! GetSetEat will send you regular notifications with our weekly deals. Thank You!\n";
				cout<<"Do you want to place an order? press 1\n";
				int A;
				cin>>A;
				if (A==1){
				
				customer::SignIn();}
			}
		else if (pw!=pass)
			{
				cout<<"Passowrds do not match!Please Try again.\n";
				cin>>pass2;
				
			}
			cout<<"Your Sign Up was successful! GetSetEat will send you regular notifications with our weekly deals. Thank You!\n";
			cout<<"do you want to place an order? press 1";
				customer::SignIn();

		}
		void start()
		{char n[20];
			cls();
			cout<<"\nWelcome to GetSetEat!\n";
			cout<<"Please enter your name for referencing purposes: \n";
			cin>>n;
			name=n;
			cls();
			cout<<"Thank You "<<name<<" for choosing GetSetEat!\n";
			cout<<"Choose the appropriate option: \n [1] Sign Up\n [2]Sign In\n";
			cin>>choice;
			if(choice==1)
			{
				customer::SignUp();
			}
			else if(choice==2)
			{
				customer::SignIn();
			}
		}
};


class choice{
	public:	
	choice(){
	admin ad;
	int acc;
	
	{time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "\n\n\t\t\t\tCURRENT TIME:\n";
	cout << "\t\t\t\t\t\t"<<timePtr->tm_hour << ":"<< timePtr->tm_min << ":"<< timePtr->tm_sec << endl;
	cout << "\t\t\t\tToday's Date: " <<endl;
	cout << "\t\t\t\t\t\t"<<timePtr->tm_mday << "/" << timePtr->tm_mon+1 << "/" << timePtr->tm_year+1900  <<endl<<endl;
	
	}
	cout<<"\n\t\t\t\t\t\t\tFOOD DELIVERY MANAGEMENT SYSTEM\n";
	cout<<"\t\t\t\t\t\t\t\tGetSetEat\n";
	cout<<"PRESENTED BY:\nUmaima Sohail (18K-1125)\nRethek Kumar (18K-0242)\nSarah Fatima (18K-0205)\n\n\n";
	delay(300);
	system("pause");
	cls();
	
trys:
cout<<"\n\t\t\t\tGetSetEat"<<endl<<endl;
cout<<"\t\t\t\tEnter your choice"<<endl;
cout<<"\t\t\t\t1: Customer Access"<<endl;
cout<<"\t\t\t\t2: Admin access"<<endl;
cout<<"\t\t\t\t3: Return back"<<endl<<endl;
LOOP:cin>>acc;
if(acc==2){
cout<<endl<<endl<<"\n\t\t\t\tEnter ID:\n\t\t\t\t";
string id,pass;
cin>>id;
cout<<"\n\t\t\t\tPASSWORD:\n\t\t\t\t";
cin>>pass;
if(ad.login(id,pass)==1){
	system("CLS");
	cout<<"login successful"<<endl;
	ad.control_panel();
}
else{

	cout<<"ERROR-Authorisation Required"<<endl<<endl<<endl;
	cout<<"Try again?1 for YES"<<endl;
	int lo;
	cin>>lo;
	if(lo==1){
		cout<<"Enter the choice again"<<endl;
	goto LOOP;
}
else{
	cout<<"Thanks for visiting GetSetEat page"<<endl;
}
}
}
else if(acc==1){
		customer obj;
	obj.start();
}
else if(acc==3){
	cout<<"Thanks for visitng GetSetEat page"<<endl;
}
}
};

int main(){
system("COLOR E0");
cls();
choice ch;
}
