void menu(double **fMat,double **fMatB,int iRenB, int iColB,int iRenA,int iColA);

double** crearMatrizSum(int iRenB, int iColB,int iRenA,int iColA);
void sumMatriz(double **sumfRen,double **fMat,double **fMatB,int iColA,int iRenA);

double** crearMatrizResta(int iRenB, int iColB,int iRenA,int iColA);
void resMatriz(double **resfRen,double **fMat,double **fMatB,int iColA,int iRenA);

double** crearMatrizMulti(int iRenB, int iColB,int iRenA,int iColA);
void multMatriz(double **multfRen,double **fMat,double **fMatB,int iColA,int iRenA);

double** redimencionarMatrizB(double **fRen,int iRenB, int iColB);

double** crearMatrizA(int iRenA, int iColA);
double** crearMatrizB(int iRenB, int iColB);

void llenarMatrizA(double **fMat, int iRenA, int iColA);
void llenarMatrizB(double **fMatB, int iRenB, int iColB);

void imprimirMatrizA(double **fMat, int iRenA, int iColA);
void imprimirMatrizB(double **fMatB, int iRenB, int iColB);

void destruirMatrizA(double **fMat, int iRenA);
void destruirMatrizB(double **fMatB, int iRenA);