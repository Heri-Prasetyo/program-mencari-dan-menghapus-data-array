#include<iostream>

using namespace std;
int main()
{
int A[20];
int i, j, nilai, batas, baru,a,b,c,d,k;
cout<<"\t\tPROGRAM ARRAY\n";
cout<<"\nMasukan Jumlah Elemen : ";
cin>>batas;
cout<<"\n===================================================";
cout<<endl;

//menampilkan nilai yang terdapat pada elemen array
for(i=0;i<batas;i++)
{
    cout<<"\nData Indeks ["<<i<<"]= ";cin>>A[i];
}
    cout<<endl;

//memasukan nilai yang akan dicari
cout<<"\nMasukan Nilai yang akan dicari = ";
cin>>nilai;

//melakukan pencarian data
for(j=0;j<batas;j++)
{
    if(A[j]==nilai)
{
    cout<<"\nNilai yang dicari terdapat pada indeks ["<<j<<"]";
}
}

{
    cout<<"\nData["<<b<<"]="<<A[b]<<"\n";

}


//menghapus data
cout<<"\n========================================================";
cout<<endl;
cout<<"\nMasukan indeks yang ingin dihapus : ";
cin>>d;
i=d;
cout<<"\nNilai yang dihapus : ";
cout<<" "<<A[i]<<" pada Indeks ["<<i<<"] \n";
cout<<"\nNilai akhir : \n";
for(j=d;j<batas;j++)
    {
        A[j]=A[j+1];
    }
    for(k=0;k<batas-1;k++)
    {
        cout<<"\nData["<<k<<"]="<<A[k];
    }
    return 0;
}
