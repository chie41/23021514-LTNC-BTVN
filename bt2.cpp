#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct Date
{
    int day,month,year;
public:
    Date(int _day,int _month,int _year)
    {
        day=_day;
        month=_month;
        year=_year;
    }

};
void nhapDate(Date& d)
{
    cin>>d.day>>d.month>>d.year;
}
void inDate (const Date& d)
{
    cout<< setw(2)<<setfill('0')<<d.day<<"/";
     cout<< setw(2)<<setfill('0')<<d.month<<"/";
     cout<<d.year;
}
int tinhSongayCuaThangNam(int month,int y)
{
    int maxDay;
     switch (month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        {
            maxDay=31;
            break;
        }
        case 4:case 6:case 9: case 11:
        {
            maxDay=30;
            break;
        }
        case 2:
        {
            if((y%4==0&&y%100)||y%400==0)
                maxDay=29;
                else
                maxDay=28;
                break;

        }
    }
    return maxDay;
}
bool laDateHople(const Date& td)
{
    int d=td.day;
    int m=td.month;
    if(d<1||m<1)
    return false;
    int maxDay = tinhSongayCuaThangNam( td.month,td.year);
    if(d>maxDay)
    return false;
    return true;
}
void quyChuanDate(const Date& d, Date& d_hop_le) {
    int day = d.day;
    int month = d.month;
    int year = d.year;

    if (month < 1) {
        month = 1;
    } else if (month > 12) {
        month = 12;
    }

    if (day < 1) {
        day = 1;
    } else {
        int maxDay = tinhSongayCuaThangNam( d.month,d.year);
        if (day > maxDay) {
            day = maxDay;
        }
    }

    d_hop_le.day = day;
    d_hop_le.month = month;
    d_hop_le.year= year;
}
/*void tinhDateHomQua(const Date& hom_nay, Date& hom_qua);
{

}*/
void tinhDateNgayMai(const Date& hom_nay, Date& ngay_mai)
{
        Date nextDay(hom_nay.day + 1, hom_nay.month, hom_nay.month);
        if (laDateHople(nextDay)) {
            ngay_mai = nextDay;
        }
        Date nextDay2(1, hom_nay.month + 1, hom_nay.month);
        if (laDateHople(nextDay2)) {
            ngay_mai = nextDay2;
        }
        Date nextDay3(1, 1, hom_nay.month+1);
        if (laDateHople(nextDay3)) {
            ngay_mai = nextDay3;
        }
}
/*void congDate(const Date& d1, int ngay, Date& d2)
{
    while ( ngay--)
    {
        tinhDateHomqua(d1,d2);
    }
}*/
void truDate(const Date& d1, int ngay, Date& d2)
{
    while (ngay--)
    {
        tinhDateNgayMai(d1,d2);
    }
}
bool ktBangDate(const Date& d1, const Date& d2)
{
    if(d1.year!=d2.year||d1.month!=d2.month||d1.day!=d2.day)
    return false;
    return true;

}
bool ktNhoHonDate(const Date& d1, const Date& d2)
{
    if(d1.year<d2.year)
    {
        return true;
    }
    else
    if(d1.year==d2.year)
    {
        if(d1.month<d2.month)
        {
            return true;
        }
        else
            if(d1.month==d2.month)
        {
            if(d1.day<d2.day)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
bool ktLonHonDate(const Date& d1, const Date& d2)
{
    if(ktNhoHonDate(d1,d2)==false&&ktBangDate(d1,d2)==false)
        return true;
    else
        return false;
}
int tinhKhoangCach(const Date & d1, const Date & d2)
{

}

int main()
{
    int n;
    cin>>n;
    Date a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].day>>a[i].month>>a[i].year;
    }
    int cuoithang=0;
    int dauthang=0;
    int lienke=0;
    for(int i=0;i<n;i++)
    {
        int maxDay = tinhSongayCuaThangNam(a[i].month,a[i].year);
        if(a[i].day==maxDay)
            cuoithang++;
        if(a[i].day==1)
            dauthang++;
    }
    sort(a,a+n,ktLonHonDate);
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]==tinhDateNgayMai(a[i]))
        {
            lienke++;
        }
    }
}
