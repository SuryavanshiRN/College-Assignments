#include<iostream>
using namespace std;

class Sets{
public:
    int Coding[10], Project[10], PaperP[10], Mastermind[10];
    int C[10], D[20], E[20];
    int m, n, p, q, k;

    void Read();
    void Intersection(int A[],int B[], int m,int n);
    void Union(int A[],int B[], int m,int n);
    void Difference(int A[],int B[], int m,int n);
    void Display(int A[],int m);
};

int main() {
    
    Sets equinox;
    equinox.Read();
    
    
    equinox.Intersection(equinox.Coding, equinox.Project, equinox.m, equinox.n);
    cout<<"Students participated in Coding and Project competetion both:-\n";
    equinox.Display(equinox.C,equinox.k);
    
    
    equinox.Union(equinox.Coding, equinox.Project, equinox.m, equinox.n);
    equinox.Union(equinox.D, equinox.Mastermind, equinox.k, equinox.q);
    cout<<"Students participated in Either Coding or Project or PaperPresentation:-\n";
    equinox.Display(equinox.D,equinox.k);
    
    
    equinox.Difference(equinox.Coding, equinox.Mastermind, equinox.m, equinox.q);
    cout<<"Students participated in Coding but not in Mastermind:-\n";
    equinox.Display(equinox.E,equinox.k);
    
    
    equinox.Intersection(equinox.Coding,equinox.Project,equinox.m,equinox.n);
    equinox.Intersection(equinox.C, equinox.PaperP, equinox.k, equinox.p);
    equinox.Intersection(equinox.C, equinox.Mastermind, equinox.k, equinox.q);
    cout<<"Students participated in all 4 competetions:-\n";
    equinox.Display(equinox.C,equinox.k);
    
    
    return 0;
}




void Sets::Read(){
        cout<<"Enter the number of students participated in Coding: ";
        cin>>m;
        cout<<"Enter the roll nos of students participated: ";
        for(int i=0; i<m; i++){
            cin>>Coding[i];
        }
        cout<<endl;

        cout<<"Enter the number of students participated in Project: ";
        cin>>n;
        cout<<"Enter the roll nos of students participated: ";
        for(int i=0; i<n; i++){
            cin>>Project[i];
        }
        cout<<endl;
       
        cout<<"Enter the number of students participated in Paper Presentation: ";
        cin>>p;
        cout<<"Enter the roll nos of students participated: ";
        for(int i=0; i<p; i++){
            cin>>PaperP[i];
        }
        cout<<endl;
       
        cout<<"Enter the number of students participated in Mastermind: ";
        cin>>q;
        cout<<"Enter the roll nos of students participated: ";
        for(int i=0; i<q; i++){
            cin>>Mastermind[i];
        }
        cout<<endl;
    }


void Sets::Intersection(int A[],int B[],int m,int n){
        int valid[100] = {0};
        k = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(A[i] == B[j]){
                    if(valid[A[i]] == 0){
                        C[k] = A[i];
                        k++;
                        valid[A[i]] = 1;
                        break;
                    }
                }
            }
        }
    }    


void Sets::Union(int A[],int B[],int m,int n){
        int f[100]={0};
        k=0;
        for(int i=0;i<m;i++){
            if(f[A[i]]==0){
                D[k]=A[i];
                k++;
                f[A[i]]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(f[B[i]]==0){
                D[k]=B[i];
                k++;
                f[B[i]]=1;
            }
        }
        cout<<endl;
    }    
   
void Sets::Difference(int A[],int B[],int m,int n){
    int f[100]={0};
    int j;
    k=0;
    for(int i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(A[i]== B[j]){
                break;
            }
        }
        if(j==n){
            if(f[A[i]] == 0){
                E[k] = A[i];
                k++;
                f[A[i]] = 1;
            }
        }
    }        
    cout<<endl;
}


void Sets::Display(int A[],int m){
    cout << "Roll nos : ";
    for (int i = 0; i < m; i++) {
        cout << A[i] << ", ";
    }
    cout << endl;
}
