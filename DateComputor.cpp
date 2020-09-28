#include<iostream>
using namespace std;

class Date
{
    public:
    Date(int y=0,int m=0,int d=0):year(y),month(m),day(d){}
    void add(int i);
    void minus(int j);
    void operator++();
    void operator--();
    void operator++(int);
    void operator--(int);
    int dateComplutor(const Date &d2)const;
    void display() const;
    void checkDatePlus();
    void checkDateMinus();
    private:
    int year;
    int month;
    int day;

};

void Date::checkDatePlus()
{
    switch(month)
    {
        case(1):case(3):case(5):case(7):case(8):case(10):
        {
            if (day>31)
                {
                    month+=1;
                    day-=31;
                }
        }break;
        case(12):
        {
            if(day>31)
            {
                month=1;
                year+=1;
                day-=31;
            }
        }
        case(4):case(6):case(9):case(11):
        {
            if(day>30)
            {
                month+=1;
                day-=30;
            }
        }break;
        case(2):
        {
            if(year%4==0||year%100==0)
            {
                if(day>29)
                    {
                        month+=1;
                        day-=29;
                    }
            }
            else if(day>28)
                {
                    month+=1;
                    day-=28;
                }
        }break;
        default:break;
    }
}
void Date::checkDateMinus()
{
    if (day<=0)
    {
        //cout<<"day now:"<<day<<"month now:"<<month<<endl;
        switch(month)
        {
            case(1):{month=12;year-=1;day+=31;}break;
            case(2):case(4):case(6):case(8):case(9):case(11):{month-=1;day+=31;}break;//currentMonth
            case(3):{month-=1;if(year%4==0||year%100==0){day+=29;}else day+=28;}break;//Month will be Feb after minus
            case(5):case(7):case(10):case(12):{month-=1;day+=30;}break;
            default:break;
        }
    }
}
void Date::add(int i)
{
    day+=i;
    checkDatePlus();
}

void Date::minus(int j)
{
    day-=j;
    checkDateMinus();
}

void Date::operator++()
{
    day+=1;
    checkDatePlus();
}

void Date::operator++(int)
{
    day+=1;
    checkDatePlus();
}

void Date::operator--()
{
    day-=1;
    checkDateMinus();
}

void Date::operator--(int)
{
    day-=1;
    checkDateMinus();
}

void Date::display() const
{
    cout<<"The date is: "<<year<<"/"<<month<<"/"<<day<<";"<<endl;
}

int Date::dateComplutor(const Date&d2) const
{
    int date=0;
    //figure out which is the bigger;
    int yearDistance,monthDistance,dateDistance;
    bool d2Leap=(d2.year%4==0||d2.year%100==0);
    bool d1Leap=(year%4==0||year%100==0);
    yearDistance=d2.year-year;
    if(yearDistance==0)
    {
        monthDistance=d2.month-month;
        if(monthDistance==0)
        {
            dateDistance=d2.day-day;
            if(dateDistance<0)
                date=day-d2.day;
            else date=dateDistance;
        }
        else // Compare dates
        {
           int date1=date,date2=d2.day;
           if(d1Leap)
           {
               switch(month)
                {
                    case(1):break;
                    case(2):date1+=31;break;
                    case(3):date1+=(31+29);break;
                    case(4):date1+=(31+29+31);break;
                    case(5):date1+=(31+29+31+30);break;
                    case(6):date1+=(31+29+31+30+31);break;
                    case(7):date1+=(31+29+31+30+31+30);break;
                    case(8):date1+=(31+29+31+30+31+30+31);break;
                    case(9):date1+=(31+29+31+30+31+30+31+31);break;
                    case(10):date1+=(31+29+31+30+31+30+31+31+30);break;
                    case(11):date1+=(31+29+31+30+31+30+31+31+30+31);break;
                    case(12):date1+=(31+29+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
                switch(d2.month)
                {
                    case(1):break;
                    case(2):date2+=31;break;
                    case(3):date2+=(31+29);break;
                    case(4):date2+=(31+29+31);break;
                    case(5):date2+=(31+29+31+30);break;
                    case(6):date2+=(31+29+31+30+31);break;
                    case(7):date2+=(31+29+31+30+31+30);break;
                    case(8):date2+=(31+29+31+30+31+30+31);break;
                    case(9):date2+=(31+29+31+30+31+30+31+31);break;
                    case(10):date2+=(31+29+31+30+31+30+31+31+30);break;
                    case(11):date2+=(31+29+31+30+31+30+31+31+30+31);break;
                    case(12):date2+=(31+29+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }

           }
           else//not leap year
           {
               switch(month)
                {
                    case(1):break;
                    case(2):date1+=31;break;
                    case(3):date1+=(31+28);break;
                    case(4):date1+=(31+28+31);break;
                    case(5):date1+=(31+28+31+30);break;
                    case(6):date1+=(31+28+31+30+31);break;
                    case(7):date1+=(31+28+31+30+31+30);break;
                    case(8):date1+=(31+28+31+30+31+30+31);break;
                    case(9):date1+=(31+28+31+30+31+30+31+31);break;
                    case(10):date1+=(31+28+31+30+31+30+31+31+30);break;
                    case(11):date1+=(31+28+31+30+31+30+31+31+30+31);break;
                    case(12):date1+=(31+28+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
                switch(d2.month)
                {
                    case(1):break;
                    case(2):date2+=31;break;
                    case(3):date2+=(31+28);break;
                    case(4):date2+=(31+28+31);break;
                    case(5):date2+=(31+28+31+30);break;
                    case(6):date2+=(31+28+31+30+31);break;
                    case(7):date2+=(31+28+31+30+31+30);break;
                    case(8):date2+=(31+28+31+30+31+30+31);break;
                    case(9):date2+=(31+28+31+30+31+30+31+31);break;
                    case(10):date2+=(31+28+31+30+31+30+31+31+30);break;
                    case(11):date2+=(31+28+31+30+31+30+31+31+30+31);break;
                    case(12):date2+=(31+28+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
           }
           if(date1>date2)
           {
                date=date1-date2;
           }
            else date=date2-date1;
        }

    }
    else //not in the same year
    {
        if(d2.year<year)//d2 before d1
        {
            
            if(d2Leap)
            {
                switch(d2.month)
                {
                case(1):date+=(31-d2.day+29+31+30+31+30+31+31+30+31+30+31);break;
                case(2):date+=(29-d2.day+31+30+31+30+31+31+30+31+30+31);break;
                case(3):date+=(31-d2.day+30+31+30+31+31+30+31+30+31);break;
                case(4):date+=(30-d2.day+31+30+31+31+30+31+30+31);break;
                case(5):date+=(31-d2.day+30+31+31+30+31+30+31);break;
                case(6):date+=(30-d2.day+31+31+30+31+30+31);break;
                case(7):date+=(31-d2.day+31+30+31+30+31);break;
                case(8):date+=(31-d2.day+30+31+30+31);break;
                case(9):date+=(30-d2.day+31+30+31);break;
                case(10):date+=(31-d2.day+30+31);break;
                case(11):date+=(30-d2.day+31);break;
                case(12):date+=31-d2.day;break;
                default:break;
                }
                date+=day;
                switch(month)
                {
                    case(1):break;
                    case(2):date+=31;break;
                    case(3):date+=(31+28);break;
                    case(4):date+=(31+28+31);break;
                    case(5):date+=(31+28+31+30);break;
                    case(6):date+=(31+28+31+30+31);break;
                    case(7):date+=(31+28+31+30+31+30);break;
                    case(8):date+=(31+28+31+30+31+30+31);break;
                    case(9):date+=(31+28+31+30+31+30+31+31);break;
                    case(10):date+=(31+28+31+30+31+30+31+31+30);break;
                    case(11):date+=(31+28+31+30+31+30+31+31+30+31);break;
                    case(12):date+=(31+28+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
            }
            else if(d1Leap)
            {
                switch(d2.month)
                {
                case(1):date+=(31-d2.day+28+31+30+31+30+31+31+30+31+30+31);break;
                case(2):date+=(28-d2.day+31+30+31+30+31+31+30+31+30+31);break;
                case(3):date+=(31-d2.day+30+31+30+31+31+30+31+30+31);break;
                case(4):date+=(30-d2.day+31+30+31+31+30+31+30+31);break;
                case(5):date+=(31-d2.day+30+31+31+30+31+30+31);break;
                case(6):date+=(30-d2.day+31+31+30+31+30+31);break;
                case(7):date+=(31-d2.day+31+30+31+30+31);break;
                case(8):date+=(31-d2.day+30+31+30+31);break;
                case(9):date+=(30-d2.day+31+30+31);break;
                case(10):date+=(31-d2.day+30+31);break;
                case(11):date+=(30-d2.day+31);break;
                case(12):date+=31-d2.day;break;
                default:break;
                }
                date+=day;
                switch(month)
                {
                    case(1):break;
                    case(2):date+=31;break;
                    case(3):date+=(31+29);break;
                    case(4):date+=(31+29+31);break;
                    case(5):date+=(31+29+31+30);break;
                    case(6):date+=(31+29+31+30+31);break;
                    case(7):date+=(31+29+31+30+31+30);break;
                    case(8):date+=(31+29+31+30+31+30+31);break;
                    case(9):date+=(31+29+31+30+31+30+31+31);break;
                    case(10):date+=(31+29+31+30+31+30+31+31+30);break;
                    case(11):date+=(31+29+31+30+31+30+31+31+30+31);break;
                    case(12):date+=(31+29+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
            }
            else//d1 & d2 both are not leap year
            {
                switch(d2.month)
                {
                case(1):date+=(31-d2.day+28+31+30+31+30+31+31+30+31+30+31);break;
                case(2):date+=(28-d2.day+31+30+31+30+31+31+30+31+30+31);break;
                case(3):date+=(31-d2.day+30+31+30+31+31+30+31+30+31);break;
                case(4):date+=(30-d2.day+31+30+31+31+30+31+30+31);break;
                case(5):date+=(31-d2.day+30+31+31+30+31+30+31);break;
                case(6):date+=(30-d2.day+31+31+30+31+30+31);break;
                case(7):date+=(31-d2.day+31+30+31+30+31);break;
                case(8):date+=(31-d2.day+30+31+30+31);break;
                case(9):date+=(30-d2.day+31+30+31);break;
                case(10):date+=(31-d2.day+30+31);break;
                case(11):date+=(30-d2.day+31);break;
                case(12):date+=31-d2.day;break;
                default:break;
                }
                date+=day;
                switch(month)
                {
                    case(1):break;
                    case(2):date+=31;break;
                    case(3):date+=(31+28);break;
                    case(4):date+=(31+28+31);break;
                    case(5):date+=(31+28+31+30);break;
                    case(6):date+=(31+28+31+30+31);break;
                    case(7):date+=(31+28+31+30+31+30);break;
                    case(8):date+=(31+28+31+30+31+30+31);break;
                    case(9):date+=(31+28+31+30+31+30+31+31);break;
                    case(10):date+=(31+28+31+30+31+30+31+31+30);break;
                    case(11):date+=(31+28+31+30+31+30+31+31+30+31);break;
                    case(12):date+=(31+28+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
            }
    
        }
        else//d2.year>year
        {
            if(d1Leap)
            {
                switch(month)//d1.month is in the early year
                {
                case(1):date+=(31-day+29+31+30+31+30+31+31+30+31+30+31);break;
                case(2):date+=(29-day+31+30+31+30+31+31+30+31+30+31);break;
                case(3):date+=(31-day+30+31+30+31+31+30+31+30+31);break;
                case(4):date+=(30-day+31+30+31+31+30+31+30+31);break;
                case(5):date+=(31-day+30+31+31+30+31+30+31);break;
                case(6):date+=(30-day+31+31+30+31+30+31);break;
                case(7):date+=(31-day+31+30+31+30+31);break;
                case(8):date+=(31-day+30+31+30+31);break;
                case(9):date+=(30-day+31+30+31);break;
                case(10):date+=(31-day+30+31);break;
                case(11):date+=(30-day+31);break;
                case(12):date+=31-day;break;
                default:break;
                }
                date+=d2.day;
                switch(d2.month)
                {
                    case(1):break;
                    case(2):date+=31;break;
                    case(3):date+=(31+28);break;
                    case(4):date+=(31+28+31);break;
                    case(5):date+=(31+28+31+30);break;
                    case(6):date+=(31+28+31+30+31);break;
                    case(7):date+=(31+28+31+30+31+30);break;
                    case(8):date+=(31+28+31+30+31+30+31);break;
                    case(9):date+=(31+28+31+30+31+30+31+31);break;
                    case(10):date+=(31+28+31+30+31+30+31+31+30);break;
                    case(11):date+=(31+28+31+30+31+30+31+31+30+31);break;
                    case(12):date+=(31+28+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
            }
            else if(d2Leap)
            {
                switch(month)
                {
                case(1):date+=(31-day+28+31+30+31+30+31+31+30+31+30+31);break;
                case(2):date+=(28-day+31+30+31+30+31+31+30+31+30+31);break;
                case(3):date+=(31-day+30+31+30+31+31+30+31+30+31);break;
                case(4):date+=(30-day+31+30+31+31+30+31+30+31);break;
                case(5):date+=(31-day+30+31+31+30+31+30+31);break;
                case(6):date+=(30-day+31+31+30+31+30+31);break;
                case(7):date+=(31-day+31+30+31+30+31);break;
                case(8):date+=(31-day+30+31+30+31);break;
                case(9):date+=(30-day+31+30+31);break;
                case(10):date+=(31-day+30+31);break;
                case(11):date+=(30-day+31);break;
                case(12):date+=31-day;break;
                default:break;
                }
                date+=d2.day;
                switch(d2.month)
                {
                    case(1):break;
                    case(2):date+=31;break;
                    case(3):date+=(31+29);break;
                    case(4):date+=(31+29+31);break;
                    case(5):date+=(31+29+31+30);break;
                    case(6):date+=(31+29+31+30+31);break;
                    case(7):date+=(31+29+31+30+31+30);break;
                    case(8):date+=(31+29+31+30+31+30+31);break;
                    case(9):date+=(31+29+31+30+31+30+31+31);break;
                    case(10):date+=(31+29+31+30+31+30+31+31+30);break;
                    case(11):date+=(31+29+31+30+31+30+31+31+30+31);break;
                    case(12):date+=(31+29+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
            }
            else//d1 & d2 both are not leap year
            {
                switch(month)
                {
                case(1):date+=(31-day+28+31+30+31+30+31+31+30+31+30+31);break;
                case(2):date+=(28-day+31+30+31+30+31+31+30+31+30+31);break;
                case(3):date+=(31-day+30+31+30+31+31+30+31+30+31);break;
                case(4):date+=(30-day+31+30+31+31+30+31+30+31);break;
                case(5):date+=(31-day+30+31+31+30+31+30+31);break;
                case(6):date+=(30-day+31+31+30+31+30+31);break;
                case(7):date+=(31-day+31+30+31+30+31);break;
                case(8):date+=(31-day+30+31+30+31);break;
                case(9):date+=(30-day+31+30+31);break;
                case(10):date+=(31-day+30+31);break;
                case(11):date+=(30-day+31);break;
                case(12):date+=31-day;break;
                default:break;
                }
                date+=d2.day;
                switch(d2.month)
                {
                    case(1):break;
                    case(2):date+=31;break;
                    case(3):date+=(31+28);break;
                    case(4):date+=(31+28+31);break;
                    case(5):date+=(31+28+31+30);break;
                    case(6):date+=(31+28+31+30+31);break;
                    case(7):date+=(31+28+31+30+31+30);break;
                    case(8):date+=(31+28+31+30+31+30+31);break;
                    case(9):date+=(31+28+31+30+31+30+31+31);break;
                    case(10):date+=(31+28+31+30+31+30+31+31+30);break;
                    case(11):date+=(31+28+31+30+31+30+31+31+30+31);break;
                    case(12):date+=(31+28+31+30+31+30+31+31+30+31+30);break;
                    default:break;
                }
            }
        }
        //got the day rest in the early year and the day pasted in the lated year
        if(yearDistance==1||yearDistance==-1)
        {
            date=date;
        }
        else//many years
        {
            int yeark;
            int leapNumber=0;
            if(yearDistance>0)//d2.year>year
            {
                for(yeark=year;yeark<d2.year;yeark++)
                {
                    if(yeark%4==0||yeark%100==0)
                    {
                        if(yeark!=year&&yeark!=d2.year)
                        {
                            leapNumber++;
                        }
                    }
                }
            }
            else//year>d2.year
            {
                for(yeark=d2.year;yeark<year;yeark++)
                {
                    if(yeark%4==0||yeark%100==0)
                    {
                        if(yeark!=year&&yeark!=d2.year)
                        {
                            leapNumber++;
                        }
                    }
                }
                yearDistance=0-yearDistance;
            }
            date+=((yearDistance-1)*365+leapNumber);
        }
    }

    return date;
}

int main(void)
{
    Date d1(2020,1,22);
    Date d2(2017,3,22);
    d1.display();
    int c;
    cout<<"Press 0 if you want to add any number:"<<endl
    <<"Press 1 if you want to minus any number:"<<endl
    <<"Press 2 if you want to check d1++:"<<endl
    <<"Press 3 if you want to check ++d1:"<<endl
    <<"Press 4 if you want to check d1--:"<<endl
    <<"Press 5 if you want to check --d1:"<<endl;
    cin>>c;
    int i;
    int j;
    switch(c)
    {
        case(0):{cout<<"add i to d1,input i:";cin>>i;d1.add(i);}break;
        case(1):{cout<<"minus j to d1,input j:";cin>>j;d1.minus(j);}break;
        case(2):d1++;break;
        case(3):++d1;break;
        case(4):d1--;break;
        case(5):--d1;break;
    }
    d1.display();
    d2.display();
    int date=0;
    date=d1.dateComplutor(d2);
    cout<<"date between d1 and d2 is:"<<date;
    return 0;
    
}